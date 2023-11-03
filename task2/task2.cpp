#include <iostream>

int main()
{
	/* 11 вариант. 
	Дано целое число N (> 0).
	Найти сумму 2 + (N + 1)2 + (N + 2)2 + . . .+ (2·N )2 (целое число).
	*/
	setlocale(LC_ALL, "Russian");
	int n,res,i;
	res = 0;
	std::cout << "Введите N";
	std::cin >> n;
	for (i = 1; i <= n; i++) {
		res = res + (n + i) * 2;
	}
	res = res + 2;
	std::cout <<"Результат = "<<res;

}

