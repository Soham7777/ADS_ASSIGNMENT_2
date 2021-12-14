#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"header.h"

int main()
{
    List *list1,*list2,*list3;
    Node * temp;
    list1 = init_list();
    list2 = init_list();
    //list3 = init_list();

    assert(list1->head == NULL);
    assert(list2->head == NULL);
    assert(list1->countt ==0);

    assert(insert_at_end(list1,10));
    assert(insert_at_end(list1,20));
    assert(insert_at_end(list1,30));
    assert(insert_at_end(list1,40));
    assert(insert_at_end(list1,50));

    assert(insert_at_end(list2,15));
    assert(insert_at_end(list2,25));
    assert(insert_at_end(list2,35));
    assert(insert_at_end(list2,40));
    assert(insert_at_end(list2,45));

    //printf("%d",list2->tail->data);
    list3 = merge(list1,list2);
    temp = list3->head;
    assert(list3->countt == 10);
    for(;temp != NULL;temp = temp->ptr)
    {
        printf("%d\t",temp->data);
    }
 return 0;
}
