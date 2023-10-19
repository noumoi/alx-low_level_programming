#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
int midas, j;
/* j is a counter for  n bytes of src to be concatenated */
/* midas = length of destination string */
midas = 0;
while (dest[midas] != '\0')
{
midas++;
}
for (j = 0; j < n && src[j] != '\0'; j++, midas++)
{
dest[midas] = src[j];
}
dest[midas] = '\0';
return (dest);
}
