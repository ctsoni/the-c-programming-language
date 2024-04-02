#include <stdio.h>

int main()
{
    int c;
    char value;
    while((c = getchar()) != EOF) {
	printf("%d", c != EOF);
    }
    printf("\n%d\n", c != EOF);
}
