//Given two sorted linked list A and B of size M and N respectively . Merge List A and B to List C.
//List C should be in sorted order in O(N+M)

#include<stdio.h>
#include<stdlib.h>



typedef struct node{

    int data;
    struct node *ptr;
}Node;

typedef struct linked_list{

    Node *head,*tail;
    unsigned int countt;
}List;


List *init_list();

int insert_at_end(List *my_list,int data);
int insert_at_end(List *my_list,int data);
List *merge(List *list1,List *list2);
