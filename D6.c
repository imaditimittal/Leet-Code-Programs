#include<stdio.h>
void arrangeArray(int a[], int n)
{
    int x,y,temp;
    for(x=0;x<n;x++)
    {
        for(y=x;y<n;y++)
            if(a[x]==0 && a[y]!=0)
            {
                temp=a[x];
                a[x]=a[y];
                a[y]=temp;
            }
        printf("%d ",a[x]);
    }
}
void main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    arrangeArray(a,n);
}
