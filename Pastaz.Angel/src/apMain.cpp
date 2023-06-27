#include<iostream>
#include"../lib/apLogin.h"
#include"../lib/apColor.h"

using namespace std;

// void apMovRight();

    char barra[]= "__";
    char barra1[100];
    char barra2[100];

void apMovLeft(int dato1)
{
    strcpy(barra1,barra);
    strcpy(barra2,barra);
    switch (dato1)
    {
    case 0:
        for (int j = 22; j >= 0; j--)
        {
            for (int k = 0; k <= j; k++)
            {
                cout<<barra;
            }

            printf("<Observador>");
            strcat(barra1,barra);
            cout<<barra1;
            cout<<"\r";
            usleep(100000);
        }
        break;
    case 1:
        for (int j = 22; j >= 0; j--)
        {
            for (int k = 0; k <= j; k++)
            {
                cout<<barra;
            }
            printf("<Observador_LOBO>");
            strcat(barra1,barra);
            cout<<barra1;
            cout<<"\r";
            usleep(100000);
        }
        break;
    case 2:
        for (int j = 22; j >= 0; j--)
        {
            for (int k = 0; k <= j; k++)
            {
                cout<<barra;
            }
            printf("<Observador_CAPERUCITA>");
            strcat(barra1,barra);
            cout<<barra1;
            cout<<"\r";
            usleep(100000);
        }
        break;
    case 3:
        for (int j = 22; j >= 0; j--)
        {
            for (int k = 0; k <= j; k++)
            {
                cout<<barra;
            }
            printf("<Observador_UVAS>");
            strcat(barra1,barra);
            cout<<barra1;
            cout<<"\r";
            usleep(100000);
        }
        break;
    case 4:
    exit(-1);
    }
    


    cout<<"\n\nIngrese el numero de la opcion para avanzar: "; cin>>dato1;
}

void apMovRight(int dato1)
{
        strcpy(barra1,barra);
        strcpy(barra2,barra);
    switch (dato1)
    {
    case 0:
        for (int i = 0; i < 20; i++)
        {   
            cout<<barra2;
            strcat(barra2,barra);
            printf("Observador");
            cout<<"\r";
            usleep(100000);
        }
        break;
    case 1:
        for (int i = 0; i < 20; i++)
        {   
            cout<<barra2;
            strcat(barra2,barra);
            printf("<Observador_LOBO>");
            cout<<"\r";
            usleep(100000);
        }
        break;
    case 2:
        for (int i = 0; i < 20; i++)
        {   
            cout<<barra2;
            strcat(barra2,barra);
            printf("Observador_CAPERUCITA");
            cout<<"\r";
            usleep(100000);
        }
        break;
    case 3:
        for (int i = 0; i < 20; i++)
        {   
            cout<<barra2;
            strcat(barra2,barra);
            printf("Observador_UVAS");
            cout<<"\r";
            usleep(100000);
        }
        break;
    case 4:
    exit(-1);
    }
    

}

int main()
{
    int apDatoMenu=0, apLobo=0, apCap=0, apUva=0;
    apDatos();
    apLogin();

    cout<<"\nIngrese a quien quiere cruzar: "; cin>>apDatoMenu;
    while (apLobo!=100)
    {
        apMovLeft(apDatoMenu);
        cout<<"\n";
        apMovRight(apDatoMenu);
    }
    
    

}
