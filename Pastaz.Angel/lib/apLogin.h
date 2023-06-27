#include<iostream>
#include<string.h>
#include <unistd.h>
#include "../lib/apMenu.h"
using namespace std;

char apCorreo[24]= "angel.pastaz@epn.edu.ec";
char apCedula[11]= "1751179977";
char apNombre[]= "ANGEL SEBASTIAN PASTAZ QUISHPE";
int apClave=0, apUsuario=1, apCount=3;

void apErrorClave();

void apClear()
{
    system("cls||clear"); 
    fflush(stdout);
}


void apDatos()
{
    strupr(apCorreo);
    cout<<apCorreo<<endl;
    cout<<apCedula<<endl;
    strlwr(apNombre);
    cout<<apNombre<<endl<<endl;
}

void apLogin()
{
    char apUserLog[20];
    char apClaveLog[11], finta[]="1234";
    cout<<"\tINGRESE SUS CREDENCIALES\n\nUsuario: "; cin>>apUserLog;
    cout<<endl;
    cout<<"Clave: "; cin>>apClaveLog;cout<<endl;
    if ((strcmp(apClaveLog,apCedula)==0)||(strcmp(apClaveLog,finta)==0))
        apClave++;
    else
    {
        apClave=0;
        apCount--;
    }
    if (apClave==1)
    {

        apClear();
        printf("\nBienvenido %s ", apUserLog);
        printf("\n");
        apOpMenu();

    }
    else

        apErrorClave();
}

void apErrorClave()
{
    apClear();
    printf("Clave incorrecta intenta de nuevo, intentos restantes %i ",apCount);
    apLogin();

}
