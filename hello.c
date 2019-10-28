#include<stdio.h>
int maxnumber(int a,int b);
void minnumber(int a,int b,int c);
int main()
{
    int a,b,m;
	scanf("%d %d",&a,&b);
    m=maxnumber(a,b);
	minnumber(a,b,m);
    return 0;
}

int maxnumber(int a,int b)
{
	int c;
	while(b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d ",a);
	return a;
}

void minnumber(int a,int b,int c)
{
		int n;
		n=(a*b)/c;
		printf("%d",n);
}
