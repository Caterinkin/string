#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name, last_name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Введите фамилию: ";
    std::cin >> last_name;
    std::cout << "Здравствуйте " << name + " " + last_name << "!"<< std::endl;
       
    return 0;
}



