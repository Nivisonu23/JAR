#include<stdio.h>
int main()
{
	int n,a[20],i,b[10],c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i+=2)
	{
		b[i]=a[i]+a[i+1];
	}
	int s=sizeof(b)/sizeof(b[0]);
	for(i=0;i<s;i++)
	{
		if(b[i]<b[i+1])
			c=i+1;
	}
	printf("%d",c);
	return 0;
}
