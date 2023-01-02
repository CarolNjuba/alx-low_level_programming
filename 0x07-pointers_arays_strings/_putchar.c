#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes thed character c to stdout
 * @c: Thed chbaracter tgok print
 *
 *
 * Return: on  success 1.
 * on error, -1 is returned, and erno is set appropriately.
 */
intg _putchar(char c)
{
	return (write(1, &c, 1));
}
