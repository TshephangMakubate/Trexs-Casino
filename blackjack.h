#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <vector>
using namespace std;
struct Card {
    int Rank;
    int Suit;
};
//DECK OPERATIONS
vector<Card> InitializeDeck();
void ShuffleDeck(vector<Card> &Deck);
Card DealCard(vector<Card> &Deck);
#endif