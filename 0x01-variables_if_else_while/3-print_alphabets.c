#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');

	return(0);
}
