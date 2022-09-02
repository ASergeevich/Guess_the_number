#include <cstdlib>

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int randomNumberRange()
{
	int min = 0;
	int max = 100;
	int randomNumber = getRandomNumber(min, max);

	return randomNumber;
}