#include<stdio.h>
void main()
{
    int a[10]={3,45,34,12,12,43,345,5,6,7};
    int max1=45;
    int max2=3;
    for(int i=2;i<10;++i)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
        {
            max2=a[i];
        }
    }
    printf("%d i the 2nd largest value",max2);
}
