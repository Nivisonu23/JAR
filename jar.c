#include<stdio.h>
int main()
{
	int n,a[100],i,b=0,min=9999;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i+=2)
	{
		if(min>(a[i]+a[i+1]))
		{
			b=i;
			min=a[i]+a[i+1];
		}
	}
		
	printf("\nJar %d ",((b/2)+1));
	return 0;
}
