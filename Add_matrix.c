#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,m,n;
    void add(int a[10][10],int b[10][10],int m,int n);
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&m,&n);
    printf("Enter First matrix:\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("Enter a element:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second matrix:\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("Enter a element:");
            scanf("%d",&b[i][j]);
        }
    }
    add(a,b,m,n);
    return 0;
}
void add(int a[10][10],int b[10][10],int m,int n)
{
    int temp[m][n],i,j;
    for(i=0;i<=m-1;i++)
    {
           for(j=0;j<=n-1;j++)
           {
               temp[i][j]= a[i][j]+ b[i][j];
           }
    }
    printf("The resultant matrix is:\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%d\t",temp[i][j]);
        }
        printf("\n");
    }
}
