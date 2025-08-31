#include "blackjack.h"
#include <string>
#include <vector>
#include <ctime>
using namespace std;
vector<string> Ranks = {"","","2","3","4","5","6","7","8","9","10","J","Q","K","A"};
vector<string> Suits = {"♠","♥","♦","♣"};
//DECK OPERATIONS
//initialization of the deck of cards
vector<Card> InitializeDeck() {
    vector<Card> Deck;
    for (int suit = 0 ; suit < 4 ; suit++) {
        for (int rank = 2 ; rank < 15 ; rank++) Deck.push_back({rank,suit}) ;
    }
    return Deck;
}
//Shuffling of the deck using the Fisher-Yates algorithm to ensure no bias
void ShuffleDeck(vector<Card> &Deck) {
    srand(time(nullptr));
    for (int i = Deck.size() - 1; i > 0; --i) {
        int j = rand() % (i + 1);  // random index [0..i]
        swap(Deck[i], Deck[j]);
    }
}
Card DealCard(vector<Card> &Deck) {
    Card CurrentCard = Deck.back();
    Deck.pop_back();
    return CurrentCard;
}
