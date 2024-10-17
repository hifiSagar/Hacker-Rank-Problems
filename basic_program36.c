
// hackre rank problem (Function)

#include <stdio.h>

// Function to return the maximum of two integers
int max(int x, int y) {
    return (x > y) ? x : y;
}

// Function to return the maximum of four integers
int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    
    // Read four integers from input
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    // Call the function and print the result
    printf("%d\n", max_of_four(a, b, c, d));

    return 0;
}
