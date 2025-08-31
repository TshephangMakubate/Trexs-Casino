#include <iostream>
#include "blackjack.h"
#include "tictactoe.h"  
#include "money_management.h"
using namespace std;
int main() {
    cout << "Welcome to Trex's Casino!" << endl;
    cout << "Choose a game to play:" << endl;
    cout << "1. Blackjack" << endl;
    cout << "2. Tic Tac Toe" << endl;
    vector<Card> Deck = InitializeDeck();
    ShuffleDeck(Deck);
    for (int i = 0 ; i < 52 ; i++) {
        cout << Deck[i].Rank << Deck[i].Suit << endl;
    }
}