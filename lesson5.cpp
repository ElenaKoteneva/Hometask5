//Koteneva Elena
#include <iostream>

using std::cin;
using std::cout;

namespace newfunction{
	bool CheckBalance(int* array, unsigned length, unsigned n);
	void Inverting(bool* array,unsigned length);
	void Displacement(unsigned* array,unsigned length, int n);
}


int main(){
	
	bool (*fx1)(int* array, unsigned length, unsigned n) = newfunction::CheckBalance;
	void (*fx2)(bool* array,unsigned length) = newfunction::Inverting;	
	void (*fx3)(unsigned* array,unsigned length, int n) = newfunction::Displacement;
	
    
    // Task 1

    bool array[8] = {0,1,1,0,0,1,0,1};

    cout << "Task 1\n";
	cout << "Was array:\n";
	for (int i = 0; i < 8; i++){
        cout << array[i];
	}
	cout << "\nNew array:\n";
	for (int i = 0; i < 8; i++){
        array[i] = array[i] ^ 1;
        cout << array[i];
        }
    cout << "\n";
    
	// Task 2

    unsigned massiv[8];

	cout << "Task 2\n";
    for (int i = 1; i < 23; i=i+3){
        massiv[i] = i;
        cout << massiv[i] << " ";
        } 
    cout << "\n";

    // Task 3
	
	int ar[] = {1,2,1,3,1};
	
	cout << "Task 3\n";
	cout << "Was array:\n";
	for (int i = 0; i < 5; i++){
        cout << ar[i];
	}
    if ((*fx1)(ar,5,1)) cout << " true\n";
	else cout << " false\n";

    // Task 4
	
	
	cout << "Task 4\n";
    unsigned mas[] = {1,2,3,4,5,6,7,8};    
    cout << "Was array:\n";
	for (int i = 0; i < 8; i++){
        cout << mas[i] << " ";
	}
	cout << "\nNew array:\n";
	(*fx3)(mas,8,-2);
	cout << "\n";

	
    // Task 5
	
	struct Din_array{
			unsigned n;
			bool array[];
	}din_array;
	
	cout << "Task 5\n";
	cout << "Enter array length: ";
	cin >> din_array.n;
	cout << "Enter bool array:\n";
	for (int i = 0; i < din_array.n;i++){
		cin >> din_array.array[i];
	}
	(*fx2)(din_array.array,din_array.n);

return 0;
}
/*
//-----------------------------------------------------------
bool CheckBalance(int* array, unsigned length, unsigned n){
    
	int sum1, sum2;

	for (int i = 0; i < length - 1; i++) {
		sum1 = 0;
		sum2 = 0;

		for (int j = 0; j <= i; j++) {
			sum1 += array[j];
		}

		for (int k = i + 1; k < length; k++) {
			sum2 += array[k];
		}

		if (sum1 == sum2) return true;
	}
	return false;
}

//-----------------------------------------------------------
void Inverting(bool* array,unsigned length){
    using std::cout;
	for (int i = 0; i < length; i++){
        array[i] = array[i] ^ 1;
        cout << array[i];
        }
    cout << "\n";
}
//-----------------------------------------------------------
void Displacement(unsigned* array,unsigned length, int n){
	using std::cout;
	

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
*/