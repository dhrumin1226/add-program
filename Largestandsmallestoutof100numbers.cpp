#include <stdio.h>
int main() {
    int n = 100, num, largest, smallest;
    printf("Enter 100 numbers:\n");
    scanf("%d", &num);
    largest = smallest = num;

    for (int i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num > largest) largest = num;
        if (num < smallest) smallest = num;
    }
    printf("Largest = %d, Smallest = %d\n", largest, smallest);
    return 0;
}