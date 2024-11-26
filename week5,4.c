#include<stdio.h>
int main()
{
	int n,i,b,j;
	printf("enter no of array elements(even)");
	scanf("%d",&n);
	int k[n];
	for(i=0;i<n;i++)
	scanf("%d",&k[i]);
		for(j=0;j<n-1;j+=2)
		{
			b=k[j];
			k[j]=k[j+1];
			k[j+1]=b;	
		}
	
	
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",k[i]);
		
	}
	
	return 0;
}
