#include<iostream>
using namespace std;
int main(){
	
	int n,sum,A[100][100];
	sum=0;
	cout<< "ingrese el numero de orden  de la matriz:";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"ingrese el dato"<<i+1<<":"<<j+1<<"=";
			cin>>A[i][j];
			sum=sum+A[i][j];
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
cout<<" la suma de la matriz es :"<<sum;
	
	
	return 0;
}
