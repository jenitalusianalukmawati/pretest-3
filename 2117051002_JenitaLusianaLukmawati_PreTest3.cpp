#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//input
	double berat_badan;
	cin >> berat_badan;
	double tinggi_badan;
	cin >> tinggi_badan;
	double BMI;
	BMI = berat_badan/(tinggi_badan*tinggi_badan);
	
	//output
	cout << endl;
	cout << "Hasil BMI = " << BMI << endl; 
	cout << "Status Berat = ";
	
	if (BMI<18.5){
		cout << "Underweight" <<endl;
	} 
	else if (BMI>=18.5 && BMI <=24.9){
		cout << "Normal Weight" << endl;
	} 
	else if (BMI>=25.0 && BMI <=29.9){
		cout << "Overweight" << endl;
	} 
	else if (BMI>=30.0 && BMI <=34.9){
		cout << "Obesity Class I" << endl;
	} 
	else if (BMI>=35.0 && BMI <=39.9){
		cout << "Obesity Class II" << endl;
	} 
	else if (BMI>40){
		cout << "Obesity Class III" << endl;
	}
}
