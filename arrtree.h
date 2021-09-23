
struct arrtree{
    struct arrtree *left;
    int data[5];
    struct arrtree *right;
};

typedef struct arrtree arrtree;

arrtree * create()
{
    arrtree * newnode;
    newnode= (arrtree *)malloc(sizeof(arrtree));
    int ch ;

    printf("enter -1 for no more node or any other integer number for adding a node:\n");
    scanf("%d",&ch);
    
    if(ch==-1)
    {return 0;}
    else{
        int data1[5];
        printf("data entered into the node\n");
        for (int i = 0; i < 5; i++)
        {
            scanf("%d",&data1);
            newnode ->data[i] = data1[i];
        }
        

        printf("enter left node \n");
        newnode ->left = create();
        
        printf("enter right node\n");
        newnode ->right = create();

        return newnode;
        
    }
void postorder(arrtree *root)
{
    if(root == 0)
    {return;}
    else
    {
        postorder(root ->left);
        postorder(root ->right);
        for (int i=0;i<5;i++)
        {
            printf("%d",root->data[i],"\n");
        }
    }
}
void preorder(arrtree *root)
{
    if(root == 0)
    {return;}
    else
    {
        for (int i=0;i<5;i++){
            printf("%d",root->data[i],"\n");
        }
        preorder(root ->left);
        preorder(root ->right);
        
    }
}
void inorder(arrtree *root)
{
    if(root == 0)
    {return;}
    else
    {
        inorder(root ->left);
        for (int i=0;i<5;i++){
            printf("%d",root->data[i],"\n");
        }
        inorder(root ->right);
        
    }
}