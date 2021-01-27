#include <iostream>
using namespace std;

//PASO 1 DEFINIR LA ESTRUCTURA DELAS FUNCIONES
void multiplo ();

void ingresar (int a[], int n);

void imprimir (int a[], int n);

void burbuja (int a[], int n);

void promedio (int b[],int num);

void estudiantes (int c[], int n);



int main() 
{
  int op;
  do
  {
    cout<<"Menu principal \n";
    cout<<"1.- Multiplos \n";
    cout<<"2.- Calificaciones\n";
    cout<<"3.- Salir \n";
    cin>>op;

    switch (op)
    {
      case 1:
      {
        multiplo();
        cout<<endl;
        break;
      }
      case 2:
      {
        int arregloEstudiantes[100];
        int n;
        cout<<"Ingrese el número de calificaciones:";
        cin>>n;
        
        ingresar(arregloEstudiantes,n);
        cout<<"Las calificaciones orenada son:\n";
        burbuja(arregloEstudiantes,n);
        imprimir(arregloEstudiantes,n);
        cout<<"El promedio de las calificaciones son:\n";
        promedio(arregloEstudiantes,n);
        cout<<"El detalle de las calificaciones son:\n";
        estudiantes(arregloEstudiantes,n);
        break;
      }
      case 3:
      {
        break;
      }
      default:
      {
        break;
      }
    }

  }
  while(op!=3);
  
}

//PASO 2 DESARROLLO DELAS FUNCIONES
void multiplo ()
{
  int t,m;
  cout<<"Ingrese el tamaño del arreglo:"<<endl;
  cin>>t;
  int arregloMulti[t];
  cout<<"Ingrese el múltiplo:"<<endl;
  cin>>m;
  for(int i=0; i<t; i++)
  {
    arregloMulti[i]=m*(i+1);
  }
  imprimir(arregloMulti,t);
}

void ingresar (int a[], int n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<"Ingrese la calificación:";
    cin>>a[i];
  }


}

void imprimir (int a[], int n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<"|"<<a[i]<<"|";
  }

}

void burbuja (int a[], int n)
{
  int i, j, aux;
    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (a[j]<a[i])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    

}

void promedio (int b[],int num)
{
  int sum=0;
  double promedio;
  for(int i=0; i<num; i++)
  {
    sum = sum+b[i];

  }
  promedio=sum/num;

  cout<<promedio;
}

void estudiantes (int c[], int n)
{
  int i=0,d=0,e=0,f=0;

  for(int i=0; i<n; i++)
  {
    if(c[i]>=14 & c[i]<=20)
    {
      d++;
    }
    else if (c[i]>=9 & c[i]<=13)
    {
      e++;
    }
    else if (c[i]>=1 & c[i]<=8)
    {
      f++;
    }

  }
  cout<<"APROBADOS SON: "<<d<<endl;
  cout<<"SUSPENSO SON: "<<e<<endl;
  cout<<"REPROBADO SON: "<<f<<endl;


}