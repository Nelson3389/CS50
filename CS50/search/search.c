//
//  search.c
//  CS50
//
//  Created by Nelson Cruz on 2/27/25.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    
    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
