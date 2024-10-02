#ifndef FUNCIONES_H //si no está definido FUNCIONES_H
#define FUNCIONES_H //si la condición anterior es verdadera, se define FUNCIONES_H

#include <iostream>
#include <cstdlib> //para system pause, que solo funciona en windows

short int presentacion(std::string frase)
{
    short int opcion;

    std::cout << frase;

    std::cout << "1. Factorial de un numero\n";
    std::cout << "2. Mayor de tres numeros\n";
    std::cout << "3. Potencia de un numero\n";
    std::cout << "0. Finalizar\n";

    std::cin >> opcion;

    return opcion;
}

void factorial()
{
    int numero, factorial=1;
    short int i;

    std::cout << "Ingrese el numero que desea obtener el factorial: \n";
    std::cin >> numero;

    if(numero==0)
        std::cout << "El factorial de " << numero << " es " << factorial << "\n";
    else
        {
            for(i=numero;i!=1;i--)
            {
                factorial*=i;
            }
            std::cout << "El factorial de " << numero << " es " << factorial << "\n";
        }


}

void mayorDeTres()
{
    short int i;
    int valores[3];

    std::cout << "Ingrese tres valores: ";

    for(i=0;i<3;i++)
    {
        std::cout << "\nIngrese el valor " << i+1 << ":";
        std::cin >> valores[i];
    }

    if(valores[0]>valores[1])
        if(valores[0]>valores[2])
            std::cout << "El valor mas grande es:" << valores[0];
        else
            std::cout << "El valor mas grande es:" << valores[2];

    else if(valores[1]>valores[2])
        std::cout << "El valor mas grande es:" << valores[1];

    else
        std::cout << "El valor mas grande es:" << valores[2];

}

void potencia()
{
    int base, exponente, i, resultado=1;

    std::cout << "Ingrese la base: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exponente;

    for(i=0;i<exponente;i++)
    {
        resultado*=base;
    }

    std::cout << "\nEl resultado de la potencia es: " << resultado << "\n";

}


#endif // FUNCIONES_H

