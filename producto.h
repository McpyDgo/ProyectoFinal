//Clase de productos para poder agregar y crear productos, herencia incluida
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <sstream>

using namespace std;

//Definir la clase producto que sera la clase padre, junto con sus atributos y getters
class Producto{
    protected:
        string nombre;
        string marca;
        float precio;
    public:
        Producto();
        Producto(string nombre,string marca,float precio);

        string getNombre() const;
        string getMarca() const;
        float getPrecio() const;
        string toString()const;
};

//Constructor por default
Producto::Producto(){
    nombre="";
    marca="";
    precio=0.0;
}

//Constructor con variables establecidas
Producto::Producto(string name, string mar, float pre){
    name=nombre;
    mar=marca;
    pre=precio;
}

//Definir los getters conforme a la clase
string Producto::getNombre()const{
    return nombre;
}

string Producto::getMarca() const{
    return marca;
}

float Producto::getPrecio() const{
    return precio;
}

//Establecer método para poder imprimir los getters del objeto
string Producto::toString()const{
    stringstream aux;
    aux << "El producto" << nombre << "es de la marca "<< marca << "y tiene un precio de" << precio << "\n";
    return aux.str();
}

//Definir la clase perfume que es hija de la clase producto, pero con la variable aroma como diferencia
class Perfume: public Producto{
    protected:
        string aroma;

    public:

        Perfume();
        Perfume(string nombre, string marca, float precio, string aroma);

        string getNombre() const;
        string getMarca()const;
        float getPrecio();
        string getAroma() const;
        string toString();
};

//Constructor por default
Perfume::Perfume(){
    nombre="";
    marca="";
    precio=0.0;
    aroma="";
}

//Constructor cuando las variables se reciben
Perfume::Perfume(string name,string b,float pr,string a){
    nombre=name;
    marca=b;
    precio=pr;
    aroma=a;
;

}

//Getters de la clase
string Perfume::getNombre()const{
    return nombre;
}

string Perfume::getMarca() const{
    return marca;
}

float Perfume::getPrecio(){
    return precio;
}

string Perfume::getAroma() const{
    return aroma;
}

//Definir un metodo para imprimir los getters y agregar funcionalidad
string Perfume::toString(){
    stringstream aux;
    aux << "El perfume " << nombre << " de la marca "<< marca << " tiene un precio de " << precio << " y su tipo de aroma es " << aroma << "\n";
    return aux.str();
}

//Establecer la clase labial con herencia de producto, con la diferencia de la variable color
class Labial: public Producto{
    protected:
        string color;

    public:

        Labial();
        Labial(string nombre, string marca, float precio,string color);

        string getNombre() const;
        string getMarca()const;
        float getPrecio();
        string getColor() const;
        string toString();
};

//Constructor por default
Labial::Labial(){
    nombre="";
    marca="";
    precio=0.0;
    color="";
}

//Constructor con valores dados por el usuario
Labial::Labial(string name,string b,float pr,string c){
    nombre=name;
    marca=b;
    precio=pr;
    color=c;
}

//Getters de la clase
string Labial::getNombre()const{
    return nombre;
}

string Labial::getMarca() const{
    return marca;
}

float Labial::getPrecio(){
    return precio;
}

string Labial::getColor() const{
    return color;
}


string Labial::toString(){
    stringstream aux;
    aux << "El labial " << nombre << " de la marca "<< marca << " tiene un precio de " << precio << " y color es " << color << "\n";
    return aux.str();
}


//Definir clase sombras con herencia de la clase producto pero con la variable tonos
class Sombras: public Producto{
    protected:
        int tonos;

    public:

        Sombras();
        Sombras(string nombre, string marca, float precio,int tonos);

        string getNombre() const;
        string getMarca()const;
        float getPrecio();
        int getTonos() const;
        string toString();
};

//Constructor por default
Sombras::Sombras(){
    nombre="";
    marca="";
    precio=0.0;
    tonos=0;
}

//Constructor recibiendo valores
Sombras::Sombras(string name,string b,float pr,int to){
    nombre=name;
    marca=b;
    precio=pr;
    tonos=to;
}

//Getters de la nueva clase
string Sombras::getNombre()const{
    return nombre;
}

string Sombras::getMarca() const{
    return marca;
}

float Sombras::getPrecio(){
    return precio;
}

int Sombras::getTonos() const{
    return tonos;
}

//Metodo para imprimir los getters de la clase
string Sombras::toString(){
    stringstream aux;
    aux << "Las sombras " << nombre << " de la marca "<< marca << " tienen un precio de " << precio << " y tiene " << tonos << " tonos "<< "\n";
    return aux.str();
}

//Terminar la clase con herencia
#endif

