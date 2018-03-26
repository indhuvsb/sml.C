#include <stdio.h>
using namespace std;
 
const int MAX = 1000;
 
int findDuplicate(int arr[], int n, int k)
{
      int res = MAX + 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
 
                int count = 1;
            for (int j = i + 1; j < n; j++)
                if (arr[i] == arr[j])
                    count += 1;
             if (count == k)
                res = min(res, arr[i]);
        }
    }
    return res;
}
 
int main()
{
    int arr[] = { 2, 2, 1, 3, 1 };
    int k = 2;
    int n = sizeof(arr) / (sizeof(arr[0]));
    cout << findDuplicate(arr, n, k);
    return 0;
}
