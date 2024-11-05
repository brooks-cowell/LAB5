#include <iostream>
#include "Lab5.h"
#include <cstdlib>
#include <ctime>
#include <vector>

// Constructor to initialize counters
FUNCTION_GUESS::FUNCTION_GUESS() : wins(0), losses(0) {}

// Start of the game
void FUNCTION_GUESS::Game_Start() {
    std::cout << "\n\t\t\t\tNUMBER GUESSING GAME\n"
        << "\t\tYou will be guessing a number between 0 and 100.\n";
}

// Prompts the user to pick the number of guesses they want
void FUNCTION_GUESS::number_guess() {
    std::cout << "\nHow many guesses would you like? (Max 20): ";

    // This while loop is from Chat GPT
    while (!(std::cin >> num_guess) || num_guess < 1) {
        std::cin.clear();                // Clear the error flag
        std::cin.ignore(10000, '\n');    // Discard invalid input
        std::cout << "Invalid input. Please enter a number between 1 and 20: ";
    }

    std::cout << "Would you like to know if your guess is too high or low? (Enter 1 for yes and 0 for no): ";
    std::cin >> high_low;

    if (num_guess > 20) {
        num_guess = 20;
        std::cout << "You entered more than 20 guesses. It has been set to 20 guesses.\n";
    }
    std::cout << "\n";
}

// Main function of the game
void FUNCTION_GUESS::game_function() {
    srand(time(NULL));
    rand_num = rand() % 101;
    int guess;
    int i = 1;

    // Precondition: i is equal to one and will always be less than or equal to num_guess.
    // Postcondition: i will increment by one every iteration if the user incorrectly guesses.
    while (i <= num_guess) {
        std::cout << "Enter guess number " << i << ": ";

        // This While loop is from Chat GPT
        while (!(std::cin >> guess) || guess < 1) {
            std::cin.clear();                // Clear the error flag
            std::cin.ignore(10000, '\n');    // Discard invalid input
            std::cout << "Invalid input. Please enter a positive integer:\n ";
            std::cout << "\n";
            
        }
        if (guess == rand_num) {
            std::cout << getRandomMessage(winMessages) << " In " << i << " attempts!\n";
            wins++;
            return;
        }
        else {
            std::cout << getRandomMessage(incorrectMessages) << " You have " << num_guess - i << " " << "more guesses!\n";
        }
        //if else statement for high or low outputs
        if (high_low == true) {
            if (guess > rand_num) {
                std::cout << "\nHigh\n\n";
            }
            else {
                std::cout << "\nLow\n\n";
            }
        }
        if (i == num_guess) {
            std::cout << getRandomMessage(loseMessages) << "\nThe correct answer was: " << rand_num << "\n";
            losses++;
        }

        i++;
    }
}

// Retrieve a random message from a vector of messages: Added by Chat GPT
std::string FUNCTION_GUESS::getRandomMessage(const std::vector<std::string>& messages) {
    int randomIndex = rand() % messages.size();
    return messages[randomIndex];
}

// Display the final win/loss record
void FUNCTION_GUESS::displayResults() {
    std::cout << "\nGame Summary:\n";
    std::cout << "Wins: " << wins << "\n";
    std::cout << "Losses: " << losses << "\n";
}

// Playing the game again
bool FUNCTION_GUESS::Play_again() {
    int again_input;

    // Chat GPT
    std::cout << getRandomMessage(playAgainMessages) << "\n";
    std::cout << "\nEnter 1 for yes and 0 for no: ";
    std::cin >> again_input;

    switch (again_input) {
    case 1:
        return true;
    case 0:
    default:
        std::cout << "Thanks for playing!\n";
        return false;
    }
}
