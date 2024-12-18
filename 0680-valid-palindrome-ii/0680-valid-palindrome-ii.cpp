class Solution {
public:
    bool validPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if(s[left] == s[right]){
                left++;
                right--;
            }else{
                return isPalindrome(s,left+1,right) || isPalindrome(s,left,right-1);
            }
        }
        return true;
    }

     bool isPalindrome(string s, int left, int right){
        while(left<right){
            if(s[left] == s[right]){
                left++;
                right--;
            }else return false;
        }return true;
    }
};