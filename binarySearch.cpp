#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int n , number;
    cin >> n ;
    int arr[n+1];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    sort(arr,arr+n);
 
    int q ;
    cin >> q ;
    for(int i = 0 ; i < q ; i++){
        cin >> number;
        int st = 0  , ind = n - 1 , mid ;
        bool found = 0;
        while(st <= ind){
            mid = (st + ind) /2;
            if(arr[mid] == number){
                cout << "found" << endl;
                found = 1 ;
                break;
            }
            else if(arr[mid] < number){
                st = mid + 1;
            }
            else
                ind = mid -1;
        }
        if(!found)
            cout << "not found" << endl;
    }
    return 0;
}