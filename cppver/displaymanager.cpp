#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int changeto1080p();
int changeto768();
int main() {
	while (1) {
		string menu = "Simple Display Manager\nPress any to exit\n1.Change resolution mode \n2.Change projectmode";
		cout<<menu<<endl;
		char inputer = _getch();
		if(inputer == '1') {
			string menu1 = "1.Change to 1080p\n2.Change to 1366 mode";
			cout<<menu1<<endl;
			char inputer1 = _getch();
			if (inputer1 == '1') {
				int check = changeto1080p();
				if (check == 1) {
					cout<<"1080p success"<<endl;
				} else {
					cout<<"failed changing to 1080p"<<endl;
				}
			} else if (inputer1 == '2') {
				int check = changeto768();
				if (check == 1) {
					cout<<"1366 mode success"<<endl;
				} else {
					cout<<"failde changing to 1366 mode"<<endl;
				}
			}
		} else if (inputer == '2') {
			string menu2= "";
		} else {
			cout<<"Bye"<<endl;
			break;
		}
	}
	return 0;
}

int changeto1080p() {
	system("QRes.exe /x:1920 /y:1080");
	return 1;
}
int changeto768() {
	system("QRes.exe /x:1366 /y:768");
	return 1;
}
int changetoExtend() {
	return 1;
}
int changetoOnly1() {
	return 1;
}
int changetoOnly2() {
	return 1;
}
