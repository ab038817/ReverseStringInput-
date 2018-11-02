#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* reverse: reverse string s in place */


int main()
{
    void reverse (char s[])
    {
        int c, i, j;

        for (i = 0, j = strlen(s)-1; i < j; i++, j--){
             c = s[i];
             s[i] = s[j];
             s[j] = c;
    }


}
    printf("Enter a string text below: ");

//copy out of book page
    return 0;
}
