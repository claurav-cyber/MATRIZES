#include<iostream>
using namespace std;
int main(){
	
	int n,m, A[100][100];
	cout<< "ingrese el numero de filas de la matriz:";
	cin>>n;
		cout<< "ingrese el numero de columnas de la matriz:";
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"ingrese el dato"<<i+1<<":"<<j+1<<"=";
			cin>>A[i][j];
		}
	}	
	cout<<"_____-LA MATRIZ_A(transpuesta)______"<<endl;
	
 for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << A[i][j];
            if (i != n - 1)
                cout << " ";
        }
cout<<endl;
}
	
	
	return 0;
}
