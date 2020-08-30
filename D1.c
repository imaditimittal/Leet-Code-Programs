#include<stdio.h>
void uniqueOccurrences(int arr[], int arrSize)
{
    int i,j,freq[20],res=0,c;
    for(i=0;i<arrSize;i++)
    {
        c=1;
        for(j=0;j<arrSize;j++)
            if(arr[i]==arr[j] && freq[i]!=0)
            {
                c++;
                freq[j]=0;
            }
        if(c>1)
            freq[i]=c;
    }
    for(i=0;i<arrSize;i++)
        for(j=i+1;j<arrSize;j++)
            if(freq[i]==freq[j] && freq[i]>0)
                res=1;
    if(res==1)
        printf("False");
    else
        printf("True");
}
void main()
{
    int arrSize;
    printf("Enter size of array: ");
    scanf("%d",&arrSize);
    int arr[arrSize],i;
    printf("Enter elements of array: ");
    for(i=0;i<arrSize;i++)
        scanf("%d",&arr[i]);
    uniqueOccurrences(arr,arrSize);
}
