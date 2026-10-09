#include <stdio.h>
#include <limits.h>

// Problem 1
// Read n and print all even numbers from 1 to n.
//Input: 10 Output: 2 4 6 8 10

// Problem 2
// Read n and print numbers from n down to 1.
// Input: 5 Output: 5 4 3 2 1

// Problem 3
// The first input is n. Then read n integers and calculate their average.

// Problem 4
// Read n integers and find the largest one.

// Problem 5
// Read integers until the user enters 0. Calculate their sum.

// Problem 6
// Read an integer. Keep asking until the user enters a positive number.
// which one: do while || while

// Problem 7
// Read 10 integers and print only the even ones.

// Problem 8
// Read 10 integers.
// - Ignore negative numbers.
// - Print positive numbers.
// - Don't print zero.

// Problem 9
// Read n and print:
// ***** (n times)
// **** (n - 1)
// ***
// **
// *

// Problem 10
// Number triangle

// Problem 11
// Read a positive integer and determine how many digits it contains.

// Problem 12
// Read an integer and calculate the sum of its digits.

// Problem 13
// Read an integer and find its largest digit.

// Problem 14
// Read an integer and print its reverse.

// Problem 15
// Determine whether a number is a palindrome.

// Problem 16
// Read an integer and a digit d. Count how many times d appears in the number.

// Problem 17
// Read an integer and count how many of its digits are even.

int main() {
    // Problem 1, 2 possible solutions. Ask which is better
    int n;
    scanf("%d", &n);

    // Solution 1
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    // Solution 2
    for (int i = 2; i <= n; i++) {
        if(i % 2 == 1) continue;
        printf("%d ", i);
    }

    // Problem 2, ask what would happen if we did: i++ instead of i--
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    // Problem 3
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);    

        sum += x;
    }

    float avg = (float) sum / n; // Why did we convert `sum` into float before dividing?

    printf("%d\n", sum);

    // Problem 4
    int n, x;
    scanf("%d", &n);

    int max = INT_MIN; // What is the issue with assigning 0 to max instead of INT_MIN?

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x > max) {
            max = x;
        }
    }

    printf("%d\n", max);

    // Problem 5
    int x;
    int sum = 0;

    scanf("%d", &x);

    while (x != 0) {
        sum += x;

        scanf("%d", &x);
    }

    printf("%d\n", sum);
    
    // Why is for less natural here?
    // Wouldn't do...while be more convenient?
    // Yes it would
    
    int x;
    int sum = 0;

    do{
        scanf("%d\n", &x);
        
        sum += x;
    } while(x != 0);
    
    printf("%d\n", sum);

    // Problem 6
    int x;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &x);
    } while (x <= 0);

    printf("You entered %d\n", x);

    // Problem 7

    for (int i = 0; i < 10; i++) {
        int x;
        scanf("%d", &x);

        if (x % 2 != 0) {
            continue;
        }

        printf("%d ", x);
    }

    // Problem 8
    for (int i = 0; i < 10; i++) {
        int x;
        scanf("%d", &x);

        if (x <= 0) {
            continue;
        }

        printf("%d ", x);
    }

    // Problem 9
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Problem 10
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    // Problem 11
    int n;
    scanf("%d", &n);

    int count = 0;

    while (n > 0) {
        count++;
        n /= 10;
    }

    printf("%d\n", count);
    
    // Problem 12
    int n;
    scanf("%d", &n);

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;

        sum += digit;

        n /= 10;
    }

    printf("%d\n", sum);

    // Problem 13
    int n;
    scanf("%d", &n);

    int max = 0; // Why do you think it is not necessary to use INT_MIN here?

    while (n > 0) {
        int digit = n % 10;

        if (digit > max) {
            max = digit;
        }

        n /= 10;
    }

    printf("%d\n", max);


    // Problem 14
    int n;
    scanf("%d", &n);

    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;

        reversed = reversed * 10 + digit;

        n /= 10;
    }

    printf("%d\n", reversed);

    // Problem 15
    int n;
    scanf("%d", &n);

    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;

        reversed = reversed * 10 + digit;

        n /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    // Problem 16
    int n, d;
    scanf("%d %d", &n, &d);

    int count = 0;

    while (n > 0) {

        int digit = n % 10;

        if (digit == d) {
            count++;
        }

        n /= 10;
    }

    printf("%d\n", count);

    // Problem 17
    int n;
    scanf("%d", &n);

    int count = 0;

    while (n > 0) {

        int digit = n % 10;

        if (digit % 2 == 0) {
            count++;
        }

        n /= 10;
    }

    printf("%d\n", count);

    
    return 0;
}

