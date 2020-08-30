#include<stdio.h>
#include<string.h>
void main()
{
    int a,b;
    //for queries
    printf("Size of queries: ");
    scanf("%d",&a);
    int fq[a],c[a];
    char q[a][15],min[1][1];
    printf("Enter strings in queries: ");
    int i,j;
    for(i=0;i<a;i++)
    {
        scanf("%s",q[i]);
        fq[i]=0;
    }
    int n;
    for(i=0;i<a;i++)
    {
        n=strlen(q[i]);
        min[0][0]=q[i][0];
        for(j=0;j<n;j++)
        {
            if(q[i][0]>q[i][j])
                min[0][0]=q[i][j];
        }
        for(j=0;j<n;j++)
        {
            if(min[0][0]==q[i][j])
                fq[i]=fq[i]+1;
        }
        printf("%d ",fq[i]);
    }
    //for words
    printf("\nSize of words: ");
    scanf("%d",&b);
    int fw[b];
    char w[b][15];
    printf("Enter strings in words: ");
    for(i=0;i<b;i++)
    {
        scanf("%s",w[i]);
        fw[i]=0;
    }
    int m;
    for(i=0;i<b;i++)
    {
        m=strlen(w[i]);
        min[0][0]=w[i][0];
        for(j=0;j<m;j++)
        {
            if(w[i][0]>w[i][j])
                min[0][0]=w[i][j];
        }
        for(j=0;j<m;j++)
        {
            if(min[0][0]==w[i][j])
                fw[i]=fw[i]+1;
        }
        printf("%d ",fw[i]);
    }
    printf("\n");
    for(i=0;i<a;i++)
        c[i]=0;
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
            if(fq[i]<fw[j])
            {
                c[i]=c[i]+1;
            }
    for(i=0;i<a;i++)
        printf("%d ",c[i]);
}
