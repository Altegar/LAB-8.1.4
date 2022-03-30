// LAB-8.1.4.cpp
// Сушинський Ігор
// Лабораторна робота №8.1
// Пошук та заміна символів у літерному рядку.
// Варіант 20
// 1 завдання
// Використання стандартних функцій для рядків string

#include <iostream>
#include <string>

using namespace std;

int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		pos++;
		if (s[pos + 1] == '-')
			k++;
	}

	return k;
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	string str;

	cout << "Ввести лiтерний рядок:" << endl;
	getline(cin, str);

	cout << "Лiтерний рядок мiстить " << Count(str) << " групи ', -'" << endl;

	return 0;
}