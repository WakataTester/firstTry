#include <iostream>

using namespace std;

void Saludo();
int Resta();
int Resta(int x, int y, int z);
void Hola();
double Mult(double a, double b);
double Div(double a, double b);

int main(){

double a;
double b;

   /* Saludo();*/

    /*cout << Resta();
    cout << "Ingrese tres valores a restar:\n";
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "La resta da: " << Resta(a, b, c) << endl;*/

    //Hola();
    cout << "ingrese valores de a y b\n";
    cin >> a;
    cin >> b; 
    cout<< "La multiplicacion de a y b es: " << Mult(a,b) << endl;

    cout<< "La division de a entre b es: " << Div(a,b) << endl;

    return 0;
}

void Saludo(){
    cout << "Hola" << endl;
}

int Resta(){
    int diferencia = (10-8);
    return diferencia;
}

int Resta(int x, int y, int z){
    int restando = x - y - z;
    return restando;
}

void Hola(){
    for(int i = 0; i<3; i++){
           cout << "Hola" << endl;  
    }
}

double Mult(double a, double b){
    double multiplicando = a*b;
    return multiplicando;
}

double Div(double a, double b){
    double dividiendo = a/b;
    return dividiendo;
}