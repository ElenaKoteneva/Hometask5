#include <iostream>
using std::cout;

namespace newfunction{
extern const void Displacement(unsigned* array,unsigned length, int n){
	
	if (n < 0){
		n = -1 * n;
		for (int i = n; i < length;i++){
				cout << array[i] << " ";	
			}
			for (int j = 0; j < n;j++){
				cout << array[j] << " ";
			}
		}
	
	
	else if (n > 0){
		//n = -1 * n;
		for (int i = length - n; i < length;i++){
			cout << array[i] << " ";;
		}
		for (int j = 0;j < length -n; j++){
			cout << array[j] << " ";;
		}
	}
}	
}
