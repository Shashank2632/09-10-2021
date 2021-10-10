#include<stdio.h>
int main()
{   
    int n,temp,i;
    printf("Enter any number:");
    scanf("%d",&n);
    temp=n;
    printf("Digits extracted are:");
    while(n>0)
    {
        i=n%10;
        if(i)
        printf("%d,",i);
        n=n/10;
    }
    return 0;
}

