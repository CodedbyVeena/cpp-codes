#include<stdio.h>
void main()
{
    int a[10]={1,3,5,7,8,9,15,38,273,7847};
    int i=0;
    if (a[i]<a[i+1])
    {
        for(int i=0;i<9;i++)
        {
            if(a[i]>a[i+1])
            {
        printf("Array not sorted");
        break;
            }
        }
        printf("ascending sorted");
    }
    else{
        for(int i=0;i<9;i++)
        {
            if(a[i]<a[i+1]){
        printf("Array is not sorted");
        break;
            }
        }
        printf("descending sorted");
    }
}