#include <iostream>
using std::cout;
namespace newfunction{
void Inverting(bool* array,unsigned length){
    
	for (int i = 0; i < length; i++){
        array[i] = array[i] ^ 1;
        cout << array[i];
        }
    std::cout << "\n";
}
}