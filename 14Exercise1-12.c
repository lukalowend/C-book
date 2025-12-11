#include <stdio.h>

#define IN 1
#define OUT 0
int main()
{
    int c, nc, nl, nw, state;


    state = OUT;

    nc, nl, nw = 0;

    while((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            if(state == IN){
                putchar('\n');
                state = OUT;
            }
        }
        else {
            state = IN;
            putchar(c);
        }
    }
}