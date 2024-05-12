#include <stdio.h>
#define STR_SIZE 100

int main(int argc, char **argv)
{
    char st[STR_SIZE] = "hello" " 123 " "world!"; // st[0]='h' st[1]='e' st[2]=’l’ st[3]=’l’ st[4]='o' st[5]='\0'
    printf("st=%s\n",st); // напечатать строку
    //~ long long int ar[10];
    //~ int N = sizeof(ar)/sizeof(*ar);
    //~ printf("%d\n",N); // 10
    printf("Max length = %llu\n", sizeof(st)); // 10
    //~ scanf("%s",st); // считать строку до первого пробельного символа или \n
    //~ int r = scanf("%[a-z]",st);// считать стр буквы
    //~ int r=scanf("%[0-9]",st);// считать цифры
    //~ int r=scanf("%[^\n]",st);// все кроме \n
    char s1[100]={0}, s2[100]="";
    int r;
    r=scanf("%[0-9]=%[a-z]",s1,s2);

    printf("r=%d st=%s %s\n",r,s1,s2); // напечатать строку
    return 0;
}

