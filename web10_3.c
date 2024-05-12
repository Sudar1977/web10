#include <stdio.h>
#include <string.h>

int my_strlen(char *src)
{
    int len=0;
    //~ for(len=0;src[len]!='\0';len++)
    //~ for(len=0;src[len];len++)
    //~ {}
    while(*src++)
        len++;
    return len;
}



char *my_strcpy (char *dst, char *src)
{
    char *ptr = dst;
    while(*dst++=*src++)
    {}
    return ptr;
}


int my_strcmp(const char *a, const char *b)
{
    //~ while(*a!=0 && *b!=0 && *a==*b)
    while(*a && *b && *a==*b)
        a++,b++;
    return *a - *b;
}

char *my_strcpy2 (char *dst, char *src)
{
    for (char* ptr = dst; *src; src++,ptr++)
        *ptr = *src;
    *src='\0';
    return dst;
}


int main(void) {
    char st[10] = "hello";
    printf("Sizeof = %llu\n", sizeof(st));
    printf("Strlen = %llu\n", strlen(st));
    printf("Strlen = %d\n", my_strlen(st));
    //~ char st1[10] = "hello";
    //~ char st2[10] = "hello";
    //~ if(st1 == st2)
    //~ printf("Yes\n");
    //~ else
    //~ printf("No\n");
    char *EQ = "equal to";
    char *LS = "less";
    char *GT = "greater than";
    char *a = "abcde";
    char *b = "xyz";
    char *c = "abcd";
    char *d = "xyz";
    int res;
    printf("A = %s\nB = %s\nC = %s\nD = %s\n\n", a, b, c, d);
    printf("A is %s B\n",(res = my_strcmp(a, b)) == 0 ? EQ : res < 0 ? LS : GT);
    printf("A is %s C\n",(res = my_strcmp(a, c)) == 0 ? EQ : res < 0 ? LS : GT);
    printf("A is %s D\n",(res = my_strcmp(a, d)) == 0 ? EQ : res < 0 ? LS : GT);
    printf("B is %s C\n",(res = my_strcmp(b, c)) == 0 ? EQ : res < 0 ? LS : GT);
    printf("B is %s D\n",(res = my_strcmp(b, d)) == 0 ? EQ : res < 0 ? LS : GT);
    printf("C is %s D\n",(res = my_strcmp(c, d)) == 0 ? EQ : res < 0 ? LS : GT);
    char str1[]= {"Hello!"}; //char* str1 = {"Hello!"};
    char str2[]= {"World!"}; //char* str2={"World!"};
    printf("%s\n",my_strcpy2(str2,str1));
    printf("%s\n",str2);
    return 0;
}
