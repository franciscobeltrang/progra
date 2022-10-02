#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int pantalla (void)			//interfaz de usuario
{


	cout<<"1.transferir"<<endl;
	cout<<"2.datos de cuenta"<<endl;
	cout<<"3.historial"<<endl;
}

int main ()
{
	struct us1{
		string nombre = "Juan Perez";
		int nip = 1111;
		int saldo = 4200;
		string movimientos;
		string num_tarjeta = "2509 1111 1111 1111";
		int CLABE;
	};
	
	struct us2{
		string nombre = "Maricela Rodriguez";
		int nip = 2222;
		int saldo = 5250;
		string movimientos;
		string num_tarjeta = "2509 2222 2222 2222";
		int CLABE;
	};

	us1 usuario1;
	us2 usuario2;
	
	string nombre;
	int nip;
	int saldo;
	string movimientos;
	string num_tarjeta;
	int CLABE;
	int opcion;
	int destino;
	int cantidad;
	int confirmar;
	
	cout<<"*****ingrese tarjeta*****"<<endl;
	cout<<"usuario 2509 xxxx xxxx xxxx"<<endl;
	cout<<"ingrese nip"<<endl;
	 cin>> nip;
	 
	if(nip = usuario1.nip)
	 {
		nombre = usuario1.nombre;
		nip = usuario1.nip;
		saldo = usuario1.saldo;
	    movimientos = usuario1.movimientos;
	    num_tarjeta = usuario1.num_tarjeta;
	    CLABE = usuario1.CLABE;
	 }
	
		if(nip = usuario2.nip)
	 {
		string nombre = usuario2.nombre;
		int nip = usuario2.nip;
		int saldo = usuario2.saldo;
		string movimientos = usuario2.movimientos;
		string num_tarjeta = usuario2.num_tarjeta;
		int CLABE = usuario2.CLABE;
	 }
	 
	cout<<"Bienvenido "<<nombre<<endl;
	cout<<"su saldo es: "<<saldo<<endl;
	pantalla();
	 cin>>opcion;
	 
	switch(opcion)
	{								//transferir
		case 1 :
			cout<<"ingrese numero de tarjeta o CLABE";
			 cin>>destino;
			cout<<"ingrese cantidad";
			 cin>>cantidad;
			 cin>>cantidad;
			cout<<"transferir "<<cantidad<<" a "<<destino<<"continuar?"<<endl;
			cout<<"1. si"<<endl;
			cout<<"2. no"<<endl;
			 cin>>confirmar;
			 cin>>confirmar;
			 
			if (confirmar = 1 and saldo >= cantidad)
			{
				cout<<cantidad<<" transferidos con exito"<<endl;
				
			}
	}
	
}
