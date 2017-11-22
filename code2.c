/*************************************************************************
	> File Name: code2.c
	> Author: linuxidc
	> Mail: linuxidc@linuxidc.com 
	> Created Time: 2017年11月22日 星期三 16时39分19秒
 ************************************************************************/

#include<stdio.h>
int fac(int n)
{
	int set=1;
	int i=0;
	for(i=0;i<n;i++)
		set*=i;
	return set;
}
int main()
{
	int n,m,res;
	printf("请输入n,m的值：");
	scanf("%d,%d",&n,&m);
	res=fac(n)/(fac(m)*fac(n-m));
	printf("m和n的组合数是:%d\n",res);
	return 0;
}
