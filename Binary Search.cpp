#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int target = 10;
	int arr[] = {2, 4, 7, 10, 11, 14, 19, 24, 59, 89};
	int n = 10;
	int l = 0; 
	int h = n-1;
	int index = 1;
	
	while(l<=h){
		//First we'll find index of mid-point
		//l = 0, h = 9
		//Compare arr[mid-point] with target
		//1.We have to find it
		//2.arr[mid-point] < target -> right part
		//l = mid + 1
		//3. arr[mid-point] < target
		     //h = mid - 1
		     
	int mid = (l+h)/2;
	if(arr[mid]<target){
		cout << "Found at index\n" << mid << endl;
		break;
	}
	else if (arr[mid] < target){
		l = mid + 1;
	}
	else{
		h = mid - 1;
	}
}
cout << "Index\n" << index;

return 0;
}