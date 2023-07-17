#include<iostream>
using namespace std;

int Sqrt(int n){
    //trivial cases
    if(n==0 || n==1) return n;
    
    //Binary Search 
    int start = 1, end = n, ans;
    while(start<=end){
    
        // Middle Value 
        int mid = (start + end)/2;
        
        // Checking Perfect Square or not
        if(mid*mid == n) return mid;
        else if (mid*mid>n) end=mid-1;
        else{
            start = mid+1;
            ans = mid;
        }
    }
    return ans;
}
int main(){
    int testcases;
    cin >> testcases;
    while (testcases--){
        int n;
        cin >> n;
        cout << Sqrt(n) << endl;
    }
    return 0;
}