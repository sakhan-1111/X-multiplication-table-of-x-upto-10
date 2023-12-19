#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k;
    printf("How many multiplication table you want: ");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
    printf("\n");
    for(j=0;j<=10;j++)
    {
    printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}
