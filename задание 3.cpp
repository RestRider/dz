#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double hislo = 0;
	double hislomax = 0;
	int povtor = 0;
	std::cout << "������� 7 �����\n";
	while (povtor < 7)
	{
		std::cin >> hislo;
		if (hislo > hislomax)
		{
			hislomax = hislo;
		}
		povtor = povtor + 1;


	}
	std::cout << "������������ �����: " << hislomax;
}