#ifndef DYV_H
#define DYV_H


#include <iostream>
#include <vector>
using namespace std;

//Búsqueda binaria
template <typename T1>
int BusquedaBinaria(T1 x, const vector<T1>& v, int ini, int fin){
	if(ini > fin){
		cout << "No se encuentra el array" << endl;
		return -1;

	} 
	int medio = (ini + fin) / 2;
	if(v[medio] == x){
		return medio;
	}else if(v[medio] > x){
		return BusquedaBinaria(x,v,ini,medio-1);
	}else{
		return BusquedaBinaria(x,v,medio+1,fin);
	}

}
//QuickSort

template <typename T2>
int PartitionFIN( vector<T2>& v, int ini, int fin){
	T2 x = v[fin];
	int i = ini;
	for (int j = ini; j <= fin -1; j++){
		if(v[j] <= x){
			swap(v[i], v[j]);
			i++;
		}
		
	}
	swap (v[i], v[fin]);
	return i;
}
template <typename T2>
void QuickSortFIN( vector<T2>& v, int ini, int fin){
	if (ini < fin){
		int pivot = PartitionFIN(v, ini, fin);
		QuickSortFIN(v, ini, pivot -1);
		QuickSortFIN(v, pivot + 1, fin);
	}
}


template <typename T3>
int PartitionINI( vector<T3>& v, int ini, int fin){
	T3 x = v[ini];
	int i = fin;
	for (int j = fin; j > ini; j--){
		if(v[j] >= x){
			swap(v[i], v[j]);
			i--;
		}
		
	}
	swap (v[i], v[ini]);
	return i;
}
template <typename T3>
void QuickSortINI( vector<T3>& v, int ini, int fin){
	if (ini < fin){
		int pivot = PartitionINI(v, ini, fin);
		QuickSortINI(v, ini, pivot -1);
		QuickSortINI(v, pivot + 1, fin);
	}
}



template <typename T4>
int PartitionMED( vector<T4>& v, int ini, int fin){
	int medio = (ini + fin) /2;
	T4 x = v[medio];
	swap(v[medio], v[fin]);
	int i = ini;
	for (int j = ini; j < fin; j++){
		if(v[j] <= x){
			swap(v[i], v[j]);
			i++;
		}
		
	}
	swap (v[i], v[fin]);
	return i;
}
template <typename T4>
void QuickSortMED( vector<T4>& v, int ini, int fin){
	if (ini < fin){
		int pivot = PartitionMED(v, ini, fin);
		QuickSortMED(v, ini, pivot -1);
		QuickSortMED(v, pivot + 1, fin);
	}
}


template <typename T5>
int PartitionRAND( vector<T5>& v, int ini, int fin){
	int random = ini + rand() % (fin - ini + 1);
	T5 x = v[random];
	swap(v[random], v[fin]);
	int i = ini;
	for (int j = ini; j < fin; j++){
		if(v[j] <= x){
			swap(v[i], v[j]);
			i++;
		}
	}
	swap (v[i], v[fin]);
	return i;
}
template <typename T4>
void QuickSortRAND( vector<T4>& v, int ini, int fin){
	if (ini < fin){
		int pivot = PartitionRAND(v, ini, fin);
		QuickSortRAND(v, ini, pivot -1);
		QuickSortRAND(v, pivot + 1, fin);
	}
}



#endif
