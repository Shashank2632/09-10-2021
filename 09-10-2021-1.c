#include <stdio.h>
int main()
{
    int n,c,rem=0,count=0,rev;
    printf("Enter number:");
    scanf("%d",&c);
    n=c;
    printf("The digits are:");
    while(n!= 0)
    {
        rem=n%10;
        count++;
        printf("%d,",rem);
        n=n/ 10;
    }
    printf("\nNumber of digits:%d\n",count);
    printf("Reverse of %d is:",c);
    while(c!=0)
    {   
        rev=c%10;
        printf("%d",rev);
        c=c/10;
    }
    return 0;
}

