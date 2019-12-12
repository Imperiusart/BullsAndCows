#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PlayGame();
void PrintIntro();
std::string GetGuess();
bool AskToPlayAgain();

void PrintIntro() 
{
	//introduce the game
	constexpr int WORD_LENGHT = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n" << std::endl;
	std::cout << "can you guess the " << WORD_LENGHT;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}
//entry pont
int main() 
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (true);
	return 0;
}

std::string GetGuess() 
{
	//Get a guess from the user
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again?(y/n) ";
	std::string Response = "";
	std::getline(std::cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y');

}

void PlayGame() 
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		std::string Guess = GetGuess();
		GetGuess();
		std::cout << "Your guess was " << Guess << std::endl;
		std::cout << std::endl;
	}
}