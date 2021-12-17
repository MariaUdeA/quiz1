#include <iostream>

using namespace std;

//Problema 15 Patron de numeros (Suma de esquinas)
int espiral(int num){
    int suma=1;
    int c=0;
    int corner=1;
    for (int i=1;i<=num/2;i++){
        c+=2;
        for (int w=1;w<=4;w++){
            corner+=c;
            suma+=corner;
        }
    }
    return suma;
}

int main(){
    int suma=0;
    int num;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for (int i=num;i>0;i=i/10){
        suma+=pow(i%10,i%10);
    }
    suma=suma%10;
    if (suma%2==0){
        suma+=1;
    }
    int lado=suma;
    suma=espiral(suma);
    cout<<"En una espiral de "<<lado<<'x'<<lado<<", la suma es: "<<suma<<endl;
    return 0;
}
