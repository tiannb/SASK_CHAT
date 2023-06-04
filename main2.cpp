#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;
int main()
{
	std::cout << "                       wwwwwwwwwww         wwwwwww           wwwwwwwwww             wwwwwww    " << std::endl;
	std::cout << "                     wwwwww                wwwwwww         wwwww       aaaaa        wwwwwww    " << std::endl;
	std::cout << "                   wwwwww                  wwwwwww       wwwwww          aaaaa      wwwwwww    " << std::endl;
	std::cout << "                     wwwwww                wwwwwwwwwwww     wwwww       aaaaaa    wwwwwwwwwwwww  " << std::endl;
	std::cout << "                       wwwwwwwwwww         hhhhhh  hhhhhh     aaaaaaaaaa uuuuuuu  wwwwwwwwwwwww   " << std::endl;
	std::cout << "                                           hhhhhh  hhhhhh                uuuuuuu     eeeeee       " << std::endl;
	std::cout << "                                           hhhhhh  hhhhhh                            eeeeeeeeeeee " << std::endl;
	Sleep(2000);
	for (int i = 0; i <= 50; i++) {
		std::cout << "正在初始化";
		if (i % 2 == 0) {
			std::cout << "..";
		}
		else {
			std::cout << "...";
		}
		system("cls");
		Sleep(20);
	}
	std::fstream oline;
	system("color 0F");
	std::cout << "初始化成功，开始读入"<<std::endl;
	system("color 0B");
	std::cout << "成功读入!!!";
	oline.open("chatl.txt", std::ios::in);
	char jk[10000] = { 0 };
	oline >> jk;
	oline.close();
	for (int i = 0; i < 10000; i++)
	{
		cout << jk[i];
	}return 0;
	Sleep(1000);
}
