#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm> // for max() function

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int maxLength = 0;
        int left = 0;

        for(int right=0; right<s.length(); right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            maxLength = max(maxLength, right - left + 1);

        }
        return maxLength;
    }   
};
