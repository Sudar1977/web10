#include <stdio.h>
#define STR_SIZE 100

int main(int argc, char **argv)
{
    char st[STR_SIZE] = "hello"; // st[0]='h' st[1]='e' st[2]=’l’ st[3]=’l’ st[4]='o' st[5]='\0'
    //~ long long int ar[10];
    //~ int N = sizeof(ar)/sizeof(*ar);
    //~ printf("%d\n",N); // 10
    printf("%llu\n", sizeof(st)); // 10
    //~ scanf("%s",st); // считать строку до первого пробельного символа или \n
    char c;
    int i=0;
    while( (c=getchar())!='\n' && i < (STR_SIZE-1) )
        st[i++]=c;
    //~ st[5]='\0';
    st[i]='\0';
    //~ for(i=0;st[i]!=0;i++)
    for(i=0;st[i];i++)
        putchar(st[i]);
    //~ printf("%s",st); // напечатать строку
    return 0;
}

