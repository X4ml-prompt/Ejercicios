#include <iostream>

using namespace std;

int main (){
    int option = 0;
    float saldo = 1000.0, deposito = 0.0, retiro = 0.0;
    
    do{
        cout <<"\n=====Cajero Automático=====\n";
        cout <<"Buen día, ¿qué desea realizar hoy?\n";
        cout <<"1. Consultar Saldo\n";
        cout <<"2. Depositar dinero\n";
        cout <<"3. Retirar dinero\n";
        cout <<"4. Salir\n";
        cin >> option;
        
        switch(option) {
            case 1: {
                cout << "Su saldo actual es de: $" << saldo << endl;
                break;
            }
            case 2: {
                cout << "Ingrese el dinero a depositar: $";
                cin >> deposito;
                double total1 = saldo + deposito;
                cout << "Su saldo actual es de: $" << total1 << endl;
                break;
            }
            case 3: {
                cout << "Ingrese el monto a retirar: $";
                cin >> retiro;
                double total2 = saldo - retiro;
                cout << "Su saldo actual es de: $" << total2 << endl;
                break;
            }
            default:{
                break;
            }
        }
    } while (option !=4);
            cout << "Gracias por escogernos, le deseamos un feliz día";
            return 0;
}