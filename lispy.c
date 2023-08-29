#include "ascii.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <readline/readline.h>
#include <readline/history.h>

#define VERSION "0.1.0"

int main(int argc, char **argv) {
    char *input;

    fputs("Lispy version " VERSION " \n", stdout);
    while (true) {
        input = readline("Lispy> ");
        if (input == NULL)
            break;
        if (input[0] == CTL_NUL)
            continue;
        if (input[0] != ' ')
            add_history(input);
        printf("%s\n", input);
    }

    return 0;
}
