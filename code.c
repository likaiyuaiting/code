#include<stdio.h>
int main(void)
{
	int i=0,j=0,temp;
	int a[]={5,4,8,6,2,4,3,8,4,15,1,0};
	int N=sizeof(a)/sizeof(a[0]);
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}
