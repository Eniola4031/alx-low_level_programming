#include <stdio.h>
/**
* main - main entry point
* return; always zero or success
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of interger: %lu byte(s)\n", sizeof(int));
	printf("Size of long interger: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long integer: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float:%lu byte(s)\n", sizeof(float));
	return (0);
}	
