#include <stdio.h>
/**
* main - Print the numbers 0 to 9
*
*Return: alway returns 0
*
*/

int main(void)
{
	char n;
	
	for (n = '0', n <= '9'; n++;)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
