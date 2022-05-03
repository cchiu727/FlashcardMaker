#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include "set.h"

using namespace std;

// FORMATTING =======================================================
void welcomeMessage() {
    cout << "Welcome to FlashcardMaker!" << endl;
    // TO DO
}
// ==================================================================

int main() {
    Set FlashcardSet;

    welcomeMessage();
    int choice;

    while (choice != 5) {
        choice = FlashcardSet.menu();
        switch(choice) {
            case 1:
                FlashcardSet.createCard();
                break;
            case 2:
                FlashcardSet.deleteCard();
                break;
            case 3:
                FlashcardSet.showCards();
                break;
            case 4:
                FlashcardSet.exportSet();
                break;
            case 5:
                cout << "Thank you for using FlashcardMaker!" << endl;
                cout << "Now exiting..." << endl;
                return 0;
        }
    }

    return 0;
}