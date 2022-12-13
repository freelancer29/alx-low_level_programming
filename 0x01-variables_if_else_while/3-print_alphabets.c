#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
}
