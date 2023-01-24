#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,p;
    //printf("Enter the elements of array");
    a[0]=2;
    a[1]=5;
    a[2]=9;
    printf("Enter your index");
    scanf("%d",&p);
    if(a[p]==" ")
        printf("none");
    else
        printf("%d",&a[p]);

    return 0;
}
