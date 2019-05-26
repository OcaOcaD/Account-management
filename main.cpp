#include <iostream>
#include <string>
#include "switch.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int menu_opt;
    bool exit_menu = false;     //Flag to exit menu
    cout << "Indices simples" << endl;      
    do
    {
        cout << " 1) Registrar nuevo usuario " << endl;  
        cout << " 2) Acceder. (Busqueda binaria) " << endl;  
        cout << " 3) Recuperar cuenta " << endl;  
        cout << " 4) Administración " << endl;
        cin >> menu_opt;
        switch ( menu_opt ){
            case 1:{
                s_opt_1();
                break;
            }
            case 2:{
                s_opt_2();
                break;
            }
            case 3:{
                s_opt_3();
                break;
            }
            case 4:{
                s_opt_4();
                break;
            }
            default:{
                cout << "introduce una opción valida" << endl;
                break;
            }
        }
    } while ( exit_menu == false );
    
    return 0;
}
