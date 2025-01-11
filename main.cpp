#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name, last_name;
    std::cout << "¬ведите им€:  ";
    std::cin >> name;
    std::cout << "¬ведите фамилию: ";
    std::cin >> last_name;
    std::cout << "«дравствуйте " << name + " " + last_name << "!"<< std::endl;
       
    return 0;
}



