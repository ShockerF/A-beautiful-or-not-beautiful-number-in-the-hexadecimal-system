#include <iostream>
#include <string>
#include <map>




int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, sum1, sum2;
	using namespace std;
	char Alphabet[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C' };
	string num, s1, s2;
	i = 0;
	j = 0;
	//num = "0055237050A00";
	std::cout << "Введите число: ";
	std::cin >> num;
	s1 = "";
	s2 = "";
	sum1 = 0;
	sum2 = 0;
	//создаем страку из первых 6 символов ввходного числа 
	while (i < 6)
	{
		s1 += num[i];
		i++;
	 
	}
	i++;
	//создаем страку из последних 6 символов ввходного числа
	while (i < 13)
	{
		s2 += num[i];
		i++;
	}
	// использовали вложенный цикл для подcчёта суммы первых 6 цифр числа проверя входит ли эта цифра в 13-ричную систему счисления
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 13; j++) {
			if (s1[i] == Alphabet[j]) {
				sum1 = sum1 + j;

			}
		}
	}

		// использовали вложенный цикл для подcчёта суммы последних 6 цифр числа проверя входит ли эта цифра в 13-ричную систему счисления
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 13; j++) {
			if (s2[i] == Alphabet[j]) sum2 = sum2 + j;
		}
	}
	cout << " ";
	cout << sum1;
	cout << " ";
	cout << sum2;

	if (sum1 == sum2) { cout << " красивое"; }
	else
	{
		cout << " не красивое";
	}
	
}