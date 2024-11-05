/*
Brooks D Cowell
Computer Science Fall 2024
Due: November 12 2024
Lab 5, Lab 5 Number Guessing Game
This lab is a number guessing game. The user can play as many times as they would like.
*/

#include <iostream>
#include "Lab5.h"

int main() {
    bool playAgain;
    FUNCTION_GUESS game;

    // Precondition: playAgain is undefined. Code after do will be executed at least once
    // Postcondition: playAgain is defined by user to be true or false.
    do {
        game.Game_Start();                 // Start of game
        game.number_guess();              // Set the number of guesses
        game.game_function();             // Main game logic
        playAgain = game.Play_again();   // Ask to play again; Chat GPT added this
    } while (playAgain);

    game.displayResults();  // Display final win/loss record
    return 0;
}
