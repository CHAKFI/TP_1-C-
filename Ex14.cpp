#include <iostream>
using namespace std;
/*  ANOUAR Abderrazzak  && CHAKFI Ahmed */


int main(int argc, char** argv) {
	
	int p,N;
	
	do
	{
	cout<<"Veuilez entrer un entier entre 0 et 20"<<endl;
	cin>>N;

	   p=N+17;
    }
	while(N<=0 || N>=20);
	  cout<<N<<" + 17 --->\t"<<p;
	return 0;
}
