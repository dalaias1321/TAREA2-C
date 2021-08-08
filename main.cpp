#include <iostream>
#include <math.h>

  using namespace std;
  
  
double formulacuadraticax1(double a, double b, double c){
	double x1;
	x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2*a);
	return x1;
}
double formulacuadraticax2(double a, double b, double c){
	double x2;
	x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	return x2;
}
int main(int argc, char** argv) {
	double a, b, c, x1, x2, raiz, filtroRaiz;
	
	cout<<"Ingresar valor a: ";
	cin>>a;
	cout<<"Ingresar valor b: ";
	cin>>b;
	cout<<"Ingresar valor c: ";
	cin>>c;
	
	
	if(a == 0){
		cout<<"a no puede ser cero"<<endl;
	}else {
	  filtroRaiz = pow(b, 2) - 4 * a * c;
		
		if(filtroRaiz < 0) {
			cout<<"la raiz cuadrada no puede ser negativa"<<endl;
		}else {
			x1 = formulacuadraticax1(a, b, c);
			x2 = formulacuadraticax2(a, b, c);
			
			cout<<"x1: "<<x1<<endl;
			cout<<"x2: "<<x2<<endl;
		}
	}
	return 0;
}
