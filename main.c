/*
 * Card Counting Helping Programs
 * By: Taylor Brazelton
 * Updated: 2/8/2015
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    bool keepGoing = true;

    int count = 0;

    while(keepGoing){

        char in[3];


        puts("Input h = high; l = low; n = neutral...\nPress enter when you are done counting the deck. \nNo need for spaces.");
        scanf("%1s", in);

        if(in[0] == 'h')
        {
            count--;
        }
        else if(in[0] == 'l')
        {
            count++;
        }
        else if(in[0] == 'n')
        {
            continue;
        }
        else
        {
            keepGoing = false;
        }

    }

    printf("Count: %i", count);

    return 0;
}
