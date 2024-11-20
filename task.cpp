#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // 0 and 1 are not prime
    if (num == 2) return true;   // 2 is a prime number
    if (num % 2 == 0) return false;  // Exclude even numbers greater than 2

    // Check divisibility from 3 to num / 2
    for (int i = 3; i <= num / 2; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to get prime numbers between n and m
void getPrimeNumbers(int n, int m) {
    for (int i = n; i <= m; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter two numbers (n and m): "<< endl;
    cin >> n >> m;

    // Ensure n is always less than m (manual check and swap)
    if (n > m) {
        int temp = n;  // Temporary variable to hold the value of n
        n = m;         // Assign m to n
        m = temp;      // Assign the original value of n to m
    }

    // Print all prime numbers between n and m
    getPrimeNumbers(n, m);

    return 0;
}
