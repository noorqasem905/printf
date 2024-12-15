# ft_printf 

This repository contains all files for the printf project from School 42 Málaga cursus. The project consist in duplicate the printf() function, part of the stdio.h library.
About · Index · Requirements · Instructions · Testing
About

This project consists in duplicate the behavior of the C function printf(). It is not necessary to implement the buffer management of the original function. It must handle the following parameters:

    char type variables.
    string type variables.
    int type variables.
    unsigned int type variables.
    hexadecimal int type variables (uppercase and lowercase).
    pointer type variables.

The functions are written in C language and need the gcc compiler, with <stdlib.h>, <stdarg.h> and <unistd.h> standard libraries to run.
Instructions
1. Compiling the archives

To compile the proiect, go to its path and run:

For mandatory functions:

<pre> $ make
</pre>

2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:

<pre>
$ make fclean
</pre>

3. Using it in your code

## Test it
### MakeFile
<pre>
$ make
</pre>
    
<pre>
#include "ft_printf.h"

int main()
{
    ft_printf("Hello World!\n");
    ft_printf("School %i", 42);
}
</pre>

This function have been tested with Francinette.
