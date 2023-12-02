#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int M, N;
	cin >> M >> N;
	
	int sol = 0;
	
	sol += (M / 2) * N;
	if(N % 2 != 0) sol += (N / 2);
	
	cout << sol << endl;
	
	return 0;
}	