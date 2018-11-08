#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* reverse: reverse string s in place */


int main()
{




    printf("Enter a string text below: ");
    char data[25];

    gets(data);


    reverse(data);

    return 0;
}
void reverse (char s[])
    {
        int c, i, j;

        for (i = 0, j = strlen(s)-1; i < j; i++, j--){
             c = s[i];
             s[i] = s[j];
             s[j] = c;
    }
    printf("%s",s);

    }
