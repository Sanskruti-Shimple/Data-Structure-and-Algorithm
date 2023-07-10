#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int arr[] = {2, 4, -8, 9, 10, -2, 4, -20, 10};
    int n = 9;
    
    int max_sum = arr[0];
    int curr_sum = arr[0];
    
    for(int i=1; i<n; i++){
        //curr_sum + arr[i] is negative 
        if(curr_sum + arr[i] < 0){
            curr_sum = 0;
        } 
        else{
            curr_sum = curr_sum + arr[i];
            //Also update max_sum
            if(max_sum < curr_sum){
                max_sum = curr_sum;
            }
    }
}
cout << "Sanskruti Shimple" << "\nVIT, Pune" << endl;
cout << "Output: - " << max_sum;
}
            
