#include <stdio.h>

// Function to find the median of a sorted array
double findMedian(int arr[], int n) {
    if (n % 2 != 0) {
        // If number of elements is odd, return the middle element
        return (double)arr[n / 2];
    } else {
        // If even, return average of the two middle elements
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double median = findMedian(arr, n);

    printf("Median = %.2f\n", median);

    return 0;
}
