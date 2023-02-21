#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
	int numarticulo1, numarticulo2, numarticulo3; //numero del articulo 
char nom1[50], nom2[50], nom3 [50]; //nombre del videojuego 
int anio1, anio2, anio3; //año 
char clas1[50], clas2[50], clas3 [50]; //clasificacion
char carac1[100], carac2[100], carac3[100]; //caracteristicas
char desc1[150], desc2[150], desc3[150]; //descripcion 
char gen1[50], gen2[50], gen3[50]; // genero 
float preciounit1, preciounit2, preciounit3; //precio unitario
float impuesto1 = 0; float impuesto2 = 0; float impuesto3 = 0;
float total1, total2, total3;
int opcion=0;


	cout << "Bienvenido **nombre de la tienda**" << endl;
	cout << "----------------------------------------------" << endl;
	cout << " " << endl;
	cout << "Escoja la opcion que desea realizar" << endl;
	cout << " " << endl;
	cout << "1) Hacer pedidos " << endl;
	cout << "2) Limpiar pantalla " << endl;
	cout << "3) Salir " << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		cout << "Ingrese el numero del articulo " << endl;
		cin >> numarticulo1;

		cout << "Ingrese el nombre del videojuego : " << endl;
		cin >> nom1;

		cout << "Ingrese el anio: " << endl;
		cin >> anio1;

		cout << "Ingrese la clasificacion: " << endl;
		cin >> clas1;

		cout << "Ingrese las características: " << endl;
		cin >> carac1;

   cout << "Ingrese la descripcion: " << endl;
		cin >> desc1;

   cout << "Ingrese el genero: " << endl;
		cin >> gen1;

   cout << "Ingrese el precio: " << endl;
		cin >> preciounit1;
		
  impuesto1 = preciounit1*0.16;
  total1 = impuesto1+preciounit1;
   cout << "Su total es de: " << total1 <<endl;
cout << "-----------------------------------" << endl;
cout << "Ingrese el numero del articulo " << endl;
		cin >> numarticulo2;

		cout << "Ingrese el nombre del videojuego : " << endl;
		cin >> nom2;

		cout << "Ingrese el anio: " << endl;
		cin >> anio2;

		cout << "Ingrese la clasificacion: " << endl;
		cin >> clas2;

		cout << "Ingrese las características: " << endl;
		cin >> carac2;

   cout << "Ingrese la descripcion: " << endl;
		cin >> desc2;

   cout << "Ingrese el genero: " << endl;
		cin >> gen2;

   cout << "Ingrese el precio: " << endl;
		cin >> preciounit2;
		
  impuesto2 = preciounit2*0.16;
  total2 = impuesto2+preciounit2;
   cout << "Su total es de: " << total2 <<endl;
cout << "-----------------------------------" << endl;
cout << "Ingrese el numero del articulo " << endl;
		cin >> numarticulo3;

		cout << "Ingrese el nombre del videojuego : " << endl;
		cin >> nom3;

		cout << "Ingrese el anio: " << endl;
		cin >> anio3;

		cout << "Ingrese la clasificacion: " << endl;
		cin >> clas3;

		cout << "Ingrese las características: " << endl;
		cin >> carac3;

   cout << "Ingrese la descripcion: " << endl;
		cin >> desc3;

   cout << "Ingrese el genero: " << endl;
		cin >> gen3;

   cout << "Ingrese el precio: " << endl;
		cin >> preciounit3;
		
  impuesto3 = preciounit3*0.16;
  total3 = impuesto3+preciounit3;
   cout << "Su total es de: " << total3 <<endl;
cout << "-----------------------------------" << endl;

   cout << "Volviendo al inicio" << endl;

			system("pause");

			system("cls");
			return main();

			break;

	case 2:
	
			cout << "Volviendo al inicio" << endl;

			system("pause");

			system("cls");
			return main();

			break;

	case 3:
		cout << "saliendo..." << endl;
			break;

		default:
			cout << "ingrese una opcion valida por favor" << endl;
			return main();

	}


	return 0;
}