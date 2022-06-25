#include <iostream>
using namespace std;
// estructura empresa
struct empresa {
    string area1[30];
    string area2[30];
    string area3[30];
    string area4[30];
    string area5[30];
    string area6[30];
    string area7[30];
    string area8[30];
}empresa1;
int main(){
    //hacer un menu
    int opcion;
    cout<<"1.  1"<<endl;
    cout<<"2.  2"<<endl;
    cout<<"3.  3"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>opcion;
    //iteracion del menu
    while(opcion!=4){
        switch(opcion){
            case 1:
                cout<<"Area 1"<<endl;
                cout<<"1. Area 1"<<endl;
                cout<<"2. Area 2"<<endl;
                cout<<"3. Area 3"<<endl;
                cout<<"4. Area 4"<<endl;
                cout<<"5. Area 5"<<endl;
                cout<<"6. Area 6"<<endl;
                cout<<"7. Area 7"<<endl;
                cout<<"8. Area 8"<<endl;
                cout<<"9. Salir"<<endl;
                cout<<"Seleccione una opcion: ";
                cin>>opcion;
                break;
            case 4:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                cout<<"Seleccione una opcion: ";
                cin>>opcion;
                break;
        }
    }
    






    return 0;
}