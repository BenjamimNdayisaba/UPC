#include <stdio.h>
#include <string.h>

int calculateCheckDigit(char upc[12]) {
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < 11; i++) {
        int digit = upc[i] - '0';
        if (i % 2 == 0) {
            sumOdd += digit;
        } else {
            sumEven += digit;
        }
    }

    int total = (3 * sumOdd) + sumEven;
    int checkDigit = 10 - (total % 10);

    if (checkDigit == 10) {
        return 0;
    } else {
        return checkDigit;
    }
}

int main() {
    char upc[13];
    printf("Enter the first 11 digits of the UPC: ");
    scanf("%12s", upc);

    if (strlen(upc) != 11) {
        printf("Error: UPC should have 11 digits.\n");
        return 1;
    }

    for (int i = 0; i < 11; i++) {
        if (upc[i] < '0' || upc[i] > '9') {
            printf("Error: Invalid character in UPC.\n");
            return 1;
        }
    }

    int checkDigit = calculateCheckDigit(upc);
    printf("The check digit is: %d\n", checkDigit);

    return 0;
}
