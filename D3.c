#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10],str2[10];
    int len1,len2,i,flag;
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;str2[i]!='\0';i++)
    {
        if(str1[i]==str2[i])
            flag=1;
        else
            flag=0;
    }
    if(flag==1)
    {
        for(i=len2;str1[i]!='\0';i++)
            printf("%c",str1[i]);
    }
    else
        printf("\n ");
}
