#include <stdio.h>
#include <stdlib.h>
char s1[250],s2[250];

char *strcat_pointer(char *s,char *t);

int main()
{

    gets(s1);
    gets(s2);

    strcat_pointer(s2,&s1);

    printf("%s", s1);

return 0;
}

char *strcat_pointer(char *s, char *t)
{
    while(*t)
    {
        t++;
    }

    while(*s)
    {
        *t=*s;
        s++;
        t++;
    }

    *t='\0';
}
