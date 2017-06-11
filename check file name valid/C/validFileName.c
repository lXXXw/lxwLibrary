#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

#include "validFileName.h"

int isValidFileName(char * filePath) {
    char tmp[strlen(filePath + 1)];
    strcpy(tmp, filePath);
    struct stat st;

    if (stat(filePath,&st) == -1) {
        if (errno == EACCES) {
            fprintf(stderr, "input file %s cannot be opened - access denies\n", filePath);
            exit(1);
        }
        if (errno == ENOENT) {
            fprintf(stderr, "input file %s does not exist\n", filePath);
            exit(1);
        }
    }
    if (S_ISDIR(st.st_mode)) {
        fprintf(stderr, "input file %s is a directory\n", filePath);
        exit(1);
    }

    if (!S_ISREG(st.st_mode)) {
        fprintf(stderr, "input file %s is not in the right format\n", filePath);
        exit(1);
    }

    return 1;
}
