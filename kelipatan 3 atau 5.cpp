#include <iostream>

using namespace std;

int main(){

	int jumlah = 0;

	for(int i = 1; i < 1000;i++){
		//menentukan kelipatan
		if(i % 3 == 0 || i % 5 == 0)
			jumlah += i;
	}

	cout<<"jumlah kelipatan 3 atau 5 dibawah 1000 adalah "<<jumlah<<endl;

	return 0;
}