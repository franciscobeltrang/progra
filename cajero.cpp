#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int user (void)
{
	cout<<"1. Juan Perez"<<endl;
	cout<<"2. Maricela Rodriguez"<<endl;
}

int pantalla (void)			//interfaz de usuario
{


	cout<<"1.transferir"<<endl;
	cout<<"2.datos de cuenta"<<endl;
	cout<<"3.cambiar contraseña"<<endl;
	cout<<"4.depositar"<<endl;
	cout<<"5.retirar"<<endl;
}

int main ()
{
	struct us1{
		string nombre = "Juan Perez";
		int nip = 1111;
		int saldo = 4200;
		string movimientos;
		string num_tarjeta = "2509 1111 1111 1111";
		string CLABE = "010 110 xxxxxxxxxxx 1";
	};
	
	struct us2{
		string nombre = "Maricela Rodriguez";
		int nip = 2222;
		int saldo = 5250;
		string movimientos;
		string num_tarjeta = "2509 2222 2222 2222";
		string CLABE = "020 220 xxxxxxxxxxx 2";
	};

	us1 usuario1;
	us2 usuario2;
	
	string nombre;
	int nip;
	int saldo;
	string movimientos;
	string num_tarjeta;
	string CLABE;
	int opcion;
	string destino;
	int cantidad;
	int confirmar;
	int salir;
	int deposito;
	int retiro;
	int usuario;
	
	cout<<"*****ingrese tarjeta*****"<<endl;
	cout<<"ingrese usuario"<<endl;
	user();
	 cin>>usuario;
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
		string CLABE = usuario2.CLABE;
	 }
	
	do {
	 
	cout<<"Bienvenido "<<nombre<<endl;
	cout<<"su saldo es: "<<saldo<<endl;
	pantalla();
	 cin>>opcion;
	 
	switch(opcion)
	{								//transferir
		case 1 :
			cout<<"ingrese numero de tarjeta o CLABE"<<endl;
			 cin>>destino;
			cout<<"ingrese cantidad";
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
	cout<<"presione 1 para salir u otro numero para regresar al menu"<<endl;
	 cin>>salir;
	
	break;
	
	case 2 ://///////////////////////////////////////////////ver datos de usuario
		cout<<"nombre: "<<nombre<<endl;
		cout<<"saldo "<<saldo<<endl;
		cout<<"numero de tarjeta: "<<num_tarjeta<<endl;
		cout<<"CLABE "<<CLABE<<endl;
		
	cout<<"presione 1 para salir u otro numero para regresar al menu"<<endl;
	 cin>>salir;
	
	break;
	
	case 3 :///////////////////////////////////////////////////////cambiar nip
		int nip_act;
		int nip_nva;
		cout<<"ingrese nip actual"<<endl;
		 cin>>nip_act;
		
		if (nip_act = nip)
		{
			cout<<"ingrese nip nuevo"<<endl;
			 cin>>nip_nva;
			
			nip = nip_nva;
			
			cout<<"nip cambiado exitosamente"<<endl;
			

			
		}
	
	cout<<"presione 1 para salir u otro numero para regresar al menu"<<endl;
	 cin>>salir;
	break;
	
	
	case 4 :////////////////////////////////////////////////deposito
		cout<<"ingrese cantidad a depositar"<<endl;
		 cin>>deposito;
		 
		if (deposito > 0 )
		{
			saldo = saldo + deposito;
			cout<<"deposito realizado correctamente";
			
			}	
			cout<<"presione 1 para salir u otro numero para regresar al menu"<<endl;
	 		 cin>>salir;
	break;		
	
	case 5 :////////////////////////////////////////////////retirar
		
		cout<<"ingrece cantidad a retirar"<<endl;
		 cin>>retiro;
		
		if (retiro > 0 and retiro < saldo) 
		{
			saldo = saldo - retiro;
			cout<<"retiro exitoso"<<endl;
		}
	
		cout<<"presione 1 para salir otro numero para regresar al menu"<<endl;
		 cin>>salir;
		break;
		
	}
	
	
	}while (salir != 1);
}
