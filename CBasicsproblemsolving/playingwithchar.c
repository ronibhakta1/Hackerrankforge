#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch[100],s[50],sen[60];
    fgets(ch, sizeof(ch),stdin);
    fputs(ch, stdout);
     fgets(s, sizeof(s),stdin);
    fputs(s, stdout);
     fgets(sen, sizeof(sen),stdin);
    fputs(sen, stdout);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
