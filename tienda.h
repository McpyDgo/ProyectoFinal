//Incluir bibliotecas y la clase de producto
#ifndef TIENDA_H
#define TIENDA_H

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

#include "producto.h"
const int MAX = 100;

//DEfinir la clase padre como tienda, establecer metodos y atributos
class Tienda {
    private:
        Perfume perf[MAX];
        Labial lab[MAX];
        Sombras sbrs[MAX];
        int iperf;
        int ilab;
        int isbrs;
    public:
        Tienda();
        void creaPerfume();
        void creaLabial();
        void creaSombras();
        void muestraPerfume();
        void muestraLabial();
        void muestraSombras();
        void agregaPerfume(string nombre,string marca,float precio,string aroma);
        void agregaLabial(string nombre,string marca,float precio,string color);
        void agregaSombras(string nombre,string marca,float precio,int tonos);
};

//Constructor por default
Tienda::Tienda(){
    iperf=0;
    ilab=0;
    isbrs=0;
}

//Emplear crear perfume para llenar con ejemplos el arreglo
void Tienda::creaPerfume(){
    perf[0] = Perfume("La vie est belle ", " Lancome ", 3900.0," Dulce ");
    iperf+=1;
    perf[1] = Perfume("Light blue", "Dolce & Gabbana", 2090.99,"Fresco");
    iperf+=1;
    perf[2] = Perfume("Miss Dior", "Dior", 2740.65, "Dulce");
    iperf+=1;
    perf[3] = Perfume("Mon Paris", "YSL", 2090.0, "Fresco");
}

//Llenar el arreglo de labial con ejemplos
void Tienda::creaLabial(){
    lab[0] = Labial("Hes with me", "Too Faced", 520.0,"Rojo");
    ilab+=1;
    lab[1] = Labial("Chianti", "Stila", 480.99,"Morado");
    ilab+=1;
    lab[2] = Labial("Yours Truly", "Becca", 555.0, "Nude");
    ilab+=1;
    lab[3] = Labial("Unlocked", "FentyBeauty", 540.90, "Rosa");
}

//Llenar el arreglo de sombras con ejemplos, agregar 1 al ínidce para que sean diferentes
void Tienda::creaSombras(){
    sbrs[0] = Sombras("Modern Renaissance", "ABH", 1100.0,14);
    isbrs+=1;
    sbrs[1] = Sombras("Moondust", "Urban Decay", 990.50,8);
    isbrs+=1;
    sbrs[2] = Sombras("Sweet Peach", "Too Faced", 1180.0, 18);
    isbrs+=1;
    sbrs[3] = Sombras("Crystal", "SmashBox", 795.99, 6);
}

//Atributo para imprimir los ejemplos creados anteriormente
void Tienda::muestraPerfume(){

    for(int i=0; i<=iperf;i++){
        cout << perf[i].toString();
    }

}

//Atributo para imprmir los ejemplos que se crearon antes
void Tienda::muestraLabial(){

    for(int i=0; i<=ilab;i++){
        cout << lab[i].toString();
    }

}

//Atributo para imprmir
void Tienda::muestraSombras(){
    for(int i=0; i<=isbrs;i++){
        cout << sbrs[i].toString();
    }

}

//Establecer atributo para agregar algun nuevo perfume, sumar 1 al índice para que no se sobreescriba
void Tienda::agregaPerfume(string nombre,string marca,float precio,string aroma){
    iperf += 1;
    Perfume aux(nombre, marca, precio, aroma);
    perf[iperf] = aux;
}

//Atributo para agregar un labial al inventario
void Tienda::agregaLabial(string nombre,string marca,float precio,string color){
    ilab += 1;
    Labial aux(nombre, marca, precio, color);
    lab[ilab] = aux;
}

//Atributo para agregar más sombras
void Tienda::agregaSombras(string nombre,string marca,float precio,int tonos){
    isbrs += 1;
    Sombras aux(nombre, marca, precio, tonos);
    sbrs[isbrs] = aux;
}

//Terminar la clase
#endif
