#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
