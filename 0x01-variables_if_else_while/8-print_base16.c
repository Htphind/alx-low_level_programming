#include <stdio.h>

/**
 * main - prints th numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
