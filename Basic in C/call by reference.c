#include<stdio.h>
void Increment(int *p1)
{
    *p1 = *p1 + 1;
}
int main()
{
    int a;
    a = 10;
    Increment(&a);
    printf("a = %d\n",a);
}

