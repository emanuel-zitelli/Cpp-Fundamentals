#include "funciones.hpp"

int main()
{
    short int opcion;
    opcion=presentacion("Ingrese que operacion desea realizar\n");

   while(opcion!=0)
    {
        if(opcion==1)
            factorial();
        
        else if (opcion==2)
            mayorDeTres();

        else
            potencia();
        
        opcion=presentacion("\nIngrese otra operacion a realizar\n");
    }
    std::cout << "Programa finalizado. Presione una tecla para continuar" << std::endl;
    system("pause"); //solo valido para windows

    return 0;
}