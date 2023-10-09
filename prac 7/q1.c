#include <stdio.h>

int main() {
    int stock_quantity = 100, order_quantity;
    char credit_status;

    printf("Enter order quantity: ");
    scanf("%d", &order_quantity);
    printf("Is the customer's credit OK? (Y/N): ");
    scanf(" %c", &credit_status);

    if (order_quantity <= stock_quantity) {
        if (credit_status == 'Y' || credit_status == 'y') {
            printf("Order processed. Supplying %d units.\n", order_quantity);
        } else {
            printf("Credit not OK. Order cannot be processed.\n");
        }
    } else {
        if (credit_status == 'Y' || credit_status == 'y') {
            printf("Stock is insufficient. Supplying %d units and shipping the rest later.\n", stock_quantity);
        } else {
            printf("Credit not OK. Stock is insufficient. Order cannot be processed.\n");
        }
    }

    return 0;
}
