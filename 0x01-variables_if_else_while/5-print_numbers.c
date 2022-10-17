#include <stdio.h>

/**
 * main - main block
 * description: print out bas 10 numbers starting from 0
 * Return 0 - program successfuly executed
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
