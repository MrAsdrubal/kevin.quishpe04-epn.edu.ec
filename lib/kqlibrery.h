#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <sstream>
#include <cmath>
#include <fstream>
#include <unistd.h>

using namespace std;

int conviertestringint(string chaper)
{
   //Transaforma los datos de tipo string en enteros.
    stringstream taita;
    int k;
    taita<<chaper;
    taita>>k;
    return k;
}
int conversionstringchar(string letra)
{
    stringstream m;
    char f;
    m<<letra;
    m>>f;
    return f;
}
int getNumeroPetShop(string numer)
{
    //Analizar las condiciones en el while con analisis de caracteres(isalpha isalnum ...)
    string resp;
    int n;
    do{
    cout<<numer;
    getline(cin,resp);
    n=conviertestringint(resp);
    fflush(stdin);  
    }while((n>3)||(isalpha(resp[0])!=0)||(isalnum(resp[1])!=0)||(isblank(resp[1])!=0)||resp[1]=='.');
    
  return n;
}
int getNumeroloading(string numer)
{
    //Analizar las condiciones en el while con analisis de caracteres(isalpha isalnum ...)
    string resp;
    int n;
    do{
    cout<<numer;
    getline(cin,resp);
    n=conviertestringint(resp);
    fflush(stdin);  
    }while((n>100)||(isalpha(resp[0])!=0)||(isalpha(resp[1])!=0)||(isalpha(resp[2])!=0));
    
  return n;
}
int getSigno(string signo)
{ 
    //Esta funcion va a validar los signos que entren como parametros en la funcion.
    string art;
    char x;
    do{
        cout<<signo;
        getline(cin,art);
        x=conversionstringchar(art);
        fflush (stdin);
      }while(isalnum(art[1])!=0||isblank(art[0]==0));
    return x;
}
void progressVar()
{
  	
	float tamano=32;
	
	char signo='o';
	
    for (int i = 0; i <=tamano; i++)
      {  system("cls");
        cout<<"Loading "<<(100/tamano)*i<<"%\n";
        cout<<"[";
    for(int j=1;j<=i;j++)
        cout<<signo;
        Sleep(700);
        cout.precision(3);cout<<"\n";
        cout<<  caracteres de m caracteres <<
      }
    cout<<"]";
    cout<<"\a"<<endl;
    cout<<m<<"caracteres"
	system("PAUSE"); 
}
int factorial(int n)
{
  //factorial de un número n!
 long long c,factorial=1;;

  for (int i=1; i<=n; i++)
  {
    factorial=factorial*i;
  }
  c=factorial;
  return c;
}
int combinatoria(int k, int b)
{
  //combinatoria de formula.
  long long factorial=1, factorial2=1,factorial3=1,c;
  for (int i=1; i<=k; i++)
  {
  factorial=factorial*i;
  }
  for (int i=1; i<=b; i++)
  {
    factorial2=factorial2*i;
  }
  for (int i=1; i<=k-b; i++)
   {
     factorial3=factorial3*i;
   }
   c=factorial/(factorial2*factorial3);
   return c;
}
void variationCR(char *datos, int n, int r, int i =0,int *indexs=NULL)
{
  if(indexs==NULL){
    indexs= new int[r];
  }
  if(i<r){
  for (int z = 0; z <n; z++){
    indexs[i]=z;
    variationCR(datos,n,r,i+1,indexs);
  }
  }else{
    
    cout<<"\n";
    for (int w = 0; w < r; w++){
    cout<<datos[indexs[w]];
    }
  }
  
}
void combinacionesSR(string datos, int n, int r,int y=0, int i =0,int *indexs=NULL)
{
  if(indexs==NULL){
    indexs= new int[r];
  }
  if(i<r){
  for (int z = y; z <n; z++)
  {
    indexs[i]=z;
    combinacionesSR(datos,n,r,z+1,i+1,indexs);
  }
  }else{
    cout<<"\n";
    for (int w = 0; w < r; w++){
    cout<<datos[indexs[w]];
    }
  }
}
void ejecutCombi()
{
  string items;
int n,r,l;
long long k;
cout<<"Digite en una frase la palabra a la cual desea realizar la combinacion: "<<endl;
getline(cin,items);
l=items.size();
cout<<"El numero de caracteres es de: "<<l;
do
{
    cout<<"\nDigite correctamente la cantidad de digitos que desea combinar:";
    cout<<"\nN: ";cin>>n;
    fflush(stdin);
} while (n>l);
cout<<"\nAhora digite la agrupacion de caracteres a combinar:";
cout<<"\nR: ";cin>>r;
k=combinatoria(n,r);
cout<<"El numero de combinaciones sin repeticion es: "<<k<<endl;
Sleep(1000);
combinacionesSR(items,n,r);
cout<<"\a"<<endl;
system("pause");

}
void leerArchivo(string Entradarch)
{
    int pag=1;
    string s;
    ifstream f(Entradarch);
    if (!f.is_open())
    cout<<"Error en la apertura del archivo."<<endl;
    else
    do
    {
        getline(f,s);
        cout<<s<<endl;
        if(pag++%5==0)
           getchar();
    } while (!f.eof());
    f.close();
}
void escribirArchivo(string Suasofon)
{
    ofstream f;
    f.open(Suasofon, ios_base::app);//app es para modificar el archivo y el "out", va a crear un nuevo archivo y si tienes algo en la dirección del archivo te lo va a borrar.

    f<<"Americana Source\n";//En esta parte se escribe los archivos que se desean llenar.
    f<<"Clementina Angosto\n";//En esta parte se escribe los archivos que se desean llenar.
    f<<"Oscar Tapia\n";//En esta parte se escribe los archivos que se desean llenar.
    f<<"Magaly Shunta\n";//En esta parte se escribe los archivos que se desean llenar.
    f.close();
}
string kqMayusculas(string str)
{
    for (int x=0; x < str.length(); x++)
        str[x] = toupper(str[x]);
    return str;
}
string kqMinusculas(string str)
{
    for (int x=0; x < str.length(); x++)
        str[x] = tolower(str[x]);
    return str;
}
void combSR(char *datos, int n, int r, int y = 0, int i=0, int *indexs=NULL){
	if(indexs==NULL){
		indexs = new int[r];
	}
	if(i<r){
		for(int x=y; x<n; x++){
			indexs[i]=x;
			combSR(datos,n,r,x+1,i+1,indexs);
		}
	}else{
		cout<<"\n\t";
		for(int w=0; w<r; w++){
			cout<<datos[indexs[w]];
		}
	}
}
void p_bar(string icon, float lengt, float time){ // Icono █, Largo, Tiempo 
	string x = icon;float porc = 1; float timer = time * 1000000;
	string v = "";
	for(int i=0; i<=lengt; i++){
		system("/bin/clear");
		if(i%2 == 0){
			v = "\\";
		}else{
			v = "/";
		}
		porc = (100/lengt) * i;cout<<WHITE<<"["<<CYAN<<v<<WHITE<<"] Cargando "<<CYAN<<lround(porc)<<"%"<<WHITE<<": "<<GREEN<<x<<endl;x += icon;
		usleep(timer);
	}
}