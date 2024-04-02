#include <stdio.h>

int main()
{
    int c;
    int nblank, ntabs, nlines;

    nblank = ntabs = nlines = 0;
    while((c = getchar()) != EOF) {
	if(c == ' ')
	    nblank++;
	else if(c == '\t')
	    ntabs++;
	else if(c == '\n')
	    nlines++;
    }

    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", nblank, ntabs, nlines);
}
