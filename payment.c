#include <stdio.h>

double calculate_total(double price, int quantity) {
    return price * quantity;  // Basic total calculation
}

int main() {
    printf("Total: $%.2f\n", calculate_total(10.0, 2));
    return 0;
}