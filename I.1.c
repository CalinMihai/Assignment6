#include <stdio.h>
#include <string.h>
char s1[250], s2 [250];

char *strcpy_array( char dest[], char src[] );
char *strcpy_pointer( char *dest, char *src );

int main()
{
    scanf("%s", s1);
    printf("a)%s\n", strcpy_array(s2,s1));
    scanf("%s", s1);
    strcpy_pointer(s2,s1);
    printf("b)%s ", s2);

}
char *strcpy_pointer( char *dest, char *src )
{
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest='\0';
}

char *strcpy_array( char dest[], char src[] )
{
    int i;

    for(i=0;i<=strlen(src);i++)
    {
        dest[i]=src[i];
    }

    return src;
}
