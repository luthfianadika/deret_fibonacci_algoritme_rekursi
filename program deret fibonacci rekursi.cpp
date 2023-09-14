#include <cstdlib>
#include <iostream>
using namespace std;
int Fibonacci (int n) {
	if (( n ==0) || (n==1)) {
		return (n) ;
	}
	if (n >= 3){
		return (Fibonacci(n-1) + Fibonacci (n-2));
	}
}
int main () {
	int n, i=0;
	cout << "Masukan jumlah deret Fibonacci: ";
	cin >> n;
	cout << "Deret Fibonacci untuk n= " << n << " adalah ";
	while (i<n){
		cout << " " << Fibonacci (i) << ",";
		i++;
	}
	system ("PAUSE");
	return 0;
}
