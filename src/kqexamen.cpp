#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <sstream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <string>
#include  "../lib/kqlibrery.h"
using namespace std;
//@Nombre:Kevin Asdrubal Quishpe Yanchaliquin.
//@Fecha:
int kqCedula= 1503867723;
string kqCorreo= "kevin.quishpe04@epn.edu.ec";
string kqNombreCompleto="Kevin Asdrubal Quishpe Yanchaliquin ";
void kqUsing()
{
int kqNrointentos;
int kqC=1234;
string kqCorre;
int kqCedu;
string kqProfe="profe";
 cout<<"UsUARIO ";cin>>kqCorre;
 cout<<"Clave: ";cin>>kqCedu;
while (kqCorre!=kqCorreo&&kqCorre!=kqProfe&&kqCedu!=kqCedula&&kqCedu!=kqC)
{
	cout<<"Lo sentimos su usuario y contraseña son incorrectas:";
	void kqUsing();
}
}
void kqUser()
{
cout<<"CEDULA: "<<kqCedula<<endl;
cout<<"CORREO: "<<kqMayusculas(kqCorreo)<<endl;
cout<<"NOMBRE: "<<kqMinusculas(kqNombreCompleto)<<endl;
}
void kqShowloadingnombre_e()
{
	progressVar();
}
void kqcombinatoria()
{
	cout<<"Combinatoria";
}
void kqMenu()
{
	int opc;
system("cls");
cout<<" ---Usuario--- "<<endl;
cout<<" 1. Mostrar Usuario"<<endl;
cout<<" 2. Barra de carga "<<endl;
cout<<" 3. Combinatoria "<<endl;
cout<<" 0. Salir "<<endl;
do
{
    opc=getNumeroPetShop("Escriba la opcion que desea escoger: ");
    fflush(stdin);
} while (opc>3);

 switch (opc)
    {
    case 1 : kqUser();
    break;
    case 2 : kqShowloadingnombre_e();
    break;
    case 3 : kqcombinatoria();
    break;    
    default : cout<<"Chao......:)";
    exit(0);
}
}
int main()
{

kqMenu();



	return 0;
}