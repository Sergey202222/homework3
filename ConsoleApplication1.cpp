#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "Оператор: ";
	std::string Operator{};
	std::cin >> Operator;
	bool booleanAlgebra1{ true }, booleanAlgebra2{ true }, booleanAlgebra3{};
	std::cout << std::boolalpha;
	if (Operator == "||")
	{
		booleanAlgebra3 = booleanAlgebra1 || booleanAlgebra2;
		std::cout << booleanAlgebra1 << ' ' << booleanAlgebra2 << ' ' << booleanAlgebra3 << '\n';
		booleanAlgebra1 = false;
		booleanAlgebra3 = booleanAlgebra1 || booleanAlgebra2;
		std::cout << booleanAlgebra1 << ' ' << booleanAlgebra2 << ' ' << booleanAlgebra3 << '\n';
		booleanAlgebra1 = true;
		booleanAlgebra2 = false;
		booleanAlgebra3 = booleanAlgebra1 || booleanAlgebra2;
		std::cout << booleanAlgebra1 << ' ' << booleanAlgebra2 << ' ' << booleanAlgebra3 << '\n';
		booleanAlgebra1 = false;
		booleanAlgebra2 = false;
		booleanAlgebra3 = booleanAlgebra1 || booleanAlgebra2;
		std::cout << booleanAlgebra1 << ' ' << booleanAlgebra2 << ' ' << booleanAlgebra3 << '\n';
	}
	else if (Operator == "&&")
	{
		booleanAlgebra3 = booleanAlgebra1 && booleanAlgebra2;
		std::cout << booleanAlgebra1 << ' ' << booleanAlgebra2 << ' ' << booleanAlgebra3 << '\n';
		booleanAlgebra1 = false;
		booleanAlgebra3 = booleanAlgebra1 && booleanAlgebra2;
		std::cout << booleanAlgebra1 << ' ' << booleanAlgebra2 << ' ' << booleanAlgebra3 << '\n';
		booleanAlgebra1 = true;
		booleanAlgebra2 = false;
		booleanAlgebra3 = booleanAlgebra1 && booleanAlgebra2;
		std::cout << booleanAlgebra1 << ' ' << booleanAlgebra2 << ' ' << booleanAlgebra3 << '\n';
		booleanAlgebra1 = false;
		booleanAlgebra2 = false;
		booleanAlgebra3 = booleanAlgebra1 && booleanAlgebra2;
		std::cout << booleanAlgebra1 << ' ' << booleanAlgebra2 << ' ' << booleanAlgebra3 << '\n';
	}
	return EXIT_SUCCESS;
}
