#ifndef _3_PUTS_H_
#define _3_PUTS_H_

#include <stdio.h>

/**
 * _puts - Writes a string to stdout, followed by a newline.
 *
 * @str: The string to be written.
 *
 * Return: void.
 */

void _puts(char *str);

#endif /* _3_PUTS_H_ */

#include "3-puts.h"

/**
 * _puts - Writes a string to stdout, followed by a newline.
 *
 * @str: The string to be written.
 *
 * Return: void.
 */

void _puts(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		putchar(str[i]);

	putchar('\n');
}
