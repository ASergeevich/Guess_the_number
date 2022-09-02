#include <iostream>
#include <ctime>

int getRandomNumber(int min, int max);
int randomNumberRange();
void guessTheNumber(int randomNumbers);
void replayTheGame();

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();

	int randomNumber = randomNumberRange();

	std::cout << "Welcome to the game!\nYou will have 7 attempts to guess the number from 0 to 100\n";
	std::cout << "Success!:-)\n";

	guessTheNumber(randomNumber);
	replayTheGame();


	return 0;
}