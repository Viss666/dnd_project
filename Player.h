#ifndef _PLAYER_
#define _PLAYER_
#include <iostream>
class Player {

public:
    Player();
    Player(std::string player_name,std::string player_class,int level);

    std::string getPlayerName();
    std::string getPlayerClass();
    int getLevel();

    





protected:

    std::string mPlayerName;
    std::string mPlayerClass;
    int mLevel;





};




#endif