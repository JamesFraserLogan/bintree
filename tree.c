//
// Created by James on 2021-04-22.
//
#include "tree.h"
typedef struct tree_s
{
    int data;
    struct tree_s *left;
    struct tree_s *right;
}tree_t;
static void branchTree(Tree input,Tree left,Tree right);
static void delBranches(Tree input);
static Tree newTree(void);
static void reverseTree(Tree input);
static void setTree(Tree input,int data);
static void branchTree(Tree input,Tree left,Tree right)
{
    if(input==NULL)
    {
        fprintf(stderr,"Error in branchTree.\n");
        exit(EXIT_FAILURE);
    }
    input->left=left;
    input->right=right;
}
static void delBranches(Tree input)
{
    if(input==NULL)
    {
        return;
    }
    delBranches(input->left);
    delBranches(input->right);
    input->data=0;
    input->left=input->right=NULL;
    free(input);
}
static Tree newTree(void)
{
    Tree ret = calloc(1, sizeof(tree_t));
    if(ret==NULL)
    {
        fprintf(stderr,"Error in newTree.\n");
        exit(EXIT_FAILURE);
    }
    return ret;
}
static void reverseTree(Tree input)
{
    if(input==NULL)
    {
        return;
    }
    reverseTree(input->left);
    reverseTree(input->right);
    Tree temp=input->left;
    input->left=input->right;
    input->right=temp;
}
static void setTree(Tree input,int data)
{
    if(input==NULL)
    {
        fprintf(stderr,"Error in setTree.\n");
        exit(EXIT_FAILURE);
    }
    if(data<INT_MIN||data>INT_MAX)
    {
        fprintf(stderr,"Error in setTree.\n");
        exit(EXIT_FAILURE);
    }
    input->data=data;
}
void BranchTree(Tree input,Tree left,Tree right)
{
    branchTree(input,left,right);
}
void DelBranches(Tree input)
{
    delBranches(input);
}
Tree NewTree(void)
{
    return newTree();
}
void PrintTree(Tree input,size_t level)
{
    if(input==NULL)
    {
        return;
    }
    level += 8;
    PrintTree(input->left,level);
    printf("\n");
    for(size_t i=8;i<level;i++)
    {
        printf(" ");
    }
    printf("%d\n",input->data);
    PrintTree(input->right,level);
}
void ReverseTree(Tree input)
{
    reverseTree(input);
}
void SetTree(Tree input,int data)
{
    setTree(input,data);
}