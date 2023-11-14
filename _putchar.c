#include <unistd.h>

/**
 * _putchar - Function that writes a character to stdout
 * @c: Character to write
 *
 * Return: On success 1
 * On error -1, and set errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
