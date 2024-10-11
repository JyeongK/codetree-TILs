// #include <iostream>
// #include <cstdlib>
// #include <algorithm>

// using namespace std;

// int n = 5;
// int arr[5] = {1, 2, 3, 2, 6};

// int main() {
//     int max_diff = -100;
//     for(int i=0;i<n;i++)
//     {
//         int diff = 0;

//         arr[i]*=2;

//         for(int j=0;j<n-1;j++)
//         {
//             diff += abs(arr[j+1]-arr[j]);
//         }

//         if (max_diff < diff)
//         {
//             max_diff = diff;
//         }
//         cout << diff << "\n";
//         arr[i]/=2; 
//     }

//     cout << max_diff;

//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n = 5;
int arr[5] = {1, 2, 3, 2, 6};

int main() {
    int max_sum = 0;
    for(int i = 0; i < n; i++) {
        arr[i] *= 2;
    
        int sum_diff = 0;
        for(int j = 0; j < n - 1; j++)
            sum_diff += abs(arr[j + 1] - arr[j]);
    
        max_sum = max(max_sum, sum_diff);
        arr[i] /= 2;
    }
    
    cout << max_sum;
    
    return 0;
}