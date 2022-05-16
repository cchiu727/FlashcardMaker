#ifndef SET_H
#define SET_H

#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

#define MAX_TERM_LEN 100
#define MAX_DEF_LEN 100

// Flashcard objects ================================================
struct Flashcard {
    int id;
    string term, definition;
};

class Set {
    private:
        vector<Flashcard> set;
        int cardCounter = 1;
    public:
        // prints all cards in the list
        void showCards() {
            if (set.empty()) {
                cout << "Your list is empty! Add some flashcards!" << endl;
                return;
            }
            else {
                cout << "No.\tTerm\tDefinition" << endl;
                cout << "-----------------------------" << endl; 
                for (vector<Flashcard>::iterator it = set.begin(); it != set.end(); it++) {
                    cout << it->id << "\t" << it->term << "\t" << it->definition << endl;
                }
            }
        }

        // creates new card and adds to vector
        void createCard() {
            Flashcard card;
            string str;

            card.id = cardCounter;
            cardCounter++;

            cout << "Enter your term: ";
            getline(cin, str);
            card.term = str;

            cout << endl;

            cout << "Enter the definition of the term: ";
            getline(cin, str);
            card.definition = str;

            set.push_back(card);
            cout << "Done!" << endl;
        }

        // deletes card from vector !! TO DO !!
        void deleteCard() {
            int n;
            showCards();

            // back out if there's no cards
            int set_size = set.size();
            if (set_size < 1)
                return;
            
            cout << "Which card would you like to delete? (Enter a number): ";
            cin >> n; // NEEDS INPUT CHECKING
            cin.ignore(1, '\n');
            // TO DO
            set.erase(set.begin() + n - 1); // 1st index is at 0, so 1 will delete 0th index
            set.shrink_to_fit();
        }
        
        // exports set to csv file !! TO DO !!
        void exportSet() {
            // export to csv file

            // TO DO
        }

        // USER PROMPTS =====================================================
        int menu() {
            int n;
            cout << "What would you like to do? (Enter a number): " << endl;
            cout << "\t1) Add a card" << endl;
            cout << "\t2) Delete a card" << endl;
            cout << "\t3) View your set" << endl;
            cout << "\t4) Export your set" << endl;
            cout << "\t5) Exit" << endl;

            cout << "Enter choice: ";
            cin >> n; // NEEDS INPUT CHECKING
            cin.ignore(1, '\n');

            return n;
        }
        // ==================================================================
};
// ==================================================================
#endif