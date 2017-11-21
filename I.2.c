#include <stdio.h>
#include <stdlib.h>
int i,j;

int strlen_array(char array[]);
int strlen_pointer(char *strp);

int main()
{
    char s[256];
    gets(s);
    printf("a)%d\n", strlen_array(s));
    printf("b)%d\n", strlen_pointer(&s));

    return 0;
}

int strlen_array(char array[])
{
        while(array[i]!='\0')
            i++;

        return i;
}

int strlen_pointer(char *strp)
{
    while(*strp!='\0')
    {
        j++;
        strp++;
    }
    return j;
}
