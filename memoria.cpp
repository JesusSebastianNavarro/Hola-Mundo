#include <iostream>
using namespace std;

class Personaje
{
private:
    /* data */
public:
    Personaje(/* args */) {}
    ~Personaje() {}
    void Hablar()
    {
        cout << "ola tonotos" << endl;
    }
};

class Duende : public Personaje
{
private:
    int salud;
public:
    Duende(/* args */) {}
    ~Duende() {}
};

class Enano : public Personaje
{
private:
    float altura;
    int edad;
    int vida;

public:
    Enano(/* args */) {}
    ~Enano() {}
    void Inicializar()
    {
        this -> altura = 2;
        this -> edad = 150;
        this -> vida =10;
    }

    void Comer()
    {
        this-> vida += 1;
    }
};

int main(int argc, char const *argv[])
{
    int i = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e;

    cout << endl;
    cout << "Tamaño de tipos de datos nativos:" << endl;
    cout << "Tamaño int: " << sizeof(int) << " bytes." << endl;
    cout << "Tamaño bool: " << sizeof(bool) << " bytes." << endl;
    cout << "Tamaño float: " << sizeof(float) << " bytes." << endl;
    cout << "Tamaño double: " << sizeof(double) << " bytes." << endl;
    cout << "Tamaño char: " << sizeof(char) << " bytes." << endl;
    cout << "Tamaño Enano: " << sizeof(Enano) << " bytes." << endl;

    cout << endl;
    cout << "Memoria Estatica C:" << endl;
    cout << "Direccion de int: " << &i << endl;
    cout << "Direccion de bool: " << &b << endl;
    cout << "Direccion de float: " << &f << endl;
    cout << "Direccion de double: " << &d << endl;
    cout << "Direccion de char: " << static_cast<void*>(&c) << endl;
    cout << "Direccion de Enano: " << &e << endl;

    cout << endl;
    cout << "Memoria Dinamica C" << endl;
    cout << "Direccion Dinamica: " << malloc(2) << endl;
    cout << "Direccion Dinamica int " << malloc(sizeof(int)) << endl;

    //Casteo de Punteros C
    Enano* direccion = (Enano*) malloc(sizeof(Enano));
    direccion->Inicializar();

    //Punteros en C++
    Enano* instancia = new Enano();

    //Operador ->
    instancia -> Comer();
    instancia -> Hablar();

    //Polimorfismo
    Personaje* p = new Duende();
    Personaje* q = new Enano();

    p->Hablar();
    q->Hablar();

    cout << "Direccion de P: " << p << endl;

    //Arreglos
    Duende duendes[10];

    cout << endl;
    cout << &duendes[0] << endl;
    cout << &duendes[1] << endl;
    cout << &duendes[2] << endl;
    cout << &duendes[3] << endl;
    cout << &duendes[4] << endl;

    //Conversiona direccion
    cout << endl;
    cout << &duendes+0 << endl;
    cout << &duendes+1 << endl;
    cout << &duendes+2 << endl;
    cout << &duendes+3 << endl;
    cout << &duendes+4 << endl;

    return 0;
}