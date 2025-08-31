#include <string>
#ifndef MONEY_MANAGEMENT_H
#define MONEY_MANAGEMENT_H
class Player{
    Player();
    private:
        std::string name;
        int balance = 1000;
    public:
        int Get_Balance();
        void Update_Balance(int winnings);
};
#endif