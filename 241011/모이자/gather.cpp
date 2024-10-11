#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore(); 
    
    int* arr = new int[n];

    string line;
    getline(cin, line);

    istringstream iss(line);
    for(int i=0; i<n;i++)
    {
        iss >> arr[i];
    }

    int min_dist = INT_MAX;

    for(int i=0; i<n; i++)
    {
        int dist = 0;
        for(int j=0; j<n; j++)
            dist+=(abs(i-j)*arr[j]);

        min_dist = min(min_dist, dist);
    }

    cout << min_dist;

    return 0;
}