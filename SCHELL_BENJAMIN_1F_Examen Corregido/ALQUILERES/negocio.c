#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "negocio.h"
#include "utn.h"




/////////////////////////////////////////////////////////////////////////////////

 /**
 * \brief Inicializa el array de clientes con el valor indicado
 * \param array, es el array a ser inicializado
 * \param len, es el tope de carga del array
 * \param value, es el valor que sera cargado en cada posición "i" del array mencionado
 * \return void, la funcion no requiere devolver ningun valor
 *
 */
void initArrayClientes(eClientes array[],int len,int value)
{
    int i;
    for(i=0;i < len; i++)
    {
        array[i].isEmpty = value;

    }
}

/////////////////////////////////////////////////////////////////////////////////

 /**
 * \brief Inicializa el array de juegos con el valor indicado
 * \param array, es el array a ser inicializado
 * \param len, es el tope de carga del array
 * \param value, es el valor que sera cargado en cada posición "i" del array mencionado
 * \return void, la funcion no requiere devolver ningun valor
 *
 */

void initArrayJuegos(eJuegos array[],int len,int value)
{
    int i;
    for(i=0;i < len; i++)
    {
        array[i].isEmpty = value;

    }

}

/////////////////////////////////////////////////////////////////////////////////

 /**
 * \brief Inicializa el array de alquileres con el valor indicado
 * \param array, es el array a ser inicializado
 * \param len, es el tope de carga del array
 * \param value, es el valor que sera cargado en cada posición "i" del array mencionado
 * \return void, la funcion no requiere devolver ningun valor
 *
 */

void initArrayAlquileres(eAlquileres array[],int len,int value)
{
    int i;
    for(i=0;i < len; i++)
    {
        array[i].isEmpty = value;

    }
}

/////////////////////////////////////////////////////////////////////////////////

  /**
 * \brief Muestra un menu de opciones enumeradas y devuelve un entero
 * \param opcionMenu, variable que guarda el numero de la opcion seleccionada
 * \return cero si la opcion es invalida, sino devuelve el numero de la opcion seleccionada
 *
 */

 int showMenuPrincipal()
 {
     int opcionMenu;
     system("cls");
     printf("\n    -----ADMINISTRAR NEGOCIO DE ALQUILERES-----\n\nPor favor, ingrese el numero correspondiente a la opcion deseada:");
     opcionMenu = getInt("\n\n\n1 - JUEGOS \n2 - CLIENTES \n3 - ALQUILERES\n4 - INFORMES\n5 - SALIR\n\n\n");
     if(opcionMenu!=1&&opcionMenu!=2&&opcionMenu!=3&&opcionMenu!=4&&opcionMenu!=5)
     {
         printf("\n\nOpcion invalida!!");
         getch();
         fflush(stdin);
         return 0;
     }
     return opcionMenu;
 }


/////////////////////////////////////////////////////////////////////////////////

  /**
 * \brief Muestra un menu de opciones enumeradas y devuelve un entero
 * \param opcionMenu, variable que guarda el numero de la opcion seleccionada
 * \return cero si la opcion es invalida, sino devuelve el numero de la opcion seleccionada
 *
 */

 int showMenuJuegos()
 {
     int opcionMenu;
     system("cls");
     printf("\n    -----ADMINISTRAR JUEGOS-----\n\nPor favor, ingrese el numero correspondiente a la opcion deseada:");
     opcionMenu = getInt("\n\n\n1 - ALTAS \n2 - MODIFICAR \n3 - BAJA\n4 - LISTAR\n5 - VOLVER AL MENU PRINCIPAL\n\n\n");
     if(opcionMenu!=1&&opcionMenu!=2&&opcionMenu!=3&&opcionMenu!=4&&opcionMenu!=5)
     {
         printf("\n\nOpcion invalida!!");
         getch();
         fflush(stdin);
         return 0;
     }
     return opcionMenu;
 }


/////////////////////////////////////////////////////////////////////////////////

  /**
 * \brief Muestra un menu de opciones enumeradas y devuelve un entero
 * \param opcionMenu, variable que guarda el numero de la opcion seleccionada
 * \return cero si la opcion es invalida, sino devuelve el numero de la opcion seleccionada
 *
 */

 int showMenuClientes()
 {
     int opcionMenu;
     system("cls");
     printf("\n    -----ADMINISTRAR CLIENTES-----\n\nPor favor, ingrese el numero correspondiente a la opcion deseada:");
     opcionMenu = getInt("\n\n\n1 - ALTAS \n2 - MODIFICAR \n3 - BAJA\n4 - LISTAR\n5 - VOLVER AL MENU PRINCIPAL\n\n\n");
     if(opcionMenu!=1&&opcionMenu!=2&&opcionMenu!=3&&opcionMenu!=4&&opcionMenu!=5)
     {
         printf("\n\nOpcion invalida!!");
         getch();
         fflush(stdin);
         return 0;
     }
     return opcionMenu;
 }


/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief Busca el primer espacio disponible en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \param value Es el valor que se busca
 * \return Si no encuentra coincidencias (-1) y si la hay, devuelve la posición de la misma
 *
 */
int buscarLugarJuegos(eJuegos array[],int len,int value)
{
    int i;
    for(i=0;i < len; i++)
    {
        if(array[i].isEmpty == value)
        {
            return i;
        }
    }
    return -1;
}


/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief Busca el primer espacio disponible en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \param value Es el valor que se busca
 * \return Si no encuentra coincidencias (-1) y si la hay, devuelve la posición de la misma
 *
 */
int buscarLugarClientes(eClientes array[],int len,int value)
{
    int i;
    for(i=0;i < len; i++)
    {
        if(array[i].isEmpty == value)
        {
            return i;
        }
    }
    return -1;
}


/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief Busca el primer espacio disponible en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \param value Es el valor que se busca
 * \return Si no encuentra coincidencias (-1) y si la hay, devuelve la posición de la misma
 *
 */
int buscarLugarAlquileres(eAlquileres array[],int len,int value)
{
    int i;
    for(i=0;i < len; i++)
    {
        if(array[i].isEmpty == value)
        {
            return i;
        }
    }
    return -1;
}


/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief cargar datos del tipo "eJuegos" en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \return Si la carga es exitosa  devuelve 1, sino devuelve 0
 *
 */

int cargarJuegos(eJuegos array[], int len)
{
    int indiceJuego;

    indiceJuego=buscarLugarJuegos(array,len,-1);

        if(indiceJuego==-1)
            {
              printf("No hay espacio para cargar mas juegos!!");
              return 0;
            }

        printf("\n\nALTA DE NUEVOS JUEGOS\n\n");
        if (!getStringLetras("Ingrese descripcion del juego: \n\n",array[indiceJuego].descripcion))
           {
             printf ("La descripcion debe estar compuesta solo por letras\n");
             fflush(stdin);
             getch();
             return 0;
           }

        array[indiceJuego].importe=getFloat("Ingrese el importe del juego: \n\n");

        if (array[indiceJuego].importe<0)
           {
             printf ("El importe debe ser mayor a cero...\n");
             getch();
             return 0;
           }
         array[indiceJuego].codJuego=(indiceJuego+1);
         array[indiceJuego].isEmpty=1;
         array[indiceJuego].contAlquileres=0;

         printf("\nJUEGO CARGADO CON EXITO!!\n\nPresione una tecla para continuar...");
         getch();

 return 1;


}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief cargar datos del tipo "eClientes" en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \return Si la carga es exitosa  devuelve 1, sino devuelve 0
 *
 */

int cargarClientes(eClientes array[], int len)
{
    int indiceCliente;

    indiceCliente=buscarLugarClientes(array,len,-1);

        if(indiceCliente==-1)
            {
              printf("No hay espacio para cargar mas clientes!!");
              return 0;
            }

        printf("\n\nALTA DE NUEVOS CLIENTES\n\n");
        if (!getStringLetras("Ingrese el apellido: \n\n",array[indiceCliente].apellido))
           {
             printf ("El apellido debe estar compuesto solo por letras\n");
             fflush(stdin);
             getch();
             return 0;
           }
        if (!getStringLetras("Ingrese el nombre: \n\n",array[indiceCliente].nombre))
           {
             printf ("El nombre debe estar compuesto solo por letras\n");
             fflush(stdin);
             getch();
             return 0;
           }
        getString("Ingrese el domicilio:\n\n",array[indiceCliente].domicilio);
        if(esAlfaNumerico(array[indiceCliente].domicilio)==0)
           {
             printf ("La direccion debe estar compuesto solo por letras, numeros y espacios...\n");
             fflush(stdin);
             getch();
             return 0;
           }

        if (!getStringNumeros("Ingrese el telefono: \n\n",array[indiceCliente].telefono))
           {
             printf ("El telefono debe estar compuesto solo por numeros\n");
             fflush(stdin);
             getch();
             return 0;
           }

         array[indiceCliente].codCliente=(indiceCliente+1);
         array[indiceCliente].isEmpty=1;
         array[indiceCliente].contAlquileres=0;

         printf("\nCLIENTE CARGADO CON EXITO!!\n\nPresione una tecla para continuar...");
         getch();

 return 1;

}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief carga datos del tipo "eFecha"
 * \param no recibe parametros
 * \return Si la carga es exitosa  devuelve la fecha cargada, sino devuelve la fecha 00-00-0000
 *
 */


 eFecha cargarFecha()
 {
    eFecha auxiliarFecha;
    eFecha errorFecha={"00","00","0000"};

        if (!getStringNumeros("\t\t***FECHA***\n\nIngrese dos numeros para el dia: ",auxiliarFecha.dia)||(strlen(auxiliarFecha.dia))!=2)
           {
             printf ("El dia debe estar compuesto por dos caracteres numericos\n");
             fflush(stdin);
             getch();
             return errorFecha;
           }
        if(atoi(auxiliarFecha.dia)<1||atoi(auxiliarFecha.dia)>31)
           {
             printf ("DIA INVALIDO\n");
             fflush(stdin);
             getch();
             return errorFecha;
           }

        if (!getStringNumeros("Ingrese dos numeros para el mes: ",auxiliarFecha.mes)||(strlen(auxiliarFecha.mes))!=2)
           {
             printf ("El mes debe estar compuesto por dos caracteres numericos\n");
             fflush(stdin);
             getch();
             return errorFecha;
           }
        if(atoi(auxiliarFecha.mes)<1||atoi(auxiliarFecha.mes)>12)
           {
             printf ("MES INVALIDO\n");
             fflush(stdin);
             getch();
             return errorFecha;
           }

        if (!getStringNumeros("Ingrese cuatro numeros para el anio: ",auxiliarFecha.anio)||(strlen(auxiliarFecha.anio))!=4)
           {
             printf ("El anio debe estar compuesto por cuatro caracteres numericos\n");
             fflush(stdin);
             getch();
             return errorFecha;
           }
        if(atoi(auxiliarFecha.anio)<1||atoi(auxiliarFecha.anio)>3000)
           {
             printf ("A%cO INVALIDO\n",165);
             fflush(stdin);
             getch();
             return errorFecha;
           }

   return auxiliarFecha;

 }


/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief cargar datos del tipo "eAlquileres" en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \return Si la carga es exitosa  devuelve 1, sino devuelve 0
 *
 */

int cargarAlquileres(eAlquileres array[],int len,eClientes array1[],int len1,eJuegos array2[],int len2)
{
    int indiceAlquiler;
    int auxiliar1;
    int auxiliar2;
    eFecha fecha;

    indiceAlquiler=buscarLugarAlquileres(array,len,-1);

        if(indiceAlquiler==-1)
            {
              printf("No hay espacio para cargar mas alquileres!!");
              exit(1);
            }

        printf("\n----CARGA DE ALQUILERES----\n\n\n");
        fecha=cargarFecha();

         if((strcmp(fecha.anio,"0000"))==0)
         {
             return 0;
         }
         array[indiceAlquiler].fecha=fecha;
         auxiliar1=getInt("Ingrese el codigo del cliente...\n\n");
         array[indiceAlquiler].codCliente=array1[buscarClientePorId(array1,len1,auxiliar1)].codCliente;
         if(array[indiceAlquiler].codCliente==0)
         {
             return 0;
         }
         array1[auxiliar1-1].contAlquileres ++;

         auxiliar2=getInt("Ingrese el codigo del juego...\n\n");
         array[indiceAlquiler].codJuego=array2[buscarJuegoPorId(array2,len2,auxiliar2)].codJuego;
         if(array[indiceAlquiler].codJuego==0)
         {
             return 0;
         }
         array2[auxiliar2-1].contAlquileres ++;

         array[indiceAlquiler].codAlquiler=(indiceAlquiler+1);
         array[indiceAlquiler].isEmpty=1;

         printf("\nALQUILER CARGADO CON EXITO!!\n\nPresione una tecla para continuar...");
         getch();

 return 1;

}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief Busca los datos de un cliente basandose en el ID asignado al mismo
 * \param array, es el array donde se buscara el dato
 * \param len, Indica la logitud del array mencionado
 * \param value, es el ID que se esta buscando
 * \return -1 si no lo encuentra, el indice "i" del array si lo encuentra
 *
 */
int buscarClientePorId(eClientes array[],int len,int value)
{
    int i;
    int flag=0;

    for(i=0;i < len; i++)
    {
        if(array[i].codCliente == value&&array[i].isEmpty != -1)
        {

            printf("\nCliente cargado correctamente\n\nPresione una tecla para continuar\n");
            flag=1;
            getch();
            break;
        }
    }
    if(flag==0)
    {
       printf("Cliente no econtrado\n");
       getch();
       return -1;


    }
 return i;

}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief Busca los datos de un juego basandose en el ID asignado al mismo
 * \param array, es el array donde se buscara el dato
 * \param len, Indica la logitud del array mencionado
 * \param value, es el ID que se esta buscando
 * \return -1 si no lo encuentra, el indice "i" del array si lo encuentra
 *
 */
int buscarJuegoPorId(eJuegos array[],int len,int value)
{
    int i;
    int flag=0;

    for(i=0;i < len; i++)
    {
        if(array[i].codJuego == value&&array[i].isEmpty != -1)
        {

            printf("\nJuego cargado correctamente\n\nPresione una tecla para continuar\n");
            flag=1;
            getch();
            break;
        }
    }
    if(flag==0)
    {
       printf("Juego no econtrado\n");
       getch();
       return -1;


    }
 return i;

}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief ordena un array del tipo eJuegos por importe y descripción
 * \param array, es el array a ordenar
 * \param len, Indica la logitud del array mencionado
 * \return 0
 *
 */
void ordenarJuegos(eJuegos array[],int len)
{
    int i,j;
    eJuegos auxiliar;

                for(i=0; i < len - 1; i++)
                {
                    if(array[i].isEmpty == -1)
                    {
                        continue;
                    }
                    for(j=i+1; j < len; j++)
                    {
                        if(array[j].isEmpty == -1)
                        {
                            continue;
                        }
                        if(stricmp(array[i].descripcion,array[j].descripcion) > 0)
                        {
                            auxiliar = array[j];
                            array[j] = array[i];
                            array[i] = auxiliar;
                        }
                    }
                }
                for(i=0; i < len - 1; i++)
                {
                    if(array[i].isEmpty == -1)
                    {
                        continue;
                    }
                    for(j=i+1; j < len; j++)
                    {
                        if(array[j].isEmpty == -1)
                        {
                            continue;
                        }
                        if((array[i].importe)>(array[j].importe))
                        {
                            auxiliar = array[j];
                            array[j] = array[i];
                            array[i] = auxiliar;
                        }
                    }
                }
}
/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief imprime un array del tipo eJuegos
 * \param array, es el array que se mostrara
 * \param len, longitud del array
 */

void printArrayJuegos(eJuegos array[],int len)

{
    int i;
    printf(" CODIGO-IMPORTE-DESCRIPCION\n\n");
                    for(i=0;i<len;i++)
                      {
                        if(array[i].isEmpty!=(-1))
                              {
                                printf("  %d   - %.2f  - %s\n\n",array[i].codJuego,array[i].importe,array[i].descripcion);
                              }
                      }
                printf("\n\nPresione una tecla para continuar...");
                getch();

}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief ordena un array del tipo eClientes por apellido y nombre
 * \param array, es el array a ordenar
 * \param len, Indica la logitud del array mencionado
 * \return 0
 *
 */
void ordenarClientes(eClientes array[],int len)
{
    int i,j;
    eClientes auxiliar;

                for(i=0; i < len - 1; i++)
                {
                    if(array[i].isEmpty == -1)
                    {
                        continue;
                    }
                    for(j=i+1; j < len; j++)
                    {
                        if(array[j].isEmpty == -1)
                        {
                            continue;
                        }
                        if(stricmp(array[i].nombre,array[j].nombre) > 0)
                        {
                            auxiliar = array[j];
                            array[j] = array[i];
                            array[i] = auxiliar;
                        }
                    }
                }
                for(i=0; i < len - 1; i++)
                {
                    if(array[i].isEmpty == -1)
                    {
                        continue;
                    }
                    for(j=i+1; j < len; j++)
                    {
                        if(array[j].isEmpty == -1)
                        {
                            continue;
                        }
                        if(stricmp(array[i].apellido,array[j].apellido) > 0)
                        {
                            auxiliar = array[j];
                            array[j] = array[i];
                            array[i] = auxiliar;
                        }
                    }
                }
}
/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief imprime un array del tipo eClientes
 * \param array, es el array que se mostrara
 * \param len, longitud del array
 */

void printArrayClientes(eClientes array[],int len)

{
    int i;
    printf(" CODIGO-APELLIDO-NOMBRE-DOMICILIO-TELEFONO\n\n");
                    for(i=0;i<len;i++)
                      {
                        if(array[i].isEmpty!=(-1))
                              {
                                printf(" %d    - %s - %s - %s - %s \n\n",array[i].codCliente,array[i].apellido,array[i].nombre,array[i].domicilio,array[i].telefono);
                              }
                      }
                printf("\n\nPresione una tecla para continuar...");
                getch();

}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief modifica datos del tipo "eJuegos" en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \return Si la carga es exitosa  devuelve 1, sino devuelve 0
 *
 */

int modificarJuegos(eJuegos array[], int len)
{
    int indiceJuego;
    int auxiliar;

    auxiliar=getInt("Ingrese el codigo del juego a modificar:\n\n");
    indiceJuego=buscarJuegoPorId(array,len,auxiliar);

    if(indiceJuego==-1)
    {
        return 0;
    }

        printf("\n\nMODIFICACION DE JUEGOS\n\n");
        if (!getStringLetras("Ingrese descripcion del juego: \n\n",array[indiceJuego].descripcion))
           {
             printf ("La descripcion debe estar compuesto solo por letras\n");
             fflush(stdin);
             getch();
             return 0;
           }

        array[indiceJuego].importe=getFloat("Ingrese el importe del juego: \n\n");

        if (array[indiceJuego].importe<0)
           {
             printf ("El importe debe ser mayor a cero...\n");
             getch();
             return 0;
           }
         printf("\nJUEGO MODIFICADO CON EXITO!!\n\nPresione una tecla para continuar...");
         getch();

 return 1;

}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief modifica datos del tipo "eClientes" en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \return Si la carga es exitosa  devuelve 1, sino devuelve 0
 *
 */

int modificarClientes(eClientes array[], int len)
{
    int indiceCliente;
    int auxiliar;

    auxiliar=getInt("Ingrese el codigo del cliente a modificar:\n\n");
    indiceCliente=buscarClientePorId(array,len,auxiliar);

    if(indiceCliente==-1)
    {
        return 0;
    }

        printf("\n\nMODIFICACION DE CLIENTES\n\n");
         if (!getStringLetras("Ingrese el apellido: \n\n",array[indiceCliente].apellido))
           {
             printf ("El apellido debe estar compuesto solo por letras\n");
             fflush(stdin);
             getch();
             return 0;
           }
        if (!getStringLetras("Ingrese el nombre: \n\n",array[indiceCliente].nombre))
           {
             printf ("El nombre debe estar compuesto solo por letras\n");
             fflush(stdin);
             getch();
             return 0;
           }
        getString("Ingrese el domicilio:\n\n",array[indiceCliente].domicilio);
        if(esAlfaNumerico(array[indiceCliente].domicilio)==0)
           {
             printf ("La direccion debe estar compuesto solo por letras, numeros y espacios...\n");
             fflush(stdin);
             getch();
             return 0;
           }

        if (!getStringNumeros("Ingrese el telefono: \n\n",array[indiceCliente].telefono))
           {
             printf ("El telefono debe estar compuesto solo por numeros\n");
             fflush(stdin);
             getch();
             return 0;
           }

         printf("\nCLIENTE MODIFICADO CON EXITO!!\n\nPresione una tecla para continuar...");
         getch();

 return 1;

}

/////////////////////////////////////////////////////////////////////////////////


/**
 * \brief da la baja lógica a datos del tipo "eJuegos" en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \return Si la baja es exitosa devuelve 1, sino devuelve 0
 *
 */

int bajaDeJuegos(eJuegos array[], int len)
{
    int indiceJuego;
    int auxiliar;
    char opcion;

    system("cls");
    auxiliar=getInt("Ingrese el codigo del juego que desea eliminar:\n\n");
    indiceJuego=buscarJuegoPorId(array,len,auxiliar);

        if(indiceJuego==-1)
    {
        return 0;
    }

        printf("\n\nELIMINACION DE JUEGOS\n\n");
        opcion=getChar("Presione s para confirmar, para cancelar presione cualquier otra tecla:\n\n");
        if(opcion=='s')
        {
            array[indiceJuego].isEmpty=-1;
            printf("\nJUEGO ELIMINADO CON EXITO!!\n\nPresione una tecla para continuar...");
            getch();
            return 1;
        }
        else
        {
            printf("Baja Cancelada");
            return 0;
        }

}

/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief da la baja lógica a datos del tipo "eClientes" en el array indicado
 * \param array, es el array en se buscará
 * \param len, logitud del array utilizado
 * \return Si la baja es exitosa devuelve 1, sino devuelve 0
 *
 */

int bajaDeClientes(eClientes array[], int len)
{
    int indiceCliente;
    int auxiliar;
    char opcion;

    system("cls");
    auxiliar=getInt("Ingrese el codigo del cliente que desea eliminar:\n\n");
    indiceCliente=buscarClientePorId(array,len,auxiliar);

    if(indiceCliente==-1)
    {
        return 0;
    }

        printf("\n\nELIMINACION DE CLIENTES\n\n");
        opcion=getChar("Presione s para confirmar, para cancelar presione cualquier otra tecla:\n\n");
        if(opcion=='s')
        {
            array[indiceCliente].isEmpty=-1;
            printf("\nCLIENTE ELIMINADO CON EXITO!!\n\nPresione una tecla para continuar...");
            getch();
            return 1;
        }
        else
        {
            printf("Baja Cancelada");
            return 0;
        }

}

/////////////////////////////////////////////////////////////////////////////////

  /**
 * \brief Muestra un menu de opciones enumeradas y devuelve un entero
 * \param opcionMenu, variable que guarda el numero de la opcion seleccionada
 * \return cero si la opcion es invalida, sino devuelve el numero de la opcion seleccionada
 *
 */

 int showMenuInformes()
 {
     int opcionMenu;
     system("cls");
     printf("\n    -----INFORMES-----\n\n\nPor favor, ingrese el numero correspondiente a la opcion deseada:\n\n\n");
     printf("1 - Promedio y total de importes de juegos alquilados.\n");
     printf("2 - Cantidad de juegos con importe inferior al promedio del item aterior.\n");
     printf("3 - Listar clientes que alquilaron un determinado juego.\n");
     printf("4 - Listar juegos alquilados por un determinado cliente.\n");
     printf("5 - Listar juegos menos alquilados.\n");
     printf("6 - Listar cliente con mas alquileres.\n");
     printf("7 - Listar juegos alquilados por fecha.\n");
     printf("8 - Listar clientes que alquilaron al menos una vez en la fecha indicada.\n");
     printf("9 - Listar juegos ordenados por importe descendente.\n");
     printf("10 - Listar clientes ordenados por apellido ascendente.\n");
     printf("11 - Salir.\n");

     opcionMenu = getInt("\nIngrese la opcion deseada...\n\n");
     if((opcionMenu<1)||(opcionMenu>11))

     {
         printf("\n\nOpcion invalida!!");
         getch();
         fflush(stdin);
         return 0;
     }
     return opcionMenu;
 }


/////////////////////////////////////////////////////////////////////////////////


/**
 * \brief calcula promedio y total de juegos alquilados
 * \param array, es el array a ordenar
 * \param len, Indica la logitud del array mencionado
 * \return nada
 *
 */
void promedioTotalDeJuegos(eJuegos array[],int len)
{
    int i;
    float contador=0;
    float total,promedio;
    float acumulador=0;

                for(i=0; i < len; i++)
                {
                    if(array[i].isEmpty != -1)
                    {
                        acumulador=suma(acumulador,array[i].importe);
                        contador++;
                    }


                }
                total=acumulador;
                promedio=division(total, contador);

                printf("\n\nEl total de importes de juegos alquilados es: %.2f\n\nEl promedio de los importes de los juegos alquilados es: %.2f",total,promedio);
                printf("\n\nPresione una tecla para continuar...");
                getch();


}
/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief calcula importes de juegos que no superan el promedio de precios
 * \param array, es el array a ordenar
 * \param len, Indica la logitud del array mencionado
 * \return nada
 *
 */
void juegosNoSuperanPromedio(eJuegos array[],int len)
{
    int i;
    float contador=0;
    float promedio;
    float menosQuePromedio=0;
    float acumulador=0;

                for(i=0; i < len; i++)
                {
                    if(array[i].isEmpty != -1)
                    {
                        acumulador=suma(acumulador,array[i].importe);
                        contador++;
                    }
                }
                promedio=division(acumulador, contador);

                for(i=0; i <= len; i++)
                {
                    if((array[i].isEmpty != -1)&&(array[i].importe<promedio))
                    {
                        menosQuePromedio++;
                    }
                }

                printf("\n\nEl total de importes de juegos que no superan el promedio es: %.2f\n\n",menosQuePromedio);
                printf("\n\nPresione una tecla para continuar...");
                getch();


}
/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief lista los clientes que alquilaron determinado juego
 * \param array(1,2,3), arrays donde se buscan los datos
 * \param len (1,2,3), Indican la logitud de los array invocados
 * \return nada
 *
 */
int listarClientesPorJuegoAlquilado(eAlquileres array[],int len ,eJuegos array1[],int len1,eClientes array2[],int len2)
{
    int i,j;
    int value;
    int value2;
    int flag=0;


    value=getInt("Ingrese el codigo del Juego...\n\n");

    if((value2=buscarJuegoPorId(array1,len1,value))== -1)
      {
         return -1;
      }//Validación

                for(i=0; i < len ; i++)
                {
                    if(array[i].isEmpty == -1)
                    {
                        continue;
                    }
                    if(array[i].codJuego==array1[value2].codJuego)
                    {
                        flag=1;
                        for(j=0;j<len2;j++)
                        {
                         if(array2[j].isEmpty == -1)
                          {
                            continue;
                          }
                          if(array2[j].codCliente==array[i].codCliente)
                          {
                              printf("%s  %s  \n",array2[j].apellido, array2[j].nombre);

                          }

                        }
                    }

                }
                getch();
                if(flag==0)
                {
                    printf("Este juego aun no ha sido alquilado!!");
                    getch();
                    return -1;

                }
  return 1;

}
/////////////////////////////////////////////////////////////////////////////////

/**
 * \brief lista los juegos que alquilo un determinado cliente
 * \param array(1,2,3), arrays donde se buscan los datos
 * \param len (1,2,3), Indican la logitud de los array invocados
 * \return nada
 *
 */
int listarJuegosAlquiladosPorCliente(eAlquileres array[],int len ,eJuegos array1[],int len1,eClientes array2[],int len2)
{
    int i,j;
    int value;
    int value2;
    int flag=0;

    value=getInt("Ingrese el codigo del Cliente...\n\n");
    if((value2=buscarClientePorId(array2,len2,value))== -1)
       {
         return -1;
       }//Validación



                for(i=0; i < len ; i++)
                {
                    if(array[i].isEmpty == -1)
                    {
                        continue;
                    }
                    if(array[i].codCliente == array2[value2].codCliente)
                    {
                        flag=1;
                        for(j=0; j < len1; j++)
                        {
                         if(array1[j].isEmpty == -1)
                          {
                            continue;
                          }
                          if(array1[j].codJuego==array[i].codJuego)
                          {
                              printf("%s  \n",array1[j].descripcion);

                          }

                        }
                    }

                }
                getch();
                if(flag==0)
                {
                    printf("Este cliente no realizo alquileres aun!!");
                    getch();
                    return -1;

                }
  return 1;

}
/////////////////////////////////////////////////////////////////////////////////


/**
 * \brief lista juegos alquilados en determinada fecha
 * \param array(1,2), arrays donde se buscan los datos
 * \param len (1,2), Indican la logitud de los array invocados
 * \return nada
 *
 */
void listarJuegosAlquiladosPorFecha(eAlquileres array[],int len ,eJuegos array1[],int len1)
{
    int i,j;
    int flag=0;
    eFecha auxFecha;

    auxFecha=cargarFecha();

                for(i=0; i < len ; i++)
                {
                    if(array[i].isEmpty == -1)
                    {
                        continue;
                    }
                    if(stricmp(array[i].fecha.dia,auxFecha.dia)==0&&stricmp(array[i].fecha.mes,auxFecha.mes)==0&&stricmp(array[i].fecha.anio,auxFecha.anio)==0)
                    {
                        flag=1;
                        for(j=0; j < len1;j++)
                        {
                         if(array1[j].isEmpty == -1)
                          {
                            continue;
                          }
                          if(array1[j].codJuego==array[i].codJuego)
                          {
                              printf("%s  \n",array1[j].descripcion);
                              getch();

                          }

                        }

                    }

                }

            if (flag==0)
                {
                    printf("No se registran alquileres en la fecha indicada!!");
                    getch();

                }
}
/////////////////////////////////////////////////////////////////////////////////





/**
 * \brief lista juegos alquilados en determinada fecha
 * \param array(1,2), arrays donde se buscan los datos
 * \param len (1,2), Indican la logitud de los array invocados
 * \return nada
 *
 */
void listarClientesPorFechaAlquiler(eAlquileres array[],int len ,eClientes array1[],int len1)
{
    int i,j;
    int flag=0;
    eFecha auxFecha;

    auxFecha=cargarFecha();

                for(i=0; i < len ; i++)
                {
                    if(array[i].isEmpty == -1)
                    {
                        continue;
                    }
                    if(stricmp(array[i].fecha.dia,auxFecha.dia)==0&&stricmp(array[i].fecha.mes,auxFecha.mes)==0&&stricmp(array[i].fecha.anio,auxFecha.anio)==0)
                    {
                        flag=1;
                        for(j=0; j < len1;j++)
                        {
                         if(array1[j].isEmpty == -1)
                          {
                            continue;
                          }
                          if(array1[j].codCliente==array[i].codCliente)
                          {
                              printf("%s\t-%s \n",array1[j].nombre, array1[j].apellido);
                              getch();

                          }

                        }

                    }

                }
                if (flag ==0)
                    {
                        printf("No se registran alquileres en la fecha indicada!!");
                        getch();

                    }

}


/////////////////////////////////////////////////////////////////////////////////


/**
 * \brief lista juegos menos alquilados
 * \param array, array donde se buscan los datos
 * \param len, logitud del array invocado
 * \return nada
 *
 */
void listarJuegosMenosAlquilados(eJuegos array[], int len)
{
    int i,j;
    int menosAlquilado =0;


                for(i=0; i < len ; i++)
                {
                    if(array[i].isEmpty == -1)
                       {
                         continue;
                       }
                    if(menosAlquilado == 0 || array[i].contAlquileres < menosAlquilado )
                       {
                          menosAlquilado= array[i].contAlquileres;
                       }
                }

                for(j=0; j < len; j++)
                {
                    if(array[j].isEmpty == -1)
                       {
                         continue;
                       }
                    if(array[j].contAlquileres == menosAlquilado)
                    {
                        printf("Juego: %s\tCantidad de Alquileres: %d   \n",array[j].descripcion, array[j].contAlquileres);
                    }
                }
                getch();

}
/////////////////////////////////////////////////////////////////////////////////


/**
 * \brief lista clientes con mas alquileres
 * \param array, array donde se buscan los datos
 * \param len, logitud del array invocado
 * \return nada
 *
 */
void listarClientesMasAlquileres(eClientes array[], int len)
{
    int i,j;
    int masAlquileres =0;


                for(i=0; i < len ; i++)
                {
                    if(array[i].isEmpty == -1)
                       {
                         continue;
                       }
                    if(array[i].contAlquileres > masAlquileres)
                       {
                          masAlquileres = array[i].contAlquileres;
                       }
                }

                for(j=0; j < len; j++)
                {
                    if(array[j].isEmpty == -1)
                       {
                         continue;
                       }
                    if(array[j].contAlquileres == masAlquileres)
                    {
                        printf("Cliente: %s %s \tCantidad de Alquileres: %d   \n",array[j].nombre, array[j].apellido, array[j].contAlquileres);
                    }
                }
                getch();

}
/////////////////////////////////////////////////////////////////////////////////


/**
 * \brief lista juegos ordenados por importe descendente
 * \param array, array donde se buscan los datos
 * \param len, logitud del array invocado
 * \return nada
 *
 */



void listarJuegosOrdenamientoEficiente(eJuegos array[],int len)
{
int j, aux;
int flagNoEstaOrdenado = 1;

while(flagNoEstaOrdenado==1)
    {
      flagNoEstaOrdenado = 0;
      for(j = 1; j < len; j++)
        {
         if(array[j].importe > array[j - 1].importe)
            {
                aux = array[j].importe;
                array[j].importe = array[j - 1].importe;
                array[j - 1].importe = aux;
                flagNoEstaOrdenado = 1;
            }
        }
    }
    for (j=0; j < len; j++)
    {
        if(array[j].isEmpty == -1)
            {
              continue;
            }

        printf("%.2f\t-%s \n",array[j].importe, array[j].descripcion);

    }
    getch();

}


/////////////////////////////////////////////////////////////////////////////////


/**
 * \brief lista clientes ordenados por apellido ascendente
 * \param array, array donde se buscan los datos
 * \param len, logitud del array invocado
 * \return nada
 *
 */



void listarClientesOrdenamientoInsercion(eClientes array[],int len)
{

    int i,j;
    eClientes temp;

    for(i=1;i<len;i++)
    {
        temp = array[i];
        j=i-1;
        while(j>=0 && (strcmp(temp.apellido, array[j].apellido)<0))
            {
                array[j+1]= array[j];
                j--;
            }
        array[j+1]=temp;
    }

    for (j=0; j < len; j++)
    {
        if(array[j].isEmpty == -1)
            {
              continue;
            }
        printf("%s\t-%s \n",array[j].apellido, array[j].nombre);

    }
    getch();


}






