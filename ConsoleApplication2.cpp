#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int num1, num2, num3;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Введите третье число: ";
    std::cin >> num3;
    std::cout << '\n';

    int firstNum{ num1 > num2
                  ? num1 > num3
                    ? num1 : num3
                  : num2 > num3
                    ? num2 : num3 };
    int secondNum{ num1 == firstNum
                   ? num2 > num3
                     ? num2 : num3
                   : num2 == firstNum
                     ? num1 > num3
                       ? num1 : num3
                     : num1 > num2
                       ? num1 : num2 };
    int thirdNum{ num1 < num2
                  ? num1 < num3
                    ? num1 : num3
                  : num2 < num3
                    ? num2 : num3 };

    std::cout << "Результат: " << firstNum << ' ' << secondNum << ' ' << thirdNum;
    return EXIT_SUCCESS;
}