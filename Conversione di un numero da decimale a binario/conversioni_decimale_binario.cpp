//Autore:Francesco Di Lena
//Classe: 3 F
//Data: 3-11-2020

#include <iostream>
#include <sTdio.h>
using namespace std;

int main() {
	int numero;
	
	string resto;
	resto="";
	
	cout<<"Benvenuto. Questo programma converte un numero intero decimale in un numero binario. \n";
	cout<<"\nInserisci un numero decimale (maggiore o uguale a zero): ";
	cin>>numero;
	
	while (numero<0)
	{
		cout<<"\nInserisci di nuovo il numero (non deve essere minore di zero): ";
		cin>>numero;
	}
	
	if (numero>0)
	{
		while (numero>0) 
		{
			if (numero%2==0)
		
			
				resto='0'+resto;
			
				
			else
			
				resto='1'+resto;
				numero=numero/2;
						
		}	
	}	
		
	else 
	{
		resto='0';
	}
		std::cin.get();
		cout<< "\nIl numero convertito in binario e': " +resto;		
		cout<< "\n\nPer uscire dal programma premere qualsiasi tasto...";
		cin.get();
	
}
