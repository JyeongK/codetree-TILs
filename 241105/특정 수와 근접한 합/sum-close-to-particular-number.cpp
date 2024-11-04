#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, S, sumA=0, thres;
    
    scanf("%d %d", &N, &S);

    char arr[N];

    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
        sumA += arr[i];
    }
    
    thres = sumA - S;
    int diff = 0;
    int min_value = 999;
    int result = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=i; j<N; j++)
        {
            int test_case = arr[i] + arr[j];
            diff = abs(test_case - thres);

            if(diff == 0)      
            {                
                printf("0");
                return 0;
            }
            else if (diff < min_value)
            {
                min_value = diff;
                result = thres - (arr[i] + arr[j]);
            }
        }
    }

    printf("%d", result);
    // delete[] arr;
    return 0;
}