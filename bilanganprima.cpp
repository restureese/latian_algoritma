#include <iostream>

using namespace std;

int main(){
	int prima;

	for(int i = 1; i <= 100; i++){
		prima = 0;
		for (int x = 1; x <= i; x++)
		{
			//menentukan bilangan prima
			// i = 2
			// jika 2 % 1 = 0; prima = 1
			// jika 2 % 2 = 0; prima = 2
			// i = 3
			// jika 3 % 1 = 0; prima = 1
			// jika 3 % 2 = 0; prima = 0
			// jika 3 % 3 = 0; prima = 2   
			if(i % x == 0){
				prima += 1;
			}
		}
		if(prima == 2)
			cout<<i<<" ";
	}
	return 0;
}

