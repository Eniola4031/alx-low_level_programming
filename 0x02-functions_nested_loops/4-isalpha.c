#include "main.h"
/**
* _isalpha - shows 1 if the output is a
* letters, another cases, shows 0
*
* @c: The character is ASCII code
*
* Return: 1 for letter, 0 for the rest
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
