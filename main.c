#include "tree.h"
#include <time.h>
int main() {

    clock_t start, end;
    double cpu_time_used;

    start = clock();


    Tree t0=NewTree();
    Tree t1=NewTree();
    Tree t2=NewTree();
    Tree t3=NewTree();
    Tree t4=NewTree();
    Tree t5=NewTree();
    SetTree(t0,0);
    SetTree(t1,1);
    SetTree(t2,2);
    SetTree(t3,3);
    SetTree(t4,4);
    SetTree(t5,5);

    BranchTree(t0,t1,t2);
    BranchTree(t1,t3,t4);
    BranchTree(t2,NULL,t5);
    ReverseTree(t0);



    DelBranches(t0);

    end = clock();
    cpu_time_used = 1000000000000000000.0*((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%.23lf\n", cpu_time_used);

    return 0;
}