# Longest Substring Without Repeating Characters

An optimal solution for LeetCode problem (Medium difficulty) implemented in **C++**.

## Problem Description
Given a string `s`, find the length of the longest substring without repeating characters.

## Approach & Complexity
- **Algorithm:** Sliding Window with a hash map / tracking array.
- **Time Complexity:** O(N), where N is the length of the string, as the pointers traverse the string linearly.
- **Space Complexity:** O(min(N, M)), where M is the size of the character set.

## Code File
- `extended version.cpp` — clean implementation with performance considerations.
