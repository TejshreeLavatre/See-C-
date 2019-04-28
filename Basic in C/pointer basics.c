#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p;
    p = &a;  //gives us address of a
    a = 5;
    printf("%d\n",a); //given value stored in variable a which is 5
    printf("%d\n",p); //gives address of a
    printf("%d\n",&p); //gives address of p
    printf("%d\n",*p); //gives us value of variable a which is 5
    printf("a = %d\n",a);
    *p = 12; //dereferencing
    printf("a = %d\n",*p);
    return 0;
}


