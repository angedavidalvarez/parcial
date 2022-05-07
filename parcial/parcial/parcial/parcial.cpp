// parcial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include<iostream>
#include<mysql.h>
#include"dbconexion.h"
#include"estudiante.h"
using namespace std;
int main()
{
    int op;
    cout << "_____Bienvenido____" << endl;
    cout << "1. Mostrar la tabla" << endl;
    cout << "2. Insertar nuevo dato" << endl;
    cout << "3. Modificar Dato" << endl;
    cout << "4. Eliminar Dato" << endl;
    cout << "Opcion: ";
    cin >> op;
    if (op == 1) {
        estudiante e = estudiante();
        e.leer();
    }
    if (op == 2) {
        string nombre, apellido, direccion, genero, fecha, correo;
        int telefono, id, carne;
        cout << "Ingrese el nombre" << endl;
        cin >> nombre;
        cout << "Ingrese el Apellido" << endl;
        cin >> apellido;
        cout << "Ingrese la Direccion" << endl;
        cin >> direccion;
        cout << "Ingrese el Correo" << endl;
        cin >> correo;
        cout << "Ingrese el Telefono" << endl;
        cin >> telefono;
        cout << "Ingrese el carne" << endl;
        cin >> carne;
        cout << "Ingrese el Genero ( M = Mascululino, F= Femenino) " << endl;
        cin >> genero;
        cout << "Ingrese Fecha de Nacimiento" << endl;
        cin >> fecha;
        estudiante e = estudiante(nombre, apellido, direccion, genero, correo, fecha, telefono, carne);
        e.crear();
        system("PAUSE");
    }
    if (op == 3) {
        string nombre, apellido, direccion, genero, fecha, correo;
        int telefono, id, carne;
        cout << "Ingrese el id que desea modificar" << endl;
        cin >> id;
        cout << "Ingrese el nombre" << endl;
        cin >> nombre;
        cout << "Ingrese el Apellido" << endl;
        cin >> apellido;
        cout << "Ingrese la Direccion" << endl;
        cin >> direccion;
        cout << "Ingrese el Correo" << endl;
        cin >> correo;
        cout << "Ingrese el Telefono" << endl;
        cin >> telefono;
        cout << "Ingrese el carne" << endl;
        cin >> carne;
        cout << "Ingrese el Genero ( M = Mascululino, F= Femenino) " << endl;
        cin >> genero;
        cout << "Ingrese Fecha de Nacimiento" << endl;
        cin >> fecha;
        estudiante e = estudiante(nombre, apellido, direccion, genero, correo, fecha, telefono, carne);
        e.actualizar(id);
        system("PAUSE");
    }
    if (op == 4) {
        string nombre, apellido, direccion, genero, fecha, correo;
        int telefono, id, carne;
        cout << "Ingrese el id que desea modificar" << endl;
        cin >> id;
        estudiante e = estudiante();
        e.Eliminar(id);
        system("PAUSE");
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
