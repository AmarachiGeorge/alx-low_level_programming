#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
	}
	_putchar('\n');
}
