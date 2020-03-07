#include "ll.h"
#include<stdlib.h>
#include<stdio.h>

// Array of floors
// Way of moving up and down floors

void append(struct Node **head, int new_data)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));

    struct Node * last = *head;

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head == NULL)
    {
        *head = new_node;
        return;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
}

void print_ll(struct Node * head)
{
    while(head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
}

int main()
{
    int myArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int myFloors[4];
    int i = 0;

    printf("Which floor would you like to go to first?\n");
    scanf("%d", &myFloors[0]);
    if(myFloors[0] > 15)
    {
        printf("That is not a valid floor; try again\n");
        scanf("%d", &myFloors[0]);
    }

    printf("Which floor would you like to go to second?\n");
    scanf("%d", &myFloors[1]);
        if(myFloors[1] > 15)
    {
        printf("That is not a valid floor; try again\n");
        scanf("%d", &myFloors[1]);
    }

    printf("Which floor would you like to go to third?\n");
    scanf("%d", &myFloors[2]);
        if(myFloors[2] > 15)
    {
        printf("That is not a valid floor; try again\n");
        scanf("%d", &myFloors[2]);
    }

    printf("Which floor would you like to go to fourth?\n");
    scanf("%d", &myFloors[3]);
        if(myFloors[3] > 15)
    {
        printf("That is not a valid floor; try again\n");
        scanf("%d", &myFloors[3]);
    }

        for(int i = 0; i < 4; i++)
    {
    // Read which floor they are on
    printf("You go to floor %d \n", myFloors[i]);
    }
}