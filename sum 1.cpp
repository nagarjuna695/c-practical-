#include<stdio.h>
int main()
{
	int sumn=0,sump=0,n=0,p=0;
	int num;
	float pavg=0,navg=0;
	scanf("%d",&num);
	while( num!=-1)
	{
		if(num<0)
		{
			sumn=sumn+num;
			n=n+1;
		}
		else
		{
			sump=sump+num;
			p=p+1;
		}
		scanf("%d",&num);
	} 
	navg=sumn/n;
	pavg=sump/(float)p;
	printf("avg p=%d \n sump avg=%d ",pavg,navg);
}
