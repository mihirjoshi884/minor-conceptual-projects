#include <stdio.h>
#include <stdlib.h>


struct arraylinker
{
    int array[20];
    struct arraylinker *next;

};
int main(){
    struct arraylinker *head,*temp,*newnode;
    head=temp=0;

    int choice;
    int size ;
    while(choice==0){
        newnode = (struct arraylinker *) malloc(sizeof(struct arraylinker));

        printf("enter the size of the array you want - \n");
        
        scanf("%d",&size);
        printf("enter the elements in the array -\n");

        for (int i = 0; i<size; i++)
        {
            scanf("%d",&newnode->array[i]);
            newnode = newnode->next = 0;
        } 
        

        if(head==0)
        {head = temp = newnode;}
        
        else{

            temp = newnode -> next ;
            temp = newnode;
        }
        printf("enter 1 to enter more node or 0 to quit making new node:\n");
        scanf("%d",&choice);



    }
    temp = head ;
    while(temp!=0){
        printf("printing the array -\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d",newnode->array[i]); 
            temp = temp->next; 
        } 
        getchar();
        
    }    
    return 0;
    
}