#include <iostream>
using namespace std;

int factorial(int);
float potencia(float, int);
int suma(int [],int);
float media(int [],int);
int maximo(int [],int);
int minimo(int [],int);


int main()
{
    int n, p, a, r, u;
    do{
        cout << "1. Factorial" << endl;
        cout << "2.  cálculo de la potencia an para cualquier real a y para cualquier entero n " << endl;
        cout << "3. Vectores" << endl;
        cout << "4. Salir" << endl;
        cin >> n;

        switch (n) {
            case 1:
            {
                cout<<"Introduce un entero n"<<endl;
                cin>>p;
                cout<<"El factorial de "<<p<<" es: "<<factorial(p)<<endl;

                break;
            }
            case 2:
            {
                cout<<"Introduce una base a: "<<endl;
                cin>>a;
                cout<<"Y un exponente cualquiera: "<<endl;
                cin>>r;
                cout<<"El  resultado es: "<<potencia(a,r)<<endl;

                break;
            }
            case 3:
            {
                cout << "1. Suma" << endl;
                cout << "2. " << endl;
                cout << "3. " << endl;
                cout << "4. Salir" << endl;
                cin >> u;
                switch (u) {
                    case 1:
                    {

                        break;
                    }
                    case 2:
                    {

                        break;
                    }
                    case 3:
                    {

                        break;
                    }
                    case 4: {

                        break;
                    }
                    default:
                    {
                        cout << "Opcion no valida" << endl;
                    }
                }

                break;
            }
            case 4: {

                break;
            }
            default:
            {
                cout << "Opcion no valida" << endl;
            }
        }
    } while (n != 4);

	return 0;
}




// Ejercicio 1. FunciÃ³n recursiva para calcular el factorial de un nÃºmero.
/*
{Pre: }
{Post: }
*/
int factorial(int n){
    int fact=1;
    if (n==0){
        return fact;
    }else{
        return fact=n*factorial(n-1);

    }

}


// Ejercicio 2. FunciÃ³n recursiva para calcular el cÃ¡lculo de la potencia de a elevado a n.
/*
{Pre: }
{Post: }
*/
float potencia(float a, int n){
    float poti=1;
    if (n==0){
        return poti;
    }else if(n<0){
        poti=(1/a)* potencia(a, n +1);
        return poti;
    }else {
        poti=a* potencia(a, n - 1);
        return poti;
    }


}


// Ejercicio 3.a. Suma las componentes de un vector. Recuerda que el segundo parÃ¡metro de
// la funciÃ³n representa el tamaÃ±o del vector, no la posiciÃ³n de la Ãºltima componente.
/*
{Pre: }
{Post: }
*/
int suma(int v[],int n){
    int sum=0;
    if (n==0){
        return sum;
    }else {
        return sum=v[n]+ suma(v, n-1);
    }
}


// Ejercicio 3.b. Calcula la media de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
float media(int v[],int n){

}

// Ejercicio 3.c. Calcula el mÃ¡ximo de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
int maximo(int v[],int n){

}

// Ejercicio 3.d. Calcula el mÃ­nimo de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
int minimo(int v[],int n){

}









