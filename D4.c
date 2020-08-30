#include<stdio.h>
#include<stdlib.h>
void main()
{
    int R,C,r0,c0;
    printf("R= ");
    scanf("%d",&R);
    printf("C= ");
    scanf("%d",&C);
    int distance[R*C],i,j,k;
    printf("r0= ");
    scanf("%d",&r0);
    printf("c0= ");
    scanf("%d",&c0);
    for(k=0;k<(R*C);)
        for(i=0;i<R;i++)
            for(j=0;j<C;j++)
            {
                distance[k]=abs(r0-i)+abs(c0-j);
                k=k+1;
            }
    int min,temp;
    for(k=0;k<(R*C);k++)
        for(i=k;i<(R*C);i++)
            if(distance[k]>=distance[i])
            {
                temp=distance[k];
                distance[k]=distance[i];
                distance[i]=temp;
            }
    printf("[");
    for(k=0;k<(R*C);)
        for(i=0;i<R;i++)
            for(j=0;j<C;j++)
                if(distance[k]==abs(r0-i)+abs(c0-j))
                {
                    printf("[%d,%d],",i,j);
                    k=k+1;
                }
    printf("]");
}
