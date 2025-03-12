//
//  list.c
//  CS50
//
//  Created by Nelson Cruz on 3/7/25.
//

#include <stdio.h>
#include "stdlib.h"
#include "cs50.h"

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;
    
    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = get_int("Number: ");
        n->next = NULL;
        
        // If list is empty
        if (list == NULL)
        {
            list = n;
        }
        
        // If list has numbers already
        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If at end of list
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    
    // Time passes
    
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }
    return 0;
}
