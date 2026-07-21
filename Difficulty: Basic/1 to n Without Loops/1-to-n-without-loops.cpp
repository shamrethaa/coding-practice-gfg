class Solution {
public:
    void printTillN(int n) {
        // Base case
        if (n == 0)
            return;

        // Print smaller numbers first
        printTillN(n - 1);

        // Then print current number
        cout << n << " ";
    }
};