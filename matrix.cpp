#include<bits/stdc++.h>
using namespace std;
void nhap(int a,int b, int arr[][5]){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>arr[i][j];
		}
	}
}
void in(int a , int b, int arr[][5]){
	for(int i =0 ;i<a ;i++){
		for(int j=0;j<b;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[5][5];
	nhap(n,m,arr);
	in(n,m,arr);
	//yeu cau tinh tong 1 hang hoac 1 cot
	for(int i = 0 ; i<m ; i++){
		int tong =0;
		for(int j = 0 ; j<n ;j++){
			tong += arr[j][i];
			
			
		}
		cout<<"tong cua cot thu "<<i+1<<" la : "<<tong<<endl;
	}
	return 0;
	
}
