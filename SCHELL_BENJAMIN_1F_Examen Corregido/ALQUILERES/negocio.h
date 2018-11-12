#ifndef negocio_H_INCLUDED
#define negocio_H_INCLUDED


 typedef struct{

    int codJuego;
    char descripcion[51];
    float importe;
    int isEmpty;
    int contAlquileres;

}eJuegos;

 typedef struct{

    int codCliente;
    char apellido[51];
    char nombre[51];
    char domicilio[51];
    char telefono[51];
    int isEmpty;
    int contAlquileres;

}eClientes;

typedef struct{

   char dia[3];
   char mes[3];
   char anio[5];

} eFecha;

 typedef struct{

    int codAlquiler;
    int codJuego;
    int codCliente;
    eFecha fecha;
    int isEmpty;

}eAlquileres;



void initArrayClientes(eClientes array[],int len,int value);
void initArrayJuegos(eJuegos array[],int len,int value);
void initArrayAlquileres(eAlquileres array[],int len,int value);
int showMenuPrincipal();
int showMenuJuegos();
int showMenuClientes();
int buscarLugarJuegos(eJuegos array[],int len,int value);
int buscarLugarClientes(eClientes array[],int len,int value);
int buscarLugarAlquileres(eAlquileres array[],int len,int value);
int cargarJuegos(eJuegos array[], int len);
int cargarClientes(eClientes array[], int len);
int cargarAlquileres(eAlquileres array[], int len,eClientes array1[], int len1,eJuegos array2[], int len2);
int buscarClientePorId(eClientes array[],int len,int value);
int buscarJuegoPorId(eJuegos array[],int len,int value);
void ordenarJuegos(eJuegos array[],int len);
void printArrayJuegos(eJuegos array[],int len);
void ordenarClientes(eClientes array[],int len);
void printArrayClientes(eClientes array[],int len);
int modificarJuegos(eJuegos array[], int len);
int modificarClientes(eClientes array[], int len);
int bajaDeJuegos(eJuegos array[], int len);
int bajaDeClientes(eClientes array[], int len);
int showMenuInformes();
void promedioTotalDeJuegos(eJuegos array[],int len);
void juegosNoSuperanPromedio(eJuegos array[],int len);
int listarClientesPorJuegoAlquilado(eAlquileres array[],int len ,eJuegos array1[],int len1,eClientes array2[],int len2);
int listarJuegosAlquiladosPorCliente(eAlquileres array[],int len ,eJuegos array1[],int len1,eClientes array2[],int len2);
void listarJuegosAlquiladosPorFecha(eAlquileres array[],int len ,eJuegos array1[],int len1);
void listarClientesPorFechaAlquiler(eAlquileres array[],int len ,eClientes array1[],int len1);
void listarJuegosMenosAlquilados(eJuegos array[], int len);
void listarClientesMasAlquileres(eClientes array[], int len);
void listarJuegosOrdenamientoEficiente(eJuegos array[],int len);
void listarClientesOrdenamientoInsercion(eClientes array[],int len);






#endif

