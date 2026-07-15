class Solution {
public:
    string clean_str(string m) {
        string k;
        for (auto c : m) {
            if (isalnum(c))
                k += (char)tolower(c);
        }
        return k;
    }
    bool isPalindrome(string s) {
        string k = clean_str(s);
        int left = 0, right = k.length() - 1;
        while (left < right) {
            if (k[left] != k[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};