#include <iostream>
#include <string>

int main() 
{
    std::string name;   

    std::cout << "=====================" << std::endl;
    std::cout << "       Welcome      " << std::endl;
    std::cout << "=====================" << std::endl;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Welcome, " << name << std::endl;
    std::cout << "Get ready!" << std::endl;

    return 0;
}