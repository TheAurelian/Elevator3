#include <stdio.h>
#include <stdlib.h>

int Current =  1;
int Repeat = 1;
int Floors = 0;
int myArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

struct Node{
	int data;
	struct Node *next;
    struct Node *prev;
};

void append(struct Node **head, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	struct Node *last = *head;

	new_node->data = new_data;
	new_node->next = NULL;

	if(*head == NULL)
    {
        new_node->prev = NULL;
		*head = new_node;
		return;
	}

	while(last->next != NULL)
    {
		last = last->next;
	}

	last->next = new_node;
    new_node-> prev = last;
    return;
}

void print_current (struct Node *n)
{
    while(n != NULL) 
    {
        printf("%d\n", n->data);
        printf ("You go to floor ");
        n = n->next;
    }
}

int main()
{
    struct Node* Controller = NULL;
    Controller = (struct Node*)malloc(sizeof(struct Node));
    Controller->next = NULL;

    printf("You are currently on floor %d\n", Current);
    
    while (Repeat == 1)
    {
        printf("Which 3 floors would you like to visit?\n");

        for(int i = 0; i < 3; i++)
        {
            printf("For the next floor?\n");
            scanf("%d", &Floors);
            append(&Controller, Floors);
        }      

    printf("\nWould you like to input more floor locations for the elevator?\n");
    printf("1: Yes\n");
    printf("2: No\n");
    scanf("%d", &Repeat);
    }
    print_current(Controller);
}