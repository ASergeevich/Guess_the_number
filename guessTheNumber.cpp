#include <iostream>

void guessTheNumber(int randomNumbers)
{
    bool flag{true};

	for (int count{0}; count < 7; ++count)
	{
		std::cout << "Attempt #" << count + 1 << ": ";
		int number;
		std::cin >> number;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Attempt #" << count << " unsuccessful, no number entered\n";
		}
		else
        {
            std::cin.ignore(32767, '\n');

			if (number > randomNumbers)
            {
                std::cout << "This number is GREATER than the one that was made!\n";
            }
				
			else if (number < randomNumbers)
            {
                std::cout << "This number is LESS than the desired one!\n";
            }
				
			else if (number == randomNumbers)
			{
				std::cout << "Very good! You guessed the number!\n";
                flag = false;
				break;
			}
        }
	}

    if(flag)
    {
        std::cout << "You've run out of attempts. You didn't guess the number: " << randomNumbers << '\n';
    }	
}