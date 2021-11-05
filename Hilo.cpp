#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<stdio.h>

using namespace std;

int main () {

	int ivalor = 20;
	int icontador = 0;
	int i = 0;
	double dsleep = 0;

	cout << "+------------------ Porgrama Hilo ------------+" << endl;

	for (i = 1; i<= ivalor; i++) {
		icontador+=i;
		dsleep=1-(1/i);
 		cout << " ciclo for i = " << i << " contador " << icontador << "sleep = " << dsleep << endl;
		sleep(dsleep);
	}

	cout << "=====> Llamado a otro Programa " << endl ;
	system("./bin/geometria");
	cout << "+----------------- Fin programa ------------------+" << endl;
	return 0;
}

