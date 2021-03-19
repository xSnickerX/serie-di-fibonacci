#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	system("@echo off");
	system("title Generatore SERIE DI FIBONACCI - xSnickerX");
	system("color 0e");
	
	int fbc_input, n_mode;
	
	cout << "Digitare 1 per generare un numero della s.d.F. dato un indice, 2 per generare la s.d.F. con lunghezza desiderata: ";
	cin >> n_mode;
	cout << endl << endl;
	
	if(n_mode == 1){
		
		cout << "Inserire indice, verra' generato il numero con indice n nella s.d.F. (n = 0 --> 1): n = ";
		cin >> fbc_input;
		cout << endl << endl;
		
		const int fbc_l = fbc_input;
		int fibonacci[200] = { 1 , 1 };
		
		if(fbc_l < 2){
			cout << fibonacci[fbc_input] << endl;
		}
		else{
			for (int i = 2; i < fbc_l; i ++) {
				int x = i - 1;
				fibonacci[i] = fibonacci[x] + fibonacci[x -1];
			}
		
			cout << fibonacci[fbc_l -1] << endl;
		}
	}
	
	else if(n_mode == 2){
	
		cout << "Lunghezza serie (>=2): ";
		cin >> fbc_input;
		const int fbc_l = fbc_input;

		int fibonacci[fbc_l] = { 1 , 1 };
		cout << "1." << fibonacci[0] << "  2." << fibonacci[1] << "  ";
		int y = 0;
		int z = 3;
		for (int i = 2; i < fbc_l; i ++) {
			int x = i - 1;
			fibonacci[i] = fibonacci[x] + fibonacci[x -1];
			cout << z << "." << fibonacci[i] << "  ";
			y ++;
			z ++;
			if(y == 8){
				cout << endl << endl;
				y = 0;		
			}
		}
	}
	cout << endl << endl;
	
	system("pause");
	return 0;
}
