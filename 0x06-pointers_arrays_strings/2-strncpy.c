#include "main.h"
/**
 * _strncpy - C function that  copies a string, including the 
 * terminating null byte, using the most an inputted number of bytes.
 * if the lenght of the source string is less than the maximum byte number,
 * the remainder of the deestination striing is filled with null bytes.
 * works identically to the standard libraryfunction `strncpy`.
 * @dest: buffer storing the string copy
 * @src: the source striing
 * @n:max number oof the byte copied 
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && srrc[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
