#include "ascii.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define VERSION "0.1.0"
#define MAX_INPUT_LENGTH 2048

int main(int argc, char **argv) {
    char input[MAX_INPUT_LENGTH];
    long len;

    fputs("Lispy version " VERSION " \n", stdout);
    while (true) {
        fputs("Lispy> ", stdout);
        if (fgets(input, MAX_INPUT_LENGTH, stdin) == NULL) {
            fputs("\n", stdout);
            break;
        }
        len = strlen(input);
        input[len--] = CTL_NUL;
        if (len == 0)
            continue;
        printf("%s", input);
    }

    return 0;
}
