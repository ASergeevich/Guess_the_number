#include <iostream>

int randomNumberRange();
void guessTheNumber(int randomNumbers);

void replayTheGame()
{
	int newNumber = randomNumberRange();
    bool flag{false};

	while (true)
	{
        if(flag)
        {
            break;
        }

		std::cout << "Do you want to play again?\nEnter (y/n): ";
		char answer;
		std::cin >> answer;

        switch(answer)
        {
            case 'y':
                guessTheNumber(newNumber);
                break;
            case 'n':
                std::cout << "Thank you for playing my game!\n";
                flag = true;
                break;
            default:
                std::cout << "You have entered incorrect data, please try again\n";
                break;
        }
	}
}