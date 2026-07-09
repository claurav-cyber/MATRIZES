#include<iostream>
using namespace std;
int main(){
	
	int n,max,mx, A[100][100];
	max=0;
	mx=0;
	cout<< "ingrese el numero de orden de la matriz:";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"ingrese el dato"<<i+1<<":"<<j+1<<"=";
			cin>>A[i][j];
		}
	}	
	cout<<"_____-LA MATRIZ_______"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j];
			if (j<n-1){
				cout<<" ";
			}
}
cout<<endl;
}
	cout<<"___________-LA MATRIZ: su valor maximo es:_________"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (A[max][mx]<A[i][j]){
				max=i;
				mx=j;
			}
		}
	}
cout<<"el mayor elemento de esta matriz es:"<<A[max][mx]<<"en la posicion:"<<max+1<<"-"<<mx+1;
	return 0;
}
