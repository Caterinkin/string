#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name, last_name;
    std::cout << "������� ���:  ";
    std::cin >> name;
    std::cout << "������� �������: ";
    std::cin >> last_name;
    std::cout << "������������ " << name + " " + last_name << "!"<< std::endl;
       
    return 0;
}



