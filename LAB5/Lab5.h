#ifndef LAB5_H
#define LAB5_H

#include <iostream>
#include <vector>
#include <string>

class FUNCTION_GUESS {
public:
    // Constructor to initialize counters
    FUNCTION_GUESS();
    void Game_Start();
    void number_guess();
    void game_function();
    bool Play_again();
    void displayResults();

private:
    int num_guess;
    int rand_num;
    int wins;
    int losses;
    bool high_low;

    //Chat GPT helped me with this
    std::string getRandomMessage(const std::vector<std::string>& messages);

    // Messages for win, lose, incorrect guess and play again prompts
    const std::vector<std::string> winMessages = {
    "\nFantastic job, you cracked it!",
    "\nBingo! You got it spot on!",
    "\nVictory! You guessed it right!",
    "\nImpressive! You're a winner!",
    "\nNailed it! You found the hidden number!",
    "\nRight on the mark! You won!",
    "\nOutstanding! You've conquered this round!",
    "\nBullseye! You hit the right number!",
    "\nSharp guess! You nailed it!",
    "\nBravo! You've emerged victorious!",
    "\nYou’ve outsmarted the game!",
    "\nAmazing! You’ve hit the target!",
    "\nOn fire! You guessed correctly!",
    "\nExceptional work, champion!",
    "\nRight on cue! You got it!"
    };

    const std::vector<std::string> incorrectMessages = {
        "\nNot quite. Give it another go!",
        "\nClose, but not there yet!",
        "\nAlmost! Try one more time!",
        "\nOoh, a bit off! Keep going!",
        "\nSo close! You're almost there!",
        "\nNot quite right, but don’t give up!",
        "\nHmmm, not that one. Try again!",
        "\nKeep going, you’re onto something!",
        "\nNope, but don’t lose hope!",
        "\nAlmost there! Keep pushing!",
        "\nMissed it, but just by a bit!",
        "\nClose call, but not this time!",
        "\nHang in there, you’re getting closer!",
        "\nKeep trying! You've got this!",
        "\nStay focused! Almost there!"
    };

    const std::vector<std::string> loseMessages = {
        "\nOut of guesses! Better luck next time!",
        "\nSo close, but it's game over this round!",
        "\nNo luck this time, but don't give up!",
        "\nOut of tries! The game takes this one!",
        "\nTough break, but you gave it your best!",
        "\nIt wasn't meant to be, but keep at it!",
        "\nThe game got you this round. Play again?",
        "\nClose call, but it’s game over!",
        "\nAlmost, but missed it! Try a new round?",
        "\nOuch! The game wins this time.",
        "\nGame over! That was a challenging round.",
        "\nOut of chances, better luck next time!",
        "\nThe game claims this one! Practice makes perfect!",
        "\nThat was tough! Don't let it stop you!",
        "\nA worthy effort! Try again soon!"
    };

    const std::vector<std::string> playAgainMessages = {
        "\nReady to take another shot?",
        "\nHow about another go at it?",
        "\nWant to give it another whirl?",
        "\nUp for a rematch? Let's go!",
        "\nFeel like challenging the game again?",
        "\nShall we go another round?",
        "\nHow about testing your luck once more?",
        "\nFeeling ambitious? Let's play again!",
        "\nOne more game? It’s calling your name!",
        "\nReady to dive back in for another shot?",
        "\nCan you beat it this time? Play again?",
        "\nLet's go for one more!",
        "\nThink you can do better? Try again!",
        "\nNot done yet? Start another round!",
        "\nThe game awaits! Want another round?"
    };



};

#endif
