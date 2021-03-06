class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int answer = 0;
        
        for (int i = 30; i >= 0; i--) {
            if ((m & (1 << i)) == (n & (1 << i)))
                answer |= m & (1 << i);
            else
                break;
        }
        
        return answer;
    }
};
