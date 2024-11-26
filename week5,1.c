#include<stdio.h>
int main()
{
	int n,i,b,s=0,j,p=0,r=0;
	printf("enter no of array elements");
	scanf("%d",&n);
	int k[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		r++;
		
		if(k[j]>k[j+1])
		{
			b=k[j];
			k[j]=k[j+1];
			k[j+1]=b;
			p++;
		}
	
	}
	for(i=0;i<n;i++)
	{
		s=s+k[i];
		printf("%d\n",k[i]);
		
	}
	printf("min=%d\nmax=%d\navg=%f\n",k[0],k[n-1],(float)s/n);
	
	printf("%d %d",r,p);
	return 0;
}
