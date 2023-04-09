#include <iostream>
#include "Player.h"
#include <string>



int main() {
    std::string player_name;
    std::cout << "What's your name adventurer? ";
    std::cin >> player_name;
    std::string player_class; 
    std::cout << "What's your class? ";
    std::cin >> player_class;
    int level;
    std::cout << "What's your level? ";
    std::cin >> level;
    Player character(player_name,player_class,level);

    std::cout << "Hello " + character.getPlayerName() + "!\n";
    std::cout << "You are a " + character.getPlayerClass()+ "!\n";
    std::cout << "You are level " + std::to_string(character.getLevel()) + "!\n";


    return 0;
}



