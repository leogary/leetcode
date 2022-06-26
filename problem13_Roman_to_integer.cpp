class Solution {
   public:
    int romanToInt(string s) {
        map<char, int> hashmap;
        int sum = 0;
        hashmap['I'] = 1;
        hashmap['V'] = 5;
        hashmap['X'] = 10;
        hashmap['L'] = 50;
        hashmap['C'] = 100;
        hashmap['D'] = 500;
        hashmap['M'] = 1000;
        sum += hashmap[s[0]];
        for (int i = 1; i < s.length(); i++) {
            if (hashmap[s[i]] > hashmap[s[i - 1]]) {
                sum = sum - (2 * hashmap[s[i - 1]]) + hashmap[s[i]];
            } else {
                sum += hashmap[s[i]];
            }
        }
        return sum;
    }
};