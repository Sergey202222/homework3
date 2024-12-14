#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "Оператор: ";
	std::string Operator{};
	std::cin >> Operator;
	if (Operator == "||")
	{
		std::cout << "true    true    true\n"
					 "false   true    true\n"
					 "true    false   true\n"
				     "false   false   false";
	}
	else if (Operator == "&&")
	{
		std::cout << "true    true    true\n"
					 "false   true    false\n"
					 "true    false   false\n"
					 "false   false   false";
	}
	return EXIT_SUCCESS;
}
