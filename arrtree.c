#include <stdio.h>
#include <stdlib.h>
#include "arrtree.h"

int main(){
    arrtree *root;
    root = 0;
    root = create();

    printf(" enter the following for : 1. preorder , 2.inorder ,3. postorder");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        preorder(root);
        break;
    case 2:
        inorder(root);
        break;
    case 3:
        postorder(root);
        break;
    return 0;
}