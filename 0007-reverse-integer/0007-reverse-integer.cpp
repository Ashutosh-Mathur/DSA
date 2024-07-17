class Solution {
public:
    int reverse(int x) {
        int digit;
        int rev=0;
         bool n = false;

        if(x <= INT_MIN)  return 0; 
        
        if(x < 0)
        {
            n = true;
             x = -x;
        }
        while(x > 0)
        {
            if(rev > INT_MAX / 10)  return 0;
        
            digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        return n  ? -rev : rev;
    }
};