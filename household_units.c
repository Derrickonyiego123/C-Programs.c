#include <stdio.h>

#define HOUSEHOLDS 10

int main(void) {
    int units[HOUSEHOLDS];
    int i;

    // Accept electricity consumption for each household
    for (i = 0; i < HOUSEHOLDS; i++) {
        printf("Enter electricity units consumed by household %d: ", i + 1);
        scanf("%d", &units[i]);
    }

    // Display household number and units consumed
    printf("\n--- Electricity Consumption Report ---\n");
    for (i = 0; i < HOUSEHOLDS; i++) {
        printf("Household %d: %d units\n", i + 1, units[i]);
    }

    return 0;
}