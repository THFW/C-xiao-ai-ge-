#include<stdio.h>
#define N 100
int main()
{
    int i=0,n=0;
	char a[N];
    gets(a);
	for(i=0;i<N;i++)
	{
		if(a[i]=='\0')
		{
			n=i;
			break;
		}
		
	}
	
	for(i=n-1;i>=0;i--)
	{
		if(a[i]==' ')
			continue;
		else
		printf("%c",a[i]);
	}

    return 0;
}