// Name :- Shikher Shukla
// Roll Number :- 2010990659
// Set Number :- 4
// Question Number :- 1

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Time Complexity :- O(n)
// Space Complexity :- O(n)

int main() {
    // taking input
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }
    unordered_map<int, int> mp; // arr[i] -> i
    vector<int> index; // has the minimum index of each repeating element
    int mn = INT_MAX; // to calculate the minimum index out of all repeating elements
    for (int i = 0; i < n; i++) {
        // if we find that we've already seen the element previouslly then we push it's previous index
        // stored in map to index and calculate minumum index
        // if we have'nt seen the element previouslly then we just put that element's index in map
        if (mp.find(arr[i]) != mp.end()) { 
            index.push_back(mp[arr[i]]);
            mn = min(mn, mp[arr[i]]);
        } else 
            mp[arr[i]] = i;
    }
    // if no element repeates then input is invalid else we just print the minimum index we've calculated
    if (index.size() == 0) 
        cout << "Invalid Input";
    else 
        cout << mn;
    return 0;
}

// Sample Input's

// 7
// 5 6 3 4 3 6 4
// output -> 1

// 6 
// 1 2 3 4 5 6 
// output -> Input