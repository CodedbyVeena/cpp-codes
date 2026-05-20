#include<stdio.h>
void main()
{
    int a[10]={2,4,7,56,98,76,6,8,5,4};
    int sum1=0,sum2=0;
    for(int i=0;i<10;++i)
    {
        if(i<5)
        {
            sum1+=a[i];
        }
        else{
            sum2+=a[i];
        }
    }
    if(sum1>sum2)
    {
        printf("%d means first half is greater sum");
    }
    else{
        printf("%d thats second half has greater sum");
    }
}