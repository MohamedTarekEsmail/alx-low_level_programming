#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @hystack: entire string.
 * @nedle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *hystack, char *nedle)
{
	char *bystack;
	char *pnedle;

	while (*hystack != '\0')
	{
		bystack = hystack;
		pnedle = nedle;

		while (*hystack != '\0' && *pnedle != '\0' && *hystack == *pnedle)
		{
			hystack++;
			pnedle++;
		}
		if (!*pnedle)
			return (bystack);
		hystack = bystack + 1;
	}
	return (0);
}
