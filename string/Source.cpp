#include "Header.h"
#include<iostream>
#include <string>
using namespace std;
int s1()
{
	setlocale(LC_ALL, "Russian");
	char symbole;
	cout << "Введите символ, код которого хотите узнать(если буква, то только англ)" << endl;
	cin >> symbole;
	int kod = (int)symbole;
	cout << kod;


	return 0;
}
int s2()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите код, что б узнать, что за символ" << endl;
	cin >> n;
	while (n < 32)
	{
		cout << "Должен быть от 32 до 126 включительно" << endl;
		cin >> n;
	}
	while (n > 126)
	{
		cout << "Должен быть от 32 до 126 включительно" << endl;
		cin >> n;
	}
	char symbole = n;
	cout << symbole;


	return 0;
}
int s3()
{
	setlocale(LC_ALL, "Russian");
	char symbole;
	cout << "Введите символ и вы увидите символы, который идет перед ним и после него " << endl;
	cin >> symbole;
	int kod = (int)symbole;
	char symbole1 = kod - 1;
	char symbole2 = kod + 1;
	cout << symbole1 << endl;
	cout << symbole2 << endl;

	return 0;
}
int s13()
{
	setlocale(LC_ALL, "Russian");
	char s[256];
	cout << "Введите свой текст(только на английском), что б узнать количество цифр" << endl;
	cin.getline(s, 256);
	int digit = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]))digit++;
	}
	if (digit == 1)
	{
		cout << digit << " цифрa" << endl;
	}
	else if (digit > 1 && digit < 5) { cout << digit << " цифры" << endl; }
	else(cout << digit << " цифр" << endl);
	return 0;
}

int s14()
{
	setlocale(LC_ALL, "Russian");
	char s[256];
	cout << "Введите свой текст(только на английском), что б узнать количество прописных букв" << endl;
	cin.getline(s, 256);
	int alpha = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (isalpha(s[i]) && isupper(s[i]))alpha++;
	}
	if (alpha == 1)
	{
		cout << alpha << " прописная буква" << endl;
	}
	else if (alpha > 1 && alpha < 5) { cout << alpha << " прописные буквы" << endl; }
	else(cout << alpha << " прописных букв" << endl);
	return 0;
}
int s16()
{
	setlocale(LC_ALL, "Russian");
	char s[256];
	cout << "Введите свой текст(только на английском)" << endl;
	cin.getline(s, 256);
	for (int i = 0; i < strlen(s); i++)
	{
		if (isupper(s[i]))
			s[i] = tolower(s[i]);;
	}
	cout << s << endl;
	return 0;
}
int s26()
{
	int j = 0;
	setlocale(LC_ALL, "Russian");
	char s[256];
	cout << "Введите строку" << endl;
	cin.getline(s, 256);
	int n;
	cout << "Введите число" << endl;
	cin >> n;
	while (n < 0)
	{
		cout << "Должно быть больше 0" << endl;
		cin >> n;
	}
	if (strlen(s) > n) {
		for (int i = n + 1; i = strlen(s); i++) { s[j] = s[i]; j++; }
	}
	if (strlen(s) < n) { for (int i = 0; i = strlen(s); i++) { s[n + 1 + i] = s[i]; s[i] = '.'; } }
	cout << s << endl;
	return 0;
}
int s27()
{
	setlocale(LC_ALL, "Russian");
	string s1, s2 , result;
	cout << "Введите первую строку" << endl;
	getline(cin, s1);
	cout << "Введите вторую строку" << endl;
	getline(cin, s2);
	int n1, n2;
	cout << "Введите сколько элементов брать";
	cin >> n1;
	cin >> n2;
	result = s1.substr(0, n1);
	result += s2.substr(s2.size() - n2, n2);
	cout << result << endl;
	return 0;
}