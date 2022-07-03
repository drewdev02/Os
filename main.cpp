#include <iostream>
using namespace std;
//hacer una matriz de 8x30
int matriz[8][30];
//llenar la matriz
void llenarMatriz(){
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 30; j++) {
            matriz[i][j] = rand() % 12000;
        }
    }

}
//imprimir la matriz
void imprimirMatriz(){
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 30; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
// 1  anadir la produccion diaria de un area especifica
void addPodrucD(){
    int area;
    int dia;
    cout << "ingrese el area y el dia: ";
    cin>>area>>dia;
    cout<<"ingrese la produccion: ";
    cin>>matriz[area-1][dia-1];
}
// 2 Enviar a mantenimiento un area especifica
void mant() {
    int area;
    cout << "ingrese el area a mandar a mantenimiento: ";
    cin >> area;
    for (int j = 0; j < 30; ++j) {
        if (matriz[area - 1][j] < 4000 && matriz[area - 1][j] != 0) {
            matriz[area - 1][j+1] = 0;
        }
    }
}

// 3 produccion total diaria de todas las areas un dia especifico
void totalDia(){
    int dia;
    int total=0;
    cout<<"ingrese el dia: ";
    cin>>dia;
    for (int i = 0; i < 8; i++) {
        total+=matriz[i][dia-1];
    }
    cout<<"la produccion total del dia "<<dia<<" es: "<<total<<endl;
}

// 4 contar areas en mantenimiento
void contarMant(){
    int cont = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 30; j++) {
            if (matriz[i][j] == 0) {
                cont++;
            }
        }
    }
    cout << "las areas en mantenimiento son: " << cont << endl;
}
// 5 porciento de areas en mantenimiento
void porcentajeMant(){
    int cont = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 30; j++) {
            if (matriz[i][j] == 0) {
                cont++;
            }
        }
    }
    cout << "el porcentaje de areas en mantenimiento es: " << cont * 100 / 64 << endl;
}
//  6 mostrar areas que sobrepasan 9000 almenos 3 veces
void sobrepasan(){
   int cont = 0;
   int cont2 = 0;
   int cont3 = 0;
   int cont4 = 0;
   int cont5 = 0;
   int cont6 = 0;
   int cont7 = 0;
   int cont8 = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 30; j++) {
            if (matriz[0][j] > 9000) {
                cont++;
            }else if(matriz[1][j] > 9000){
                cont2++;
            }else if(matriz[2][j] > 9000){
                cont3++;
        }
    }
    cout << "las areas que sobrepasan 9000 son: " << cont << endl;
}

//menu

int main(){
    llenarMatriz();
    mant();
    imprimirMatriz();

    return 0;
}