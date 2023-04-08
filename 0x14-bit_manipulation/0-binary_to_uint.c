#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or b is NULL
 */

/*using the power of 2 instead of bitwise*/
unsigned int binary_to_uint(const char *b)
{
	int length = 0, _power = 1;
	unsigned int result = 0, invalid = 0;

	if (!b)
		return (invalid);

	while (b[length] != '\0') /*assessing the length of the string*/
		length++;
	length -= 1;

	while (length >= 0) /*repeat from the tail of the string*/
	{
		if ((b[length] != '0') && (b[length] != '1'))
			return (invalid);

		if (b[length] == '1') /*If '1,' add the power of 2*/
			result += _power;

		_power *= 2; /*update the power of 2*/
		length--;
	}
	return (result);
}
