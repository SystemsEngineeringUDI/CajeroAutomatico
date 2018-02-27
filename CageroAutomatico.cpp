/*
@autor:
 * Jhon velasco
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
#include <iostream>
using namespace std;
int main(){
	int mil=0,mil2=0,mil5=0,mil10=0,mil20=0,mil50=0,mil100=0,mon;
	cout<<"Digite la cantidad a retirar\n";
	cin>>mon;
	mil100=mon/100000;
	mon-=(mil100*100000);
	mil50=mon/50000;
	mon-=(mil50*50000);
	mil20=mon/20000;
	mon-=(mil20*20000);
	mil10=mon/10000;
	mon-=(mil10*10000);
	mil5=mon/5000;
	mon-=(mil5*5000);
	mil2=mon/2000;
	mon-=(mil2*2000);
	mil=mon/1000;
	mon-=mil;
	cout<<"Retire su dinero\n";
	cout<<"\n100mil: "<<mil100;
	cout<<"\n50mil: "<<mil50;
	cout<<"\n20mil: "<<mil20;
	cout<<"\n10mil: "<<mil10;
	cout<<"\n5mil: "<<mil5;
	cout<<"\n2mil: "<<mil2;
	cout<<"\nmil: "<<mil;
	
}
