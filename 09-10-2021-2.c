#include<stdio.h>
int main()
{
    int n,d,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
printf("The sum of digits is %d\n",sum);
if(sum>10)
{   
    d=sum%10;
    sum=sum/10;
    sum=sum+d;
    printf("single digit sum is %d",sum);
}
return 0;
}


