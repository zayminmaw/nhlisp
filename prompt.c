#include <stdio.h>

static char input[2048];

int main(int argc, char** argv)
{
    while (1)
    {
        fputs("nhlisp> ", stdout);
        fgets(input, 2048, stdin);
        printf("No you are a %s", input);
    }
    return (0);
}