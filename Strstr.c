#include <stdio.h>
int fun(char *s,char *t)
{
int c=0;
char *p,*q;
while(*s)
{
p=s;q=t;
while(*p && *q && *p++ == *q++);
if(!*q)c++;
s++;
}
return c;
}

void main()
{
char *str1="celebration meeting",*str0="ti";
printf("%d\n",fun(str1,str0));
}
