#include<stdio.h>
#define N 100
int main()
{
    int b=0,c=0,d=0,e=0,i;
	char a[N];
	//scanf("%s",a);
	gets(a);
	for(i=0;i<N;i++)
	{
		if(a[i]=='\0')
		{break;}
		else
		{
			if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			{
				b++;
			}
			else if(a[i]>='1'&&a[i]<='9')
			{
				c++;
			}
			else if(a[i]==' ')
			{
				d++;
			}
			else
			{
				e++;
			}
		}
	}
	printf("%d %d %d %d",b,c,d,e);

    return 0;
}