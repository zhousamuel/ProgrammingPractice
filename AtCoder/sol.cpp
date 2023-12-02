#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int fives = 0;
	int seven = 0;
	
	for(int i = 0; i < 3; i++){
		int a; cin >> a;
		
		if(a != 5 && a != 7){
			cout << "NO\n";
			return 0;
		}
		
		if(a == 5) fives++;
		if(a == 7) seven++;
	}
	
	if(fives==2&&seven==1) cout << "YES\n";
	else cout << "NO\n";
	
	return 0;
}