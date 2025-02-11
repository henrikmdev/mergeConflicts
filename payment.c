#include <stdio.h>

double calculate_total(double price, int quantity) {
    double total = price * quantity;

    if (quantity > 10) {  // Alice's new feature: Bulk discount
        total *= 0.9;  // Apply 10% discount
    }

    total *= 1.05;  // Bob's new feature: Apply 5% tax

    return total;
}

int main() {
    printf("Total: $%.2f\n", calculate_total(10.0, 12));
    return 0;
}
