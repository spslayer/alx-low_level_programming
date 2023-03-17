#include <stdio.h>

/**
 * main - Prints the alphabetic
 * Rreturn: Always (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
