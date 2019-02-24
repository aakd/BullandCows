#include <iostream>
#include<string>

using namespace std;

void printIntro();
string GetGuessAndPrintBack();

// the entry point for our application
int main() {

	printIntro();
	
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
	GetGuessAndPrintBack();
	cout << endl;
	}
		return 0;
}

// introduce the game
void printIntro() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game!\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuessAndPrintBack() {
	// get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// print the guess back
	cout << "Your guess was " << Guess << endl;
	return Guess;
}