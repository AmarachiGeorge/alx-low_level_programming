#include "main.h"

/**
 * int _islower - Prints and checks for lowwer character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
