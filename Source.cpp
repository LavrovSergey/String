#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <conio.h>
#include "Header.h"
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
	delete[]s;
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
	delete[]s;
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
	delete[]s;
	return 0;
}
int s26()
{
	setlocale(LC_ALL, "Russian");
	char s[256];
	cout << "������� ������" << endl;
	cin.getline(s, 256);
	size_t n;
	cout << "������� �����" << endl;
	cin >> n;
	while (n < 0)
	{
		cout << "������ ���� ������ 0" << endl;
		cin >> n;
	}
	char* s1 = new char[n + 1];
	if (strlen(s) >= n) {
		int b = strlen(s) - n;
		strcpy(s1, s + b);
	}
	else
	{
		s1[0] = 0;
		for (size_t i = 0; i < n - strlen(s); i++)
		{
			strcat(s1, ".");
		}
		strcat(s1, s);
	}
	cout << s1 << endl;
	delete[] s1;
	delete[]s;
	system("pause");
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
int s28()
{
	setlocale(LC_ALL, "Russian");
	char s[256];
	char s1[256];
	cout << "������� ������" << endl;
	cin.getline(s, 256);
	char symbole;
	cout << "������� ������" << endl;
	cin >> symbole;
	int j = 0;
	for (int i = 0; i <= strlen(s); i++)
	{
		if (s[i] == symbole)
		{
			s1[j] = s[i];
			s1[j + 1] = symbole;
			j++;
		}
		else(s1[j] = s[i]);


	}
	cout << s1 << endl;
	delete[]s;
	delete[]s1;
	return 0;
}
bool isalpha_rus(char c) {
	return c >= '�' && c <= '�' || c >= '�' && c <= '�';
}
int s41()
{
	setlocale(LC_ALL, "Russian");
	char s[256];
	cout << "������� ������" << endl;
	cin.getline(s, 256);
	int count = 1;
	if (s[0] == 32)count = 0;
	if (s[0] != 32)count = 1;
	for (int i = 1; i < strlen(s) - 1; i++)
	{
		if (isalpha_rus(s[i]) && isspace(s[i + 1]))count++;
	}
	cout << "����� " << count << " ����" << endl;
	delete[]s;

	return 0;
}
int s42()
{
	setlocale(LC_ALL, "");
	char s[256];
	cout << "������� ������" << endl;
	cin.getline(s, 256);
	int count = 0, wordlenght;
	for (int i = 0;; i++)
	{
		for (wordlenght = 0;; wordlenght++)
		{
			if (s[i + wordlenght] == ' ' || s[i + wordlenght] == '\0' || s[i + wordlenght] == ',' || s[i + wordlenght] == '.' || s[i + wordlenght] == '!' || s[i + wordlenght] == '?')
				break;
		}
		if (s[i] == '�')
		{
			count++;
		}
		i += wordlenght;
		if (s[i] == '\0')
			break;
	}
	cout << count;
	delete[]s;
	return 0;
}
int s43()
{
	int a = 0;
	int count = 0;
	setlocale(LC_ALL, "");
	char s[256];
	cout << "������� ������" << endl;
	cin.getline(s, 256);
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '�') { a++; }
		if ((s[i] == ' ') || (i < strlen(s)) && a > 0) { count++; a = 0; }
	}
	cout << count;
	delete[]s;
	return 0;
}
int s58()
{
	setlocale(LC_ALL, "");
	char s[256];
	cout << "������� ������" << endl;
	cin.getline(s, 256);
	int slash = 0;
	int point = 0;
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i] == '.') { point = i; break; }
	}
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i] == '\\') { slash = i; break; }
	}
	for (int i = slash + 1; i < point; i++)
	{
		cout << s[i];
	}
	delete[]s;
	return 0;
}
int s59()
{
	setlocale(LC_ALL, "");
	char s[256];
	cout << "������� ������" << endl;
	cin.getline(s, 256);
	int zero = 0;
	int point = 0;
	for (int i = strlen(s); i >= 0; i--)
	{
		if (s[i] == '\0') { zero = i; break; }
	}
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i] == '.') { point = i; break; }
	}
	for (int i = point + 1; i < zero; i++)
	{
		cout << s[i];
	}
	delete[]s;
	return 0;
}