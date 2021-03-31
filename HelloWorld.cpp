#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Git\n";

    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;

    int age;
    std::cin >> age;
    std::cout << "Age: " << age;
}