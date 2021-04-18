#include<stdio.h>
int main()
{
	int n,a[100],i,s,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int b[n/2];
	for(i=0;i<n;i+=2)
	{
		b[i]=a[i]+a[i+1];
		printf("%d ",b[i]);
		s=b[0];
		if(b[i]<s)
			c=i;
	}
	s=b[0];
	i=0;
	while(i<n/2)
	{
		if(b[i]<s)
			c=i;
		i++;
	}
	printf("\nJar %d ",c);
	return 0;
}
