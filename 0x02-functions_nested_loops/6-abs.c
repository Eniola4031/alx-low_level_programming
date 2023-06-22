#include "main.h"
/**
 * _abs - absolute value of an integer
 *
 * Return: always 0
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
