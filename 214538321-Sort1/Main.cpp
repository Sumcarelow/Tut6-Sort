#include<iostream>
#include "Sort.h"
using namespace std;


template<class Sam>
Sam Sort(Sam Arr, int a){
	int i;
	Sam temp;
	for (i = 0; i <= (a - 1); i++){
		if (Arr[i] > Arr[i + 1]){
			temp = Arr[i];
			Arr[i] = Arr[i + 1];
			Arr[i + 1] = temp;
		}
	}
	return Arr;
};

int main(){
	int Array[] = { 1, 2, 3 };

	cout << Sort(Array, 3);
	return 0;
}

