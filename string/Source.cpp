#include "Header.h"
#include<iostream>
#include <string>
using namespace std;
int s1()
{
	setlocale(LC_ALL, "Russian");
	char symbole;
	cout << "������� ������, ��� �������� ������ ������(���� �����, �� ������ ����)" << endl;
	cin >> symbole;
	int kod = (int)symbole;
	cout << kod;


	return 0;
}
int s2()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���, ��� � ������, ��� �� ������" << endl;
	cin >> n;
	while (n < 32)
	{
		cout << "������ ���� �� 32 �� 126 ������������" << endl;
		cin >> n;
	}
	while (n > 126)
	{
		cout << "������ ���� �� 32 �� 126 ������������" << endl;
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
	cout << "������� ������ � �� ������� �������, ������� ���� ����� ��� � ����� ���� " << endl;
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
	cout << "������� ���� �����(������ �� ����������), ��� � ������ ���������� ����" << endl;
	cin.getline(s, 256);
	int digit = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]))digit++;
	}
	if (digit == 1)
	{
		cout << digit << " ����a" << endl;
	}
	else if (digit > 1 && digit < 5) { cout << digit << " �����" << endl; }
	else(cout << digit << " ����" << endl);
	return 0;
}

int s14()
{
	setlocale(LC_ALL, "Russian");
	char s[256];
	cout << "������� ���� �����(������ �� ����������), ��� � ������ ���������� ��������� ����" << endl;
	cin.getline(s, 256);
	int alpha = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (isalpha(s[i]) && isupper(s[i]))alpha++;
	}
	if (alpha == 1)
	{
		cout << alpha << " ��������� �����" << endl;
	}
	else if (alpha > 1 && alpha < 5) { cout << alpha << " ��������� �����" << endl; }
	else(cout << alpha << " ��������� ����" << endl);
	return 0;
}
int s16()
{
	setlocale(LC_ALL, "Russian");
	char s[256];
	cout << "������� ���� �����(������ �� ����������)" << endl;
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
	cout << "������� ������" << endl;
	cin.getline(s, 256);
	int n;
	cout << "������� �����" << endl;
	cin >> n;
	while (n < 0)
	{
		cout << "������ ���� ������ 0" << endl;
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
	cout << "������� ������ ������" << endl;
	getline(cin, s1);
	cout << "������� ������ ������" << endl;
	getline(cin, s2);
	int n1, n2;
	cout << "������� ������� ��������� �����";
	cin >> n1;
	cin >> n2;
	result = s1.substr(0, n1);
	result += s2.substr(s2.size() - n2, n2);
	cout << result << endl;
	return 0;
}