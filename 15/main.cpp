#include <iostream>

void mostrarsaldo(double saldo);
double ingresot(double saldo, double ingreso);
double retirot(double saldo, double retiro);

int main(){
    int contraseña;
    int opc = 0;
    double saldo = 0;
    double ingreso;
    double retiro;
    std::string nombrec;

    std::cout << "Ingrese tus credenciales: ";
    std::cin >> nombrec;
    
    do{
    std::cout << "Ingrese la contraseña de la cuenta: ";
    std::cin >> contraseña;
    }while(contraseña != 1234);
   
do{
   
    std::cout << "**************************\n";
    std::cout << "Selecciona una operacion: \n";
    std::cout << "**************************\n";
    std::cout << "1.Mostrar saldo\n";
    std::cout << "2.Depositar dinero\n";
    std::cout << "3.Retirar dinero\n";
    std::cout << "4.Salir\n";
    std::cin >> opc;
    std::cout << " " << std::endl;

    switch(opc){
        case 1:
            mostrarsaldo(saldo);
            break;
        case 2:
            std::cout << "Cantidad a ingresar: ";
            std::cin >> ingreso;
            saldo = ingresot(saldo, ingreso);
            mostrarsaldo(saldo);
            break;
        case 3:
            do{
            std::cout << "Cantidad a retirar: ";
            std::cin >> retiro;
            }while(retiro > saldo);
            saldo = retirot(saldo, retiro);
            mostrarsaldo(saldo);
        }

}while(opc != 4);

}
void mostrarsaldo(double saldo){
    std::cout << "Tu saldo es de: " << saldo << " $" << std::endl;
}
double ingresot(double saldo, double ingreso){
    return saldo + ingreso;
}
double retirot(double saldo, double retiro){
    return saldo - retiro;
}