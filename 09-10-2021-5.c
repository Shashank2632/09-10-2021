#include<stdio.h>
int main()
{   
    int code,pin,n,i;
    i=1;
    printf("Enter the code\n");
    scanf("%d",&code);
    pin=0;
    while(code>0)
        {
            n=code%10;
            code=code/10;
            if(n==9)
            pin=pin+0;
            else
            pin=pin+(n+1)*i;
            i=i*10;
        }
    printf("The pin is %d\n",pin);
}
