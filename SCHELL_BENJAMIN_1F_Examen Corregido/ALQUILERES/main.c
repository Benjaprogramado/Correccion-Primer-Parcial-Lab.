#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "negocio.h"

#define maxJuegos 20
#define maxAlquileres 400
#define maxClientes 20


int main()
{

    eClientes arrayClientes[maxClientes];
    eJuegos arrayJuegos[maxJuegos];
    eAlquileres arrayAlquileres[maxAlquileres];

    int opcionMenuPrincipal =0;

    initArrayClientes(arrayClientes,maxClientes,-1);
    initArrayJuegos(arrayJuegos,maxJuegos,-1);
    initArrayAlquileres(arrayAlquileres,maxAlquileres,-1);


     do
    {

         opcionMenuPrincipal=showMenuPrincipal();
         int flag1;
         int flag2;
         int flag3=(flag1+flag2);
         int opcionJuego=0;
         int opcionCliente=0;
         int opcionInforme=0;

         switch(opcionMenuPrincipal)
         {
            case 1:
                opcionJuego=showMenuJuegos();
                switch(opcionJuego)
                {
                    case 1:
                        if(cargarJuegos(arrayJuegos,maxJuegos)==1)
                        flag1=1;
                        break;
                    case 2:
                        modificarJuegos(arrayJuegos,maxJuegos);
                        break;
                    case 3:
                        bajaDeJuegos(arrayJuegos,maxJuegos);
                        break;
                    case 4:
                        ordenarJuegos(arrayJuegos,maxJuegos);
                        printArrayJuegos(arrayJuegos,maxJuegos);
                        break;
                    case 5:
                        break;
                }

                break;

            case 2:
                opcionCliente=showMenuClientes();
                switch(opcionCliente)
                {
                    case 1:
                        if(cargarClientes(arrayClientes,maxClientes)==1)
                        flag2=1;
                        break;
                    case 2:
                        modificarClientes(arrayClientes,maxClientes);
                        break;
                    case 3:
                        bajaDeClientes(arrayClientes,maxClientes);
                        break;
                    case 4:
                        ordenarClientes(arrayClientes,maxClientes);
                        printArrayClientes(arrayClientes,maxClientes);
                        break;
                    case 5:
                        break;
                }

                break;

            case 3:
                if(flag3!=2)
                {
                    printf("NO HAY DATOS!!!\n\nDebe cargar al menos un cliente y un juego para cargar un alquiler...");
                    getch();
                    break;
                }
                cargarAlquileres(arrayAlquileres,maxAlquileres,arrayClientes,maxClientes,arrayJuegos,maxJuegos);
                break;

            case 4:
                if(flag3!=2)
                {
                    printf("NO HAY DATOS!!!\n\nDebe cargar al menos un cliente y un juego visualizar informes...");
                    getch();
                    break;
                }
                opcionInforme=showMenuInformes();
                switch(opcionInforme)
                {
                case 1:
                    promedioTotalDeJuegos(arrayJuegos,maxJuegos);
                    break;
                case 2:
                    juegosNoSuperanPromedio(arrayJuegos,maxJuegos);
                    break;
                case 3:
                    listarClientesPorJuegoAlquilado(arrayAlquileres,maxAlquileres,arrayJuegos,maxJuegos,arrayClientes,maxClientes);
                    break;
                case 4:
                    listarJuegosAlquiladosPorCliente(arrayAlquileres,maxAlquileres,arrayJuegos,maxJuegos,arrayClientes,maxClientes);
                    break;
                case 5:
                    listarJuegosMenosAlquilados(arrayJuegos, maxJuegos);
                    break;
                case 6:
                    listarClientesMasAlquileres(arrayClientes, maxClientes);
                    break;
                case 7:
                    listarJuegosAlquiladosPorFecha(arrayAlquileres,maxAlquileres,arrayJuegos,maxJuegos);
                    break;
                case 8:
                    listarClientesPorFechaAlquiler(arrayAlquileres,maxAlquileres ,arrayClientes,maxClientes);
                    break;
                case 9:
                    listarJuegosOrdenamientoEficiente(arrayJuegos,maxJuegos);
                    break;
                case 10:
                    listarClientesOrdenamientoInsercion(arrayClientes,maxClientes);
                    break;
                case 11:
                    break;
                }
                break;

        }


    }while(opcionMenuPrincipal != 5);

    return 0;
}
/*
1-Promedio y total de los juegos alquilados.
2-Cantidad de juegos cuyo importe no supera el promedio del item anterior.
3-Todos los clientes que alquilaron un juego determinado.
4-Todos los juegos que fueron alquilados por un cliente determinado.
5-Listar el/los juegos menos alquilados.
6-Listar el/los clientes que realizo mas alquileres.
7-Todos los juegos alquilados en una fecha determinada.
8-Todos los clientes que realizaron almenos un alquiler en una fecha determinada.
9-Listar juegos ordenados por importe(descendente) utilizando metodo de burbuja mas eficiente.
10-Listar todos los clientes ordenados por apellido (ascendente), utilizando el metodo de inserción.

*/
