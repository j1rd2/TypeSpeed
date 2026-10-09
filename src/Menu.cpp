#include "Menu.h"
#include "Game.h"
#include <iostream>
#include <limits>

void showMenu()
{
    std::cout << "Select an option: " << std::endl;
    std::cout << "1. Start game." << std::endl;
    std::cout << "2. Show game instructions." << std::endl;
    std::cout << "3. Exit." << std::endl;
}

int getMenuOption()
{
    int option = 0;
    std::cin >> option;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return option;
}

void handleMenuOption(int option)
{
    switch (option)
    {
    case 1:
        std::cout << "Starting game..." << std::endl;
        startGame();
        break;
    case 2:
        std::cout << "Showing Instructions... " << std::endl;
        break;
    case 3:
        std::cout << "Goodbye!" << std::endl;
        break;
    default:
        std::cout << "Invalid option, type again." << std::endl;
    } 
}

void runMenu()
{
    int option = 0;
    while (option != 3)
    {
        showMenu();
        option = getMenuOption();
        handleMenuOption(option);
    }
}