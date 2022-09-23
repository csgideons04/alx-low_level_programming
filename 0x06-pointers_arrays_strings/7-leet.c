#include "main.h"

/**
 * leeet - leet encoder
 * @str; string to be encoded
 *
 * Return: address of the encoded string
 */

char *leet(char *str)
{
	i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
			i++;
	}
	return (str);
}

/**
 * transform - helper function to map a letter with its leeet encoding
 * @x: char to be encoded
 *
 * Return: the encoded char
 */

char transform(char x)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int = 0;
	char replacement = x;

	while (i < 8)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++
	}
	return (replacement)
}