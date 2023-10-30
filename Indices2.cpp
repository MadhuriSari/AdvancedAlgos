#include<iostream>
#include<array>
using namespace std;


void enterelements(int size, int arrayofnumbers[]){
	for (int i=0; i<size; i++){
		cin>>arrayofnumbers[i];
	}
}

void findmatch(int target, int arrayofnumbers[],int size){
	for (int j=0;j<(size-1);j++){
		for (int k=(j+1);k<size;k++){
			if((arrayofnumbers[j]+arrayofnumbers[k])==target){
				cout<<j;
				cout<<k;
			}
		}
	}

}

int main(){
	int size;
	int arrayofnumbers[100];
	int target;
	cout<<"Enter the size of array";
	cin>>size;
	cout<<"Enter the elements in array";
	enterelements(size,arrayofnumbers);
	cout<<"Enter the target";
	cin>>target;
	findmatch(target,arrayofnumbers,size);
	
}

