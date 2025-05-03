#include <iostream>
#include <vector>
using namespace std;

int Fibbonaci(int n){
	if (n <= 1) return 1;
	else return Fibbonaci(n - 1) + Fibbonaci(n-2);
}

vector<int> myList(int n){
	vector<int> res;
	for (long long i = 1; i <= n; i++){
		res.push_back(Fibbonaci(i));
	}
	return res;
}

void printList(vector<int> list){
	for (int i = 0; i < list.size(); i++){
		cout << list[i] << " ";
	}
}

long long sumEven(){
	long long res = 0;
	long long f = 1; 
	long long a = 1;
	while (f < 4000000){
		if (f % 2 == 0){
			res += f;
		}
		long long temp = f;
		f = a + f;
		a = temp;
	}
	
	return res;
}

void fibbonaci(long long n){
	long long f1 = 1; 
	long long f2 = 1;
	long long i = 0;

	while (i < n){
		if (f1 >= 4000000)return;
		if (f1 % 2 == 0) {
			cout << f1 << " ";
		}
		long long temp = f1;
		f1 = f1 + f2;
		f2 = temp;
		i++;
	}
}

int main(){
	
	fibbonaci(1000);
	return 0;
}
