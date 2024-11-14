#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>
using namespace std;

int main(){

	//Búsqueda binaria
	cout << "Búsqueda binaria" << endl;
	vector<int> a{2,4,6,10,12,16};
	int posA = BusquedaBinaria(2,a,0,a.size()-1);
	cout << "La posicion en un array de int es: " << posA << endl;

	vector<double> b{1.2, 2.3, 5.5, 6.2, 54.2};
	int posB = BusquedaBinaria(5.5, b, 0, b.size()-1);
	cout << "La posicion en un array de double es: " << posB << endl;

	vector<char> c{'a', 'c', 'm', 'p', 'y'};
	int posC = BusquedaBinaria('p', c, 0, c.size()-1);
	cout << "La posicion en un array de char es: " << posC << endl;

	cout << endl;
	
	//QuickSort
	cout << "QuickSort" << endl;
	vector<int> d{4,1,8,6,3,7};

	auto start = chrono::system_clock::now();
	QuickSortFIN(d, 0, d.size()-1);
	cout << "Vector ordenado con QuickSort (pivote fin): ";
	for(int i = 0; i < d.size(); i++){
		cout << d[i] << " ";
	}
	cout << endl;
	auto end = chrono::system_clock::now();
	chrono::duration<float, milli> duration = end - start;
	cout << "Time: " << duration.count() << "s" << endl;



	auto start2 = chrono::system_clock::now();
	QuickSortINI(d, 0, d.size()-1);
	cout << "Vector ordenado con QuickSort (pivote ini): ";
	for(int i = 0; i < d.size(); i++){
		cout << d[i] << " ";
	}
	cout << endl;
	auto end2 = chrono::system_clock::now();
	chrono::duration<float, milli> duration2 = end2 - start2;
	cout << "Time: " << duration2.count() << "s" << endl;


	auto start3 = chrono::system_clock::now();
	QuickSortMED(d, 0, d.size()-1);
	cout << "Vector ordenado con QuickSort (pivote medio): ";
	for(int i = 0; i < d.size(); i++){
		cout << d[i] << " ";
	}
	cout << endl;
	auto end3 = chrono::system_clock::now();
	chrono::duration<float, milli> duration3 = end3 - start3;
	cout << "Time: " << duration3.count() << "s" << endl;


	auto start4 = chrono::system_clock::now();
	QuickSortRAND(d, 0, d.size()-1);
	cout << "Vector ordenado con QuickSort (pivote aleatorio): ";
	for(int i = 0; i < d.size(); i++){
		cout << d[i] << " ";
	}
	cout << endl;
	auto end4 = chrono::system_clock::now();
	chrono::duration<float, milli> duration4 = end4 - start4;
	cout << "Time: " << duration4.count() << "s" << endl;

	return 0;
}
