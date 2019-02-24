#include <iostream>
#include <string>

using namespace std;

void printIntro();
void playGame();
string GetGuess();
bool playAgain();

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
	cout << "Welcome to Bulls and Cows, a fun word game!\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

// play the game
void playGame()
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++){
		string Guess = GetGuess();
		cout << "Your guess was " << Guess << endl;
		cout << endl;
	}

}

// get a guess from the player
string GetGuess()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
 	return Guess;
}

bool playAgain()
{
	cout << "Do you like to play again (y/n)? ";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'Y' || Response[0] == 'y');
}
