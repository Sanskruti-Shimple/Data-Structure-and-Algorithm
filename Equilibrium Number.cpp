//Equilibrium Number: - Sum of left elements is equal to the sum of right elements
#include<iostream>
using namespace std;

int main(){
    int i;
    int testcase;
    cin >> testcase;
    while(testcase--){
        long int n;
        cin >> n;
        long int arr[1000000];
        long int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        int leftsum = 0;
        int flag = -1;
        for(i=0; i<n; i++){
            sum = sum - arr[i];
            if (leftsum == sum){
                flag = i;
                break;
            }
            leftsum +=arr[i];
        }
        if(flag!=-1) cout << arr[flag] << endl;
        else cout << "NO EQUILIBRIUM" << endl;
    }
    return 0;
}
