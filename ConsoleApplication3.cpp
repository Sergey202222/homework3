#include <Windows.h>
#include <iostream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char gender{};
    std::string zodiacSign{};
    int age{};

    std::cout << "Введите пол: ";
    std::cin >> gender;

    std::cout << "Введите знак зодиака: ";
    std::cin >> zodiacSign;

    std::cout << "Введите возраст: ";
    std::cin >> age;

    if (gender == 'м' && (zodiacSign == "Рак" || zodiacSign == "Скорпион" || zodiacSign == "Рыбы") && age < 40)
    {
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
    }
    else if (gender == 'ж' && (zodiacSign == "Телец" || zodiacSign == "Дева" || zodiacSign == "Козерог") 
             && age >= 15 && age <= 30)
    {
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения"
                     "домашних праздников и импровизированных вечеринок.\n" 
                     "Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.";
    }
    else if (zodiacSign == "Близнецы" || zodiacSign == "Весы" || zodiacSign == "Водолей")
    {
        std::cout << "Сегодня вам лучще отложить все дела, потому что вас ждёт неудача.\n"
                     "Сегодня не ваш день:(";
    }
    else
    {
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
    }
    return EXIT_SUCCESS;
}