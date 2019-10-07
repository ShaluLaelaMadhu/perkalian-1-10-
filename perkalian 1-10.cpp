#include <iostream>
using namespace std;

int main(){
	
	int i,n,batas=10,jumlah;
	
	menu:
  cout<<"Perkalian 1 - 10\n\n";
  cout<<"Shalu Laela Madhu \n";
  cout<<"PRODI : D4 Manajemen Informatika\n";
	cout<<"\n\n";
	cout<<"masukkan agka yang ingin dikalikan\n";
	cin>>n;
	cout<<"maka....\n\n";
	
	for(i=1;i<=batas;i++){
		jumlah=i*n;
		cout<<i<< " x " <<n<<" = "<<jumlah<<endl;
	}
	return 0;
	
}
