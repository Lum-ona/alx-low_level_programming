#include <unistd.h>

/**
 *  _putcahr - writes character c to stdout
 * @c: char to be printed
 * Return: On success 1
*/

int _putchar(char c)
{
    return (write(1, &c, 1));
}
