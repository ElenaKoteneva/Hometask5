namespace newfunction{
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
}