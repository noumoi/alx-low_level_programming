#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int midas, j;
midas = 0;
while (dest[midas] != '\0')
{
midas++;
}
for (j = 0; src[j] != '\0'; j++, midas++)
{
dest[midas] = src[j];
}
dest[midas] = '\0';
return (dest);
}
