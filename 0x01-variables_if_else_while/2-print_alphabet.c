#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 * Description - script to print the alphabet till z
 * Retutn: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
