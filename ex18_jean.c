#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

// Our old friend die from ex17.
void die(const char *message)
{
    if (errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

//a typedef creates a fake type, in this
//case for a function pointer
typedef int