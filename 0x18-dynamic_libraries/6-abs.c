#include "main.h"
/**
 * _abs - absolute value of an integer
 * @c: number to be computed
 *
 * Return: always 0
*/
int _abs(int c)
{
	if (c < 0)
	{	
	int i;

	i = c * -1;
	return (i);
	}
	return (c);

}
