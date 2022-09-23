#include <stdio.h>

/**
 * main - print the number 0 to 9 
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
