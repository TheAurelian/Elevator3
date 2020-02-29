#include<stdio.h>
#include<stdlib.h>

// Array of floors
// Way of moving up and down floors

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