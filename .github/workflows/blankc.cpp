#include <bits/stdc++.h>
#include <windows.h>
 #include <sys/types.h>
 #include <dirent.h>
 #include <sys/stat.h>
 #include <sys/types.h>



int main(int argc, char** argv) {
std::cout<<"                       wwwwwwwwwww         wwwwwww           wwwwwwwwww             wwwwwww    "<<std::endl;
std::cout<<"                     wwwwww                wwwwwww         wwwww       aaaaa        wwwwwww    "<<std::endl;
std::cout<<"                   wwwwww                  wwwwwww       wwwwww          aaaaa      wwwwwww    "<<std::endl;
std::cout<<"                     wwwwww                wwwwwwwwwwww     wwwww       aaaaaa    wwwwwwwwwwwww  "<<std::endl;
std::cout<<"                       wwwwwwwwwww         hhhhhh  hhhhhh     aaaaaaaaaa uuuuuuu  wwwwwwwwwwwww   "<<std::endl;
std::cout<<"                                           hhhhhh  hhhhhh                uuuuuuu     eeeeee       "<<std::endl;
std::cout<<"                                           hhhhhh  hhhhhh                            eeeeeeeeeeee "<<std::endl;
Sleep(2000);
for(int i=0;i<=50;i++){
std::cout<<"ÕýÔÚ³õÊ¼»¯";
if(i%2==0){
	std::cout<<"..";
}else{
	std::cout<<"...";
}
system("cls");
Sleep(20);
}
system("color 0A");
std::cout<<"»¶Ó­Ê¹ÓÃSASK_chat beta0.1"<<std::endl;
std::cout<<"Çë´ò¿ªtwo³ÌÐò!";
system("color 0B");
Sleep(2000);
std::cout<<std::endl<<"ÇëÊäÈëÒªËµµÄ»°:";
std::string a;
std::cin>>a;
std::fstream fout;
fout.open("chatl.txt");
fout<<a<<"\n";
fout.close();
Sleep(200000);
}
