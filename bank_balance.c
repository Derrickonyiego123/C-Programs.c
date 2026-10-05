#include <stdio.h>

int main(void) {
    double balance = 50000.0;
    double amount;

    printf("Welcome to the ATM\n");
    printf("Initial balance: KSh %.2f\n", balance);

    printf("\nEnter withdrawal amount (0 to exit): KSh ");
    scanf("%lf", &amount);

    while (amount != 0) {
        if (amount < 0) {
            printf("Invalid amount. Please enter a positive value.\n");
        } else if (amount > balance) {
            printf("Insufficient funds. Transaction ended.\n");
            break;
        } else {
            balance -= amount;
            printf("Withdrawal successful. Remaining balance: KSh %.2f\n", balance);
        }

        printf("\nEnter withdrawal amount (0 to exit): KSh ");
        scanf("%lf", &amount);
    }

    printf("\nThank you for using our ATM. Final balance: KSh %.2f\n", balance);

    return 0;
}