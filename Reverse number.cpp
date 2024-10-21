#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Input a number: ";
	cin >> n;
		while (n > 0){
			int temp = n % 10;
		n = n / 10;
		cout << temp;
	}
	return 0;
}
