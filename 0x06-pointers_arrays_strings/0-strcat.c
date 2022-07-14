#include "main.h"
#include <stdio.h>


/**
* *_strcat - function that concatenates two strings.
* *dest :  first parameter of the function (pointer to the first string)
* *src :  second parameter of the function (pointer to the second string)
* return : function return a pointer to the resulting string des
*/

char *_strcat(char *dest, char *src)
{
for( ; *dest != '\0'; dest++)
{
_putchar(*dest);
}
for(; *src != '\0'; src++)
{
_putchar(*src);
}
_putchar('\0');
return (dest);
}
