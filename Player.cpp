#include <iostream>
#include "Player.h"


Player::Player() {
}

Player::Player(std::string player_name,std::string player_class,int level): mPlayerName(player_name),
mPlayerClass(player_class),mLevel(level){
}

std::string Player::getPlayerName() {
    return mPlayerName;
}

std::string Player::getPlayerClass() {
    return mPlayerClass;
}

int Player::getLevel() {
    return mLevel;
}




