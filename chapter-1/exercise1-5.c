#include <stdio.h>

int main()
{
    int celcius;

    for(celcius = 300; celcius >= 0; celcius = celcius - 20) {
	printf("%3d %6.1f\n", celcius, ((9.0/5.0) * celcius) + 32.0);
    }
}
