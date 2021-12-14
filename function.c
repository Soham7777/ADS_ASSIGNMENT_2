#include"header.h"

List *init_list(){

    List *my_list;

    my_list = (List*)malloc(sizeof(List));

    if(my_list == NULL){ //check for memory allocation
            return 0;
    }

    my_list->head = my_list->tail = NULL; //list empty

    my_list->countt = 0;

    return my_list;
}

Node *get_node(int data){

    Node *new_node;

    new_node = (Node*)malloc(sizeof(Node));

    new_node->data = data;

    new_node->ptr = NULL;

    return new_node;
}

/*

int insert_at_beginning(List *my_list,int data){

    Node *new_node;

    new_node = get_node(data);

    if(new_node == NULL){return 0;
    }

    if(my_list->countt == 0){

        my_list->head = my_list->tail = new_node;

    }
    else{

        new_node->ptr = my_list->head;
        my_list->head = new_node;
    }
    my_list->countt++;

    return 1;
}

*/



//insert at the end

int insert_at_end(List *my_list,int data){

    Node *new_node;

    new_node = get_node(data);

    if(my_list->countt == 0){

        my_list->head = my_list->tail = new_node;
    }
    else{
        my_list->tail->ptr = new_node;
        my_list->tail = new_node;
    }

    my_list->countt++;
    return 1;

}



//merge list

List *merge(List *list1,List *list2){

   List *list3;
   Node *temp1,*temp2;

   list3 = init_list();

   temp1 = list1->head;
   temp2 = list2->head;

   while(temp1 != NULL || temp2 != NULL)
    {
        if(temp1 != NULL && temp2 !=NULL)
        {
            if(temp1->data <= temp2->data){

            insert_at_end(list3,temp1->data);
            temp1 = temp1->ptr;
            }
            else{

            insert_at_end(list3,temp2->data);
            temp2 = temp2->ptr;
            }
        }
    if(temp1 != NULL && temp2 ==NULL)
    {
        insert_at_end(list3,temp1->data);
        temp1 = temp1->ptr;
    }
    if(temp1 == NULL && temp2 !=NULL)
    {
        insert_at_end(list3,temp2->data);
        temp2 = temp2->ptr;
    }
    }

    return list3;

}


