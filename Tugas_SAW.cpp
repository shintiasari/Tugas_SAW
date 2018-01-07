#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	// DEKLARASI VARIABEL DAN ISI VARIABEL BERDASARKAN ARRAY
	int i,j,n,b,a[8];
	double c[i][j], ac[3][5] = {{4,4,5,3,3},{3,3,4,2,3},{5,4,2,2,2}};
	double w[] = {5,3,4,4,2};
	double hasil1,hasil2,hasil3,hasilkali,mc1,mc2,mc3,mc4,mc5,h1,h2,h3,h4,h5,h11;	
		// ISI DATA YANG MANUAL PENCARIAN NILAI MAX
		mc1=max(4,max(3,5));
		mc2=max(4,max(3,4));
		mc3=max(5,max(4,2));
		mc4=max(3,max(2,2));
		mc5=max(3,max(3,2));
		// PERHITUNGAN MANUAL
		hasil1=4+3+4+4+2;
		hasil2=3+2.25+3.2+2.6667+2;
		hasil3=5+3+1.6+2.6667+1.3333;
