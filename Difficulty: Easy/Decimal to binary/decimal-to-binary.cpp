class Solution {
public:
    string decToBinary(int n) {
        if (n == 0)
            return "0";
        if (n == 1)
            return "1";

        return decToBinary(n / 2) + char((n % 2) + '0');
    }
};