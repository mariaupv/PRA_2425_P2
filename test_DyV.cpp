#include <iostream>
#include <vector>
#include "DyV.h"
using namespace std;

int main(){
	vector<short> a{2,4,6,10,12,16};

	int pos = BusquedaBinaria<short>(4,a,0,5);
	cout << "La posicion es: " << pos << endl;
	return 0;
}
