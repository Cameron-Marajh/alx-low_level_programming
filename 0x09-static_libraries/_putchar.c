#include <unistd.h>
/**
* _putchar - writes char c to stdout
* @c: the charactor to print
*
* Return: 1 on success
* on error, -1 is returned, and error is set appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
