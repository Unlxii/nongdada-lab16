#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	

	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

#include<algorithm>
void shuffle (int &a,int &b,int &c,int &d){
	int o[]={a,b,c,d};
	random_shuffle(o,o+4);
	a=o[0];
	b=o[1];
	c=o[2];
	d=o[3];

	
}