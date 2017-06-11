/**
    This is the example of using debug print.
    Author: lxXxw
    Date:   06-11-2017 
**/

#include <stdio.h>
#include <stdlib.h>

#include "debug.h"

int main() {
    /* This line will always be printed out. */
    printf("This line will always be printed out.\n");

    /**
        However, this line will only be prined out if
            #define _DEBUG_MODE
        represents in your code.
    **/
    DEBUG_PRINT("This line will only be printed out if defined.\n");

    return 0;
}
