#include <bits/stdc++.h>
using namespace std;

// Function to print a right-angled triangle with repeated numbers
void print3(int n) {
    // Outer loop controls the number of rows (1 to n)
    for (int i = 1; i <= n; i++) {
        // Inner loop prints the row number (i) multiple times
        // Number of times printed = row number
        for (int j = 1; j <= n-i+1; j++) {
            cout << j;   // Print the current row number
        }
        cout << endl;    // Move to the next line after finishing a row
    }
}

int main() {
    int n;
    cin >> n;    // Input: number of rows for the pattern
    print3(n);   // Function call to print the pattern
    return 0;
}
