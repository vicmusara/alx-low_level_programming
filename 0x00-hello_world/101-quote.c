#include <unistd.h>
#include <stdio.h>
/*
* This program uses the write function 
*
* from the unistd.h library
*/
int main(void) 
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 52;
if (write(2, message, len) != len) 
{
 return 1;
}
return 1;
}
