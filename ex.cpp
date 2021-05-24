#include <iostream>
using namespace std;

int days(int persons, int P){
    return (persons/P) + (persons%P != 0);
}

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int G, P, X[10];
	    cin>>G>>P;
	    for(int i=0; i<10; i++){
	        cin>>X[i];
	    }
	    int persons=0;
	    for(int i=G; i<10;i++){
	        persons += X[i];
	    }
	    int minD = days(persons+1, P);
	    int maxD = days(persons+X[G-1], P);
	    cout<<minD<<" "<<maxD<<endl;
	}
	return 0;
}
