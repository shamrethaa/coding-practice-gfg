int isPowerofTwo(int n) {
    // Check if n is less than or equal to zero
    if (n <= 0) {
        return 0;
    }
    // Check if there is only one set bit in the binary representation of n.
    return (n & (n - 1)) == 0;
}