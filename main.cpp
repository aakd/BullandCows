#include <iostream>
#include <string>
#include "FBullCowGame.h"


void printIntro();
void playGame();
std::string GetGuess();
bool playAgain();

FBullCowGame BCGame; // instantiate a new game


// the entry point for our application
int main()
{
	bool bPlayAgain = false;
	do {
	printIntro();
	playGame();
	bPlayAgain = playAgain();
	}
	while (bPlayAgain);
	
	return 0; // exit the programme
}

// introduce the game
void printIntro()
{
	// loop for the number of turns asking for guesses
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game!\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

// play the game
void playGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();
	
	// loop for the number of turns asking for guesses
	// TODO change from FOR to WHILE loop once we validated tries
	for (int count = 1; count <= MaxTries; count++){
		std::string Guess = GetGuess(); // TODO make loop for checking valid guesses
		
		// submit valid guess to the game
		// print number of bulls and cows

		std::cout << "Your guess was " << Guess << std::endl;
		std::cout << std::endl;
	}
	
	// TODO summarise game
}

// get a guess from the player
std::string GetGuess()
{
	int CurrentTry = BCGame.GetCurrentTries();
	
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
 	return Guess;
}

bool playAgain()
{
	std::cout << "Do you like to play again (y/n)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'Y' || Response[0] == 'y');
}



