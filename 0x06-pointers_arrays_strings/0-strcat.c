#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
    char *dest_start = dest;

    /* Find the end of the destination string */
    while (*dest)
        dest++;

    /* Append the source string to the destination string */
    while (*src)
        *dest++ = *src++;

    /* Add a terminating null byte */
    *dest = '\0';

    return dest_start;
}


