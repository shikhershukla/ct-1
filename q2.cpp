// Name :- Shikher Shukla
// Roll Number :- 2010990659
// Set Number :- 4
// Question Number :- 2

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Time Complexity :- O(n)
// Space Complexity :- O(1)

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
    // function in stl to sort the array
    sort(arr.begin(), arr.end());
    int flag = INT_MAX, sec; // flag stores if we find non-consecutive elements sec stores the next number from flag as we need to display it when we find non-consecutive non-repeating numbers
    bool repeated = false; // stores if we find a repeating number
    for (int i = 0; i < n - 1; i++) 
        if (arr[i] != arr[i + 1] - 1) {
            flag = arr[i];
            sec = arr[i + 1];
            if (arr[i] == arr[i + 1]) 
                repeated = true;
            break;
        }
    if (n == 1) 
        cout << "The array contais only " << arr[0];
    else if (flag == INT_MAX) 
        cout << "The array contais consecutive integers from " << arr[0] << " to " << arr[n - 1];
    else if (repeated) 
        cout << "The array does not contain consecutive integers as element " << flag << " is repeated";
    else 
        cout << "The array is not formed only by consecutive integers as " << flag << " and " << sec << " are not consecutive";
    return 0;
}

// Sample Input's

// 5
// 0 3 4 1 2
// output -> The array contais consecutive integers from 0 to 4

// 5 
// 1 3 4 2 1 
// output -> The array does not contain consecutive integers as element 1 is repeated

// 3
// 1 3 4  
// output -> The array is not formed only by consecutive integers as 1 and 3 are not consecutive