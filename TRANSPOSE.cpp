#include<stdio.h>
int main()
{
	int m,n,i,j,t[10][10],a[10][10];
	printf("Enter rows and coluumns");
	scanf("%d%d",&m,&n);
	printf("Enter elements of the matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
 {
    t[j][i]=a[i][j];
 }
 }
 
 printf("Transpose of the matrix: \n");
 for(i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
	 
 	  printf("%d",t[i][j]);
 }
 	  printf("\n");
    }
 }
	

