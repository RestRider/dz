#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num = 0;
	std::cout << "введите четырёх значное число:\n";
	std::cin >> num;

	if (num < 1000 || num >> 9999)
	{
		std::cout << "Ошибка!!";
		return 0;
	}
	int fist_num = num / 1000;
	int second_num = (num % 1000) / 100;
	int third_num = (num % 100) / 10;
	int fourht_num = num % 10;

	num = second_num * 1000 + fist_num * 100 + fourht_num * 10 + third_num;
	std::cout << "ваше число: " << num;


}