#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE head, int no)
{
   
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else 
    {
        newn->next = *head;
        *head = newn;
    }
}
void MiddleElement(PNODE head)
{
    PNODE fast = NULL;
    PNODE slow = NULL;

    fast = head;
    slow = head;

    while((fast != NULL) && (fast->next != NULL))
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    printf("Middle element is  : %d",Student->data);

}
void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE first = NULL;
    InsertFirst(&first,11);
    // InsertFirst(&first,21);
    InsertFirst(&first,101);
    InsertFirst(&first,111);
    InsertFirst(&first,151);
    InsertFirst(&first,201);

    Display(first);

    MiddleElement(first);

    return 0;
}
