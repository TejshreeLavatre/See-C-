#include<stdio.h>
int main()
{
    int A[] = {2,4,5,8,1};
    int i;
    int *p = A;
    for (int i=0; i<5; i++)
    {
        printf("Address of element %d = %d\n",i,&A[i]);
        printf("Address of element %d = %d\n",i, A+i);
        printf("Value of element at position %d = %d\n",i,A[i]);
        printf("Value of element at position %d = %d\n",i,*(A+i));
    }
}
