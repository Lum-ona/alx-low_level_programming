#include "main.h"

/**
* _strchr - gets a char in string
* @s: string
* @c: char
* Return: 0 (success)
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}
