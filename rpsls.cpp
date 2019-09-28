#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
int main() {
    //get randum number
    srand(time(NULL));
    int randNum = rand() % 5 + 1;

    //get computer hand
    int num = randNum;
    std::string computerHand;
    if (num == 1) {
        computerHand = "Rock";
    } else if (num == 2) {
        computerHand = "Paper";
    } else if (num == 3) {
        computerHand = "Scissors";
    } else if (num == 4) {
        computerHand = "Lizard";
    } else if (num == 5) {
        computerHand = "Spock";
    } else {
        std::cout << "rand number not 1-5!!!";
    }
    int computerNum = num;

    //function to get player hand
    std::cout << "Rock Paper Scissors Lizard Spock!\n";
    int userNum = 0;
    std::cout << "what hand do you choose?\n1) Rock\n2) Paper\n3) Scissors\n4) Lizard\n5) spock\n";
    std::cin >> userNum;

    //determine winmner
    bool win;
    if (userNum == computerNum) {
        std::cout << "It's a tie.\n";
        std::cout << "The computer's hand is " << computerHand <<".\n";
    } else {

        if (userNum == 1) {
            if (computerNum == 2 || computerNum == 5) {
                win = false;
            } else {
                win = true;
            };
        }
        if (userNum == 2) {
            if (computerNum == 4 || computerNum == 3) {
                win = false;
            } else {
                win = true;
            };
        }
        if (userNum == 3) {
            if (computerNum == 1 || computerNum == 5) {
                win = false;
            } else {
                win = true;
            };
        }
        if (userNum == 4) {
            if (computerNum == 1 || computerNum == 3) {
                win = false;
            } else {
                win = true;
            };
        }
        if (userNum == 5) {
            if (computerNum == 4 || computerNum == 2) {
                win = false;
            } else {
                win = true;
            };
        }
    
        std::cout << "The computer's hand is " << computerHand <<".\n";
        if (win == true) {
            std::cout << "You win!\n";
        } else {
            std::cout << "You lose.\n";
        }
    }
    
}