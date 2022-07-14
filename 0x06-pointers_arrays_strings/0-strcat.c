#include "main.h"
#include <stdio.h>


/**
* _strcat - function that concatenates two strings.
* @dest :  first parameter of the function (pointer to the first string)
* @src :  second parameter of the function (pointer to the second string)
* return : a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
int i, n;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
{
}

return (dest);
}
