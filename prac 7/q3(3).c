#include <stdio.h>

typedef int SeriesElement;

int main() {
    SeriesElement start = 6;
    SeriesElement increment = 5;

    for (SeriesElement i = 0; i < 10; i++) {
        printf("%d ", start);
        start += increment;
    }
    printf("\n");
    return 0;
}
