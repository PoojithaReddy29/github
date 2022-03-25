#include<stdio.h>
int main()
{
     int A[10][10],B[10][10],C[10][10],p,q,m,n,i,j,k;
     printf("Enter the order of matrix A(p*q)");
     scanf("%d%d",&p,&q);
     printf("Enter the order of matrix B(m*n)");
     scanf("%d%d",&m,&n);
     if(q!=m)
     {
     printf("Matrix multiplication is not possible");
     return -1;
     }
     printf("Enter matrix A");
     for(i=0;i<p;i++)
     {
     	for(j=0;j<q;j++)
     	{
     		scanf("%d",&A[i][j]);
     	}
     }
     printf("Matrix a:\n");
     for(i=0;i<p;i++)
     {
        for(j=0;j<q;j++)
        {
        	printf("\t%d",A[i][j]);
     	}
     	printf("\n");
     }
     printf("Enter matrix B");
     for(i=0;i<m;i++)
     {
     	for(j=0;j<n;j++)
     	{
     		scanf("%d",&B[i][j]);
     	}
     }
     printf("Matrix b:\n");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
        	printf("\t%d",B[i][j]);
     	}
     	printf("\n");
     }
     if(n!=p)
     {
      printf("Matrix multiplication not possible");
      return -1;
     }
     for(i=0;i<m;i++)
     {
     	for(j=0;j<q;j++)
     	{
     		C[i][j]=0;
     		for(k=0;k<n;k++)
     		{
     		C[i][j]=A[i][k]*B[k][j];
     		}
     	}
     }
     printf("Resultant Matrix\n");
      for(i=0;i<m;i++)
     {
     	for(j=0;j<q;j++)
     	{
     		printf("\t%d",C[i][j]);
     	}
     	printf("\n");
     	}
     	return 0;
     }
