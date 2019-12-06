/*
Mariana Castro Payns   A01706038
Proyecto para agregar artículos al inventario de una tienda de cosméticos
06/12/2019
*/

//Incluir bibliotecas y clases
#include <iostream>
#include "producto.h"
#include "tienda.h"

using namespace std;


//Definir el menú principal como void
void menuPrincipal(){
    cout<<"Selecciona una opcion:\n";
    cout<<"1.Agregar productos al inventario\n";
    cout<<"2.Ver resumen de perfumes disponibles\n";
    cout<<"3.Ver resumen de labiales disponibles\n";
    cout<<"4.Ver resumen de sombras disponibles\n";
    cout<<"5.Ver resumen de todos los productos\n";
    cout<<"6.Salir\n";
}

//Definir el segundo menú para lo que se va a agregar
void menuAgregar(){
    cout<<"Que producto deseas agregar:\n";
    cout<<"1.Labial\n";
    cout<<"2.Perfume\n";
    cout<<"3.Sombras\n";
}

//Definir el main
int main(int argc, char* argv[]){

	Tienda tienda;
	tienda.creaPerfume();
	tienda.creaLabial();
	tienda.creaSombras();
	string nombret,marcat,colort,aromat;
	float preciot;
	int tonost;


    int opcion = 0;
    int opciona=0;
    //Poner un while para que el menu se siga imprimiendo hasta que se seleccione salir
    while(opcion < 6 && opcion > -1){
        //Imprimir menu principal
		menuPrincipal();

        //Input para opciones del menu
		cin >> opcion;
        //Establecer un switch para que el menu tenga mayot funcionalidad
		switch(opcion){
            //Definir cada caso segun las opciones del menu principal
			case 2:

                tienda.muestraPerfume();

			break;

			case 3:
                tienda.muestraLabial();

			break;

			case 4:
                tienda.muestraSombras();

			break;

			case 5:
                tienda.muestraSombras();
                tienda.muestraPerfume();
                tienda.muestraLabial();

			break;

			case 1:
			    //Imprimir el menu para agregar articulos al inventario
			    menuAgregar();
			    //Input opcion de agregar
			    cin>>opciona;
                    //Switch para que el segundo menu funcione
                    switch(opciona){
                        //Establecer la opcion 1 y emplear el metodo de agregar
                        case 1:
                            cout<< "Cual es el nombre del labial: \n " ;
                            cin >> nombret;
                            cout<< "De que marca es: \n " ;
                            cin >> marcat;
                            cout<< "Cuanto cuesta:\n " ;
                            cin >> preciot;
                            cout<< "De que color es:\n";
                            cin>> colort;
                            tienda.agregaLabial(nombret, marcat, preciot, colort);
                            cout<<"Producto agregado con EXITO\n";
                           break;

                        //Establecer la opcion 2 y el metodo de agregar
                        case 2:
                            cout<< "Cual es el nombre del perfume: \n " ;
                            cin >> nombret;
                            cout<< "De que marca es: \n " ;
                            cin >> marcat;
                            cout<< "Cuanto cuesta:\n " ;
                            cin >> preciot;
                            cout<< "Que tipo de aroma tiene:\n";
                            cin>> aromat;
                            cout<<"Producto agregado con EXITO\n";
                            tienda.agregaPerfume(nombret, marcat, preciot, aromat);
                        break;

                        //Establecer opcion 3 y el atributo agregar
                        case 3:
                            cout<< "Como se llaman las sombras: \n " ;
                            cin >> nombret;
                            cout<< "De que marca son: \n " ;
                            cin >> marcat;
                            cout<< "Cuanto cuestan:\n " ;
                            cin >> preciot;
                            cout<< "Cuantos tonos tiene:\n";
                            cin>> tonost;
                            cout<<"Producto agregado con EXITO\n";
                            tienda.agregaSombras(nombret, marcat, preciot, tonost);
                        break;
                    }


		}
    }
}


/*
Casos de prueba:
1-
1,1,Melted,TooFaced,520.0,cafe
1,2,Colors Pink,Benetton,920,fresco
1,3,Naked2,TooFaced,1100.00,12
5
El output deberia de ser:
Las sombras Modern Renaissance de la marca ABH tienen un precio de 1100 y tiene 14 tonos
Las sombras Moondust de la marca Urban Decay tienen un precio de 990.5 y tiene 8 tonos
Las sombras Sweet Peach de la marca Too Faced tienen un precio de 1180 y tiene 18 tonos
Las sombras Crystal de la marca SmashBox tienen un precio de 795.99 y tiene 6 tonos
Las sombras Naked2 de la marca UrbanDecay tienen un precio de 1100 y tiene 12 tonos
El perfume La vie est belle  de la marca  Lancome  tiene un precio de 3900 y su tipo de aroma es  Dulce
El perfume Light blue de la marca Dolce & Gabbana tiene un precio de 2090.99 y su tipo de aroma es Fresco
El perfume Miss Dior de la marca Dior tiene un precio de 2740.65 y su tipo de aroma es Dulce
El perfume Mon Paris de la marca YSL tiene un precio de 2090 y su tipo de aroma es Fresco
El perfume ColorsPink de la marca Benetton tiene un precio de 920 y su tipo de aroma es fresco
El labial Hes with me de la marca Too Faced tiene un precio de 520 y color es Rojo
El labial Chianti de la marca Stila tiene un precio de 480.99 y color es Morado
El labial Yours Truly de la marca Becca tiene un precio de 555 y color es Nude
El labial Unlocked de la marca FentyBeauty tiene un precio de 540.9 y color es Rosa
El labial Melted de la marca TooFaced tiene un precio de 520 y color es cafe

2-
1,1,Melted,TooFaced,520,cafe
1,1,TintedRed,Fenty,720,rojo
1,1,MotorBoat,Fenty,340,azul
3
El output debería de ser:
El labial Hes with me de la marca Too Faced tiene un precio de 520 y color es Rojo
El labial Chianti de la marca Stila tiene un precio de 480.99 y color es Morado
El labial Yours Truly de la marca Becca tiene un precio de 555 y color es Nude
El labial Unlocked de la marca FentyBeauty tiene un precio de 540.9 y color es Rosa
El labial Melted de la marca TooFaced tiene un precio de 520 y color es cafe
El labial TintedRed de la marca Fenty tiene un precio de 720 y color es rojo
El labial MotorBoat de la marca Fenty tiene un precio de 340 y color es azul

3-
1,2,212,CarolinaHerrera,2120,Dulce
1,2,BlackOpium,YSL,2750,Dulce
1,2,Nina,NinaRicci,1750,Fresco
2
El perfume La vie est belle  de la marca  Lancome  tiene un precio de 3900 y su tipo de aroma es  Dulce
El perfume Light blue de la marca Dolce & Gabbana tiene un precio de 2090.99 y su tipo de aroma es Fresco
El perfume Miss Dior de la marca Dior tiene un precio de 2740.65 y su tipo de aroma es Dulce
El perfume Mon Paris de la marca YSL tiene un precio de 2090 y su tipo de aroma es Fresco
El perfume 212 de la marca CarolinaHerrera tiene un precio de 2120 y su tipo de aroma es Dulce
El perfume BlackOpium de la marca YSL tiene un precio de 2750 y su tipo de aroma es Dulce
El perfume Nina de la marca NinaRicci tiene un precio de 1750 y su tipo de aroma es Fresco

4-
1,3,MoroccanSpice,FentyBeauty,1800,18
1,3,GingerBread,TooFaced,1350,16
1,3,AfterHours,Stila,1200,12
4
Las sombras Modern Renaissance de la marca ABH tienen un precio de 1100 y tiene 14 tonos
Las sombras Moondust de la marca Urban Decay tienen un precio de 990.5 y tiene 8 tonos
Las sombras Sweet Peach de la marca Too Faced tienen un precio de 1180 y tiene 18 tonos
Las sombras Crystal de la marca SmashBox tienen un precio de 795.99 y tiene 6 tonos
Las sombras MoroccanSpice de la marca FentyBeauty tienen un precio de 1800 y tiene 18 tonos
Las sombras GingerBread de la marca TooFaced tienen un precio de 1350 y tiene 16 tonos
Las sombras AfterHours de la marca Stila tienen un precio de 1200 y tiene 12 tonos

*/
