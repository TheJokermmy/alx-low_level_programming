/*
 * File: 101-quote.c
 * Auth: Brennan D Baraban
 */


#include <unistd.h>

/**
 * main - A c program that prints a line to the standard error
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19",
			59);

	return (1);
}
