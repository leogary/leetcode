class Solution {
   public:
    bool isValid(string s) {
        stack<char> ss;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')') {
                if (ss.empty()) {
                    return false;
                } else {
                    if (ss.top() != '(') {
                        return false;
                    }
                    ss.pop();
                }
            } else if (s[i] == '}') {
                if (ss.empty()) {
                    return false;
                } else {
                    if (ss.top() != '{') {
                        return false;
                    }
                    ss.pop();
                }
            } else if (s[i] == ']') {
                if (ss.empty()) {
                    return false;
                } else {
                    if (ss.top() != '[') {
                        return false;
                    }
                    ss.pop();
                }
            } else {
                ss.push(s[i]);
            }
        }
        if (ss.empty())
            return true;
        return false;
    }
};