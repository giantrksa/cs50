#include "cs50.h"
#include <stdio.h>

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("#\n");
//     }
// }

// int main(void)
// {
//     int n = get_int("Size: ");

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// run with this command gcc -std=c99 -I/c/Users/USER/Documents/CS50/1_C mario.c cs50.o -o mario


int main(void)
{
    // Get size of Grid
    int n;
    do
    {
        n = get_int("Size: ");
    } 
    while (n < 1);
    
    //  Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}