
#include<iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <stdlib.h>  
#include <stdio.h> 
#include"stdafx.h"
#include <Windows.h>
#include <WinInet.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>
#include<io.h>
#include<UrlMon.h>
#include<tchar.h>
#include <stdio.h>
#pragma  comment (lib, "ws2_32.lib")

#define ICMP_ECHOREPLY  0  // ICMP回复应答
#define ICMP_ECHOREQ 8  // ICMP回应请求
#pragma comment(lib,"wininet.lib")

#define REQ_DATASIZE 32 // 请求数据报大小
bool internetCheckConnection();
void showHelp();
#include <conio.h>

using namespace std;;
int main(int argc, char* argv[])
{

	int choose;
	int b = rand();
	cout << "输入 by zfat";
	cout << endl;
	cout << "1，自动补全dll库";
	cout << endl;
	cout << "2，下载64位JAVA";
	cout << endl;
	cout << "3，下载32位JAVA";
	cout << endl;
	cout << "4，[cmd版]清除dns缓存";
	cout << endl;
	cout << "5，[网卡驱动版]清除dns缓存[需管理权限]";
	cout << endl;
	cout << "6，清空[host]文件";
	cout << endl;
	cout << "7，网络连接检测1次";
	cout << endl;
	cout << "8,[鬼畜版]网络连接检测";
	cout << endl;
	cout << "9,获取系统位数,自动下载JAVA";
	cout << endl;
	cout << "10,鸣谢者名单";
	cin >> choose;

	if (choose == 1)
	{
		system("start https://visualstudio.microsoft.com/zh-hans/thank-you-downloading-visual-studio/?sku=Community&rel=15#");
	}
	if (choose == 2)
	{
		system("start https://zfat.lanzous.com/iCKJ5jgj6mh");
	}
	if (choose == 3)
	{
		system("start https://zfat.lanzous.com/iFuytjgj7of");
	}
	if (choose == 4)
	{
		system("ipconfig/flushdns");
		return 0;
	}
	if (choose == 5)
	{
		cout << endl;
		cout << "**请以管理员权限运行**";
		Sleep(1000);
		cout << endl;
		cout << "此操作会使您立即断网，确定请输入1";
		int yes;
		cin >> yes;
		if (yes == 1)
		{
			
			system("netsh interface set interface WLAN disabled");
			cout << "加载中，请稍候";
			Sleep(5000);

			system("netsh interface set interface WLAN enabled");
			cout << endl;
			MessageBox(NULL, _T("成功"), _T("dns缓存刷新"), MB_OK);
		}
		else {

			return 0;
		}

	}
	if (choose == 6)
	{
		cout << "此操作无法恢复,";
		Sleep(10000);
		cout << endl;
		cout << "[警告1]确认删除请按1";
		int yes;
		cin >> yes;
		if (yes == 1)
		{
			cout << endl;
			cout << "[警告2]确认删除请按2";
			cin >> yes;
			if (yes == 2)
			{
				system("echo.>C:\\Windows\\System32\\drivers\\etc\\hosts");
				MessageBox(NULL, _T("成功"), _T("hosts内容刷新"), MB_OK);
			}
			else {

				return 0;
			}
		}
		else {

			return 0;
		}
		
	}
	if (choose == 7) 
	{
		
	
    
        if(internetCheckConnection())
        {
			MessageBox(NULL, _T("网络正常连接"), _T("网络连通性检测"), MB_OK);
			Sleep(100000);
            return 0;
        }
        else
        {
			MessageBox(NULL, _T("网络未正常连接"), _T("网络连通性检测"), MB_OK);
			Sleep(100000);
            return 0;
        }
    }
	if (choose == 8) 
	{
		
		
		int b= 99;
		bool ping = false;
		while (b)
		{
			static int count = 0;
			if (internetCheckConnection())
			{
				MessageBox(NULL, _T("网络正常连接"), _T("网络连通性检测"), MB_OK);
				return 0;
			}
			else
			{
				if (b != 0)
				{
					printf("已检测 %d 次，网络未正常连接！\n", ++count);
					
				}
			}
		}
	}
	if (choose == 9) {
		if (_access("C:\\Windows\\SysWOW64", 0))
		{
            MessageBox(NULL, _T("已检测您为32位系统"), _T("系统检测"), MB_OK);
			system("start https://zfat.lanzous.com/iFuytjgj7of");  //32bit
		}
		else
		{
            MessageBox(NULL, _T("已检测您为64位系统"), _T("系统检测"), MB_OK);
			system("start https://zfat.lanzous.com/iCKJ5jgj6mh"); //64bit
		}
			
	}
	if (choose == 10) {
		
		cout << "╰ゞ耀-浮殤ゝ -- 提供在32位系统测试情况";
		Sleep(1000000);
	}
	if (choose == 11) {

	}
else {
		cout << "听不见大点声 by zfat";
		return 0;
	}
}
void u();
bool internetCheckConnection()
{
	LPCSTR url[3] = {
		"http://www.baidu.com/",
		"http://www.taobao.com/",
		"http://www.qq.com/"
	};
	bool ping = false;
	int i = 0;
	while (!ping && i < 3)
	{
		ping = InternetCheckConnectionA(url[i], FLAG_ICC_FORCE_CONNECTION, 0);
		i++;
	}

	return ping;
}


