class Solution {
public:
    bool isPalindrome(int x) {
        long long l, rev = 0;
        int n=x;
        if(x < 0)  return false;
            while (n > 0 )
            {
                l = n % 10;
                rev = rev * 10 + l;
                n = n / 10;
            }
        return (rev == x) ;
    }
};