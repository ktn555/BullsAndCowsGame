#include <iostream>
#include <string>


using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void RepeatGuessBack();
bool AskToPlayAgain();


int main()
{
	bool bWantsToPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bWantsToPlayAgain = AskToPlayAgain();
	} while(bWantsToPlayAgain);

	return 0;
}

void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?" << endl;
	cout <<  endl;
}

string GetGuess() {
	cout << "Enter your guess: " << endl;
	string Guess = "";
	std::getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again (y/n) ?" << endl;
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'Y') || (Response[0] == 'y');
}


void RepeatGuessBack(string Guess) {
	cout << "Your guess was " << Guess << endl;
}

void PlayGame()
{
	constexpr int NUMBER_OF_GUESSES = 5;
	for (int i = 0; i < NUMBER_OF_GUESSES; i++)
	{
		string Guess = GetGuess();
		RepeatGuessBack(Guess);
		cout << endl;
	}
}

