#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    fgets(s, sizeof(s), stdin);
    fputs("Hello, World!\n", stdout);
    fputs(s, stdout);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
