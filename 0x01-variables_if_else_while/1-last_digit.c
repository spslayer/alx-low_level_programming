#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	int lastDigit = n % 10;

	if (lastDigit > 5)
		printf("%d and is greater than 5", lastDigit);
	else if (last_digit == 0)
	{
		printf("%d and is 0", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0", lastDigit);
	}

	return (0);
}
