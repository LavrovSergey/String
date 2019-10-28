#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int menu_1();
int menu_2();
int menu_3();
int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0: {int answer_1 = menu_1();
		switch (answer_1) {
		case 0: s1(); break;
		case 1: s2(); break;
		case 2: s3(); break;
		case 3: return 0;
		}
	}; break;
	case 1: {int answer_2 = menu_2();
		switch (answer_2) {
		case 0: s13(); break;
		case 1: s14(); break;
		case 2: s15(); break;
		case 3: return 0;
		}
	}; break;
	case 2: {int answer_3 = menu_3();
		switch (answer_3) {
		case 0: w1(); break;
		case 1: w2(); break;
		case 2: w3(); break;
		case 3: return 0;
		}; break;
	}; return 0;
		system("pause");
		return 0;
	}
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 5) % 5;
		if (key == 0) cout << "-> Section1" << endl;
		else  cout << "   Section1" << endl;
		if (key == 1) cout << "-> Section2" << endl;
		else  cout << "   Section2" << endl;
		if (key == 2) cout << "-> Section3" << endl;
		else  cout << "   Section3" << endl;
		if (key == 3) cout << "-> Section4" << endl;
		else  cout << "   Section4" << endl;
		if (key == 4) cout << "-> Section5" << endl;
		else  cout << "   Section5" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_1() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> S1" << endl;
		else  cout << "   S1" << endl;
		if (key == 1) cout << "-> S2" << endl;
		else  cout << "   S2" << endl;
		if (key == 2) cout << "-> S3" << endl;
		else  cout << "   S3" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_2() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "->S13" << endl;
		else  cout << "   S13" << endl;
		if (key == 1) cout << "-> S14" << endl;
		else  cout << "   S14" << endl;
		if (key == 2) cout << "-> S16" << endl;
		else  cout << "   S16" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_3() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> While1" << endl;
		else  cout << "   While1" << endl;
		if (key == 1) cout << "-> While2" << endl;
		else  cout << "   While2" << endl;
		if (key == 2) cout << "-> While3" << endl;
		else  cout << "   While3" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}