#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node{
    int data;
    struct node *left,*right;
}*root=NULL;
void add(int d)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    if(root == NULL)
    new=root;
    new->data=d;
    new->left=NULL;
    new->right=NULL;
    else if (n->data<root->data)
    {
        root->left=n;
    }
    else{
        root->right=n;
    }
}
void inorder(struct node *root)
{
    if(!root)
    return;
    else{
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if(!root)
    return;
    else{
        printf("%d",root->data)
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(!root)
    return;
    else{
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
int main(){
    add(12);
    add(5);
    add(78);
    inorder(root);
    preorder(root);
    postorder(root);
}