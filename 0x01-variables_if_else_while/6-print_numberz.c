#include <stdio.h>
/**
 * main - main block
 * Description: Print base 10 numbers starting from 0.
 * Do not use the char type variable.
 * Only use 'putchar' to print to console.
 * Only use 'putchar' twice.
 * Return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
