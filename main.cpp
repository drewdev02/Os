#include <iostream>
using namespace std;
// estructura empresa
//hacer una matriz de 8x30
int matriz[8][30];

int contador = 0;
//funcion para llenar la matriz
void llenarMatriz(){
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 30; j++) {
            matriz[i][j] = rand() % 12000;
        }
    }

}
//funcion para imprimir la matriz
void imprimirMatriz(){
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 30; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
//Anadir la produccion diaria de un area especifica
void addPodrucD(){
    int area;
    int dia;
       cout << "ingrese el area y el dia: ";
       cin>>area>>dia;
         cout<<"ingrese la produccion: ";
            cin>>matriz[area-1][dia-1];
}
//mostar produccion diaria de todas las areas un dia especifico
void mostrarDia(){
    int dia;
    cout<<"ingrese el dia: ";
    cin>>dia;
    for (int i = 0; i < 8; i++) {
        cout<<"area "<<i+1<<": "<<matriz[i][dia-1]<<endl;
    }
}
//Enviar a mantenimiento
void mant(){
    int area;
    cout<<"ingrese el area a mandar a mantenimiento: ";
    cin>>area;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 30; j++) {
            if (matriz[area-1][j]==0){


}else if(matriz[area-1][j]<4000){
                matriz[i][j+1]=0;
            }
        }
    }
}



void menu(){
    int opcion;
    //iteracion del menu
    while(opcion!=4){
        cout<<"Opciones"<<endl;
        cout<<"1. Anadir la produccion diaria de un area especifica"<<endl;
        cout<<"2. Cuantas estan en mantenimiento"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
                //llamar a la funcion para llenar la matriz
                llenarMatriz();
                //hacer un contador para saber cuantas veces se debe de mandar a mantenimiento

                for (int i = 0; i < 8; i++) {
                    for (int j = 0; j < 30; j++) {
                        if(matriz[i][j] <4000){
                            contador++;
                        }
                    }
                }
                cout<<"se debe de mandar a mantenimiento "<<contador<<"veces"<<endl;
                break;
            case 2:
                //llamar a la funcion para llenar la matriz
                llenarMatriz();
                //hacer un contador para saber cuantas esta en mantenimiento
                for (int i = 0; i < 8; i++) {
                    for (int j = 0; j < 30; j++) {
                        if(matriz[i][j] ==0){
                            contador++;
                        }
                    }
                }
                cout<<"se encuentran en mantenimiento "<<contador<<endl;
                break;

            case 3:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                cout<<"Seleccione una opcion: ";
                cin>>opcion;
                break;
        }
    }
}
int main(){
    llenarMatriz();
    mant();
    imprimirMatriz();

    return 0;
}