#include <stdio.h>

typedef int TableElement;

int main() {
    TableElement multiplier = 5;
    for (TableElement i = 1; i <= 10; i++) printf("%d ", i * multiplier);
    printf("\n");
    return 0;
}
