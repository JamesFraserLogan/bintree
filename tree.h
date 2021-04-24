//
// Created by James on 2021-04-22.
//

#ifndef BIN_TREE_TREE_H
#define BIN_TREE_TREE_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct tree_s *Tree;
void BranchTree(Tree input,Tree left,Tree right);
void DelBranches(Tree input);
Tree NewTree(void);
void PrintTree(Tree input,size_t level);
void ReverseTree(Tree input);
void SetTree(Tree input,int data);
#endif //BIN_TREE_TREE_H
