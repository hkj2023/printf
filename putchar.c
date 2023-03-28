#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write the character
 *@c: the character to be printed
 */

int _putchar(char c)
{
return (write (1, &c, 1));
}
