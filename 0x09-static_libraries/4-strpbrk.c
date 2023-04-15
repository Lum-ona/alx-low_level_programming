#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the bytes to match
 *
 * Return: a pointer to the byte in `s` that matches one of the bytes in
 *  `accept`, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
int k;

while (*s != '\0')
{
for (k = 0; accept[k] != '\0'; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return (0);
}
