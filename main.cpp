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
            cout << "se mando a mantenimiento el dia " << j + 1 << endl;
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
            if (matriz[i][j] <4000) {
                cont++;
            }
        }
    }
    cout << "el porcentaje de areas en mantenimiento es: " << (cont * 100) / (30*8)<<"%"<< endl;
}
//  6 mostrar areas que sobrepasan 9000 almenos 3 veces
void sobrepasan() {
    int cont = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 30; j++) {
            if (matriz[i][j] > 9000) {
                cont++;
            }
        }
    }
}
// 7 hacer matriz de 2x2 con dos areas introducidas por el usuario
void matriz2x2() {
    int area1;
    int area2;
    cout << "ingrese la primera area: ";
    cin >> area1;
    if (area1 == 8) {
        area1 = area1 - 1;
    }
    cout << "ingrese la segunda area: ";
    cin >> area2;
    if (area2 == 8) {
        area2 = area2 - 1;
    }
    int matriz2[2][2];
    matriz2[0][0] = matriz[area1 - 1][0];
    matriz2[0][1] = matriz[area1 - 1][1];
    matriz2[1][0] = matriz[area1][0];
    matriz2[1][1] = matriz[area1][1];
    int matriz3[2][2];
    matriz3[0][0] = matriz[area2 - 1][0];
    matriz3[0][1] = matriz[area2 - 1][1];
    matriz3[1][0] = matriz[area2][0];
    matriz3[1][1] = matriz[area2][1];

    //sumar las dos matrices
    int suma[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            suma[i][j] = matriz2[i][j] + matriz3[i][j];
        }
    }
    //imprimir la matriz suma

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << suma[i][j] << " ";
        }
        cout << endl;
    }
}

//menu
void menu() {
    int opcion;
    while (opcion != 8) {

        llenarMatriz();
        cout << "1. anadir la produccion diaria de un area especifica" << endl;
        cout << "2. Enviar a mantenimiento un area especifica" << endl;
        cout << "3. produccion total diaria de todas las areas un dia especifico" << endl;
        cout << "4. contar areas en mantenimiento" << endl;
        cout << "5. porciento de areas en mantenimiento" << endl;
        cout << "6. mostrar areas que sobrepasan 9000 almenos 3 veces" << endl;
        cout << "7. hacer matriz de 2x2 con dos areas introducidas por el usuario" << endl;
        cout << "8. salir" << endl;
        cout << "ingrese la opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                addPodrucD();
                break;
            case 2:
                mant();
                break;
            case 3:
                totalDia();
                break;
            case 4:
                contarMant();
                break;
            case 5:
                porcentajeMant();
                break;
            case 6:
                sobrepasan();
                break;
            case 7:
                matriz2x2();
                break;
            case 8:
                cout << "adios" << endl;
                break;
            default:
                cout << "opcion no valida" << endl;
                break;
        }
    }
}

int main(){
    menu();
        return 0;
    }
