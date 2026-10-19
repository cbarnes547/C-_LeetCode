class Solution {
public:
    static const long long modulo = 1000000007;
    long long power(long long base, long long exp) {
        long long result = 1;
        base %= modulo;
        while (exp > 0) {
            if (exp & 1) result = result * base % modulo;
            base = base * base % modulo;
            exp >>= 1;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenCount = (n + 1) / 2;
        long long oddCount = n / 2;
        return power(5, evenCount) * power(4, oddCount) % modulo;
    }
};