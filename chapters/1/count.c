#include <stdio.h>

/* Exercise 18: Count blanks, tabs, and newlines. */
int main()
{
    int c, blanks, tabs, newlines;
    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
    printf("blanks = %d, tabs = %d, newlines = %d\n", blanks, tabs, newlines);
}
