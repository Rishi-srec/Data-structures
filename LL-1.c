#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void append(struct node **q,int d)
{
    struct node *nn = (struct node*)malloc(sizeof(struct node));
    struct node *temp = *q;
    nn->data = d;
    nn->link = NULL;
    if(*q == NULL)
        *q = nn;
    else{
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = nn;
    }
}
int main()
{
    int N,val;
    struct node *head = NULL;
    printf("Enter number of elements\n");
    scanf("%d",&N);
    while(N>=0)
    {
        printf("Enter the element\n");
        scanf("%d",&val);
        append(&head,val);
        N--;
    }
    display(head);
}
