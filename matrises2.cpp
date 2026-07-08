#include<iostream>
using namespace std;
int main(){
	
	int n, A[100][100];
	cout<< "ingrese el numero de orden de la matriz:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if (j>=i){
			A[i][j]=1;
		}
		else {
				A[i][j]=0;
		}
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
	
	
	return 0;
}
