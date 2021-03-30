#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int cuenta;
    char nombre[50];
    double saldo;

    ofstream saldoSalida;

    saldoSalida.open("clientes.txt", ios::out);//Abrir el archivo

    if(!saldoSalida){
        cout<<"NO SE PUDO ABRIR EL ARHIVO"<<endl;
        exit(1);//Nos saca del programa
    }

    cout<<"DIGITA EL NUMERO DE CUENTA, EL NOMBRE Y EL SALDO"<<endl
        <<"ESCRIBA EL FIN DE ARCHIVO -> ?"<<endl<<endl;

    while(cin>>cuenta>>nombre>>saldo){
        saldoSalida<<" "<<cuenta<<" "<<nombre<< " "<<saldo<<endl;
        cout<<"?";
    }

    saldoSalida.close();//Cerrar el archivo

    return 0;
}