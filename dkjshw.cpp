#include <iostream>
using namespace std;
int main() {
	int num;
	string h;
	cin>>h;
	num=h.length();
	int c=0,c1=0;
//	for(int i=0;i<num;i++) {
//		if(h[i]!='z' && h[i]!='o') cout<<"No";
//	}
	for(int i=0;i<num;i++){
		if('z'==h[i] ) c++;
		if('o'==h[i]) c1++;
	}
	if(2*c==c1) cout<<"Yes";
	else cout<<"No";	// Writing output to STDOUT
}
