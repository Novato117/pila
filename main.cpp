#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

class Nodo{
public:
    Nodo(int dato,Nodo* siguiente=NULL);
    ~Nodo();
    void muestraTusDatos(void);
    Nodo* dameTusiguiente(void);
    int dameTuDato(void);
    void modificaTuDato();
    void modificaTuSiguiente(Nodo* siguiente);
private:
    int dato;
    Nodo* siguiente;
};
Nodo::Nodo(int dato,Nodo* siguiente){
    this->dato=dato;
    this->siguiente=siguiente;
}
Nodo::~Nodo()
{
    //dtor
}
void Nodo::muestraTusDatos(void){
cout<<std::right<<setw(3)<<this->dato<<"->";
if(this->siguiente){
    cout<<std::left<<setw(8)<<this->siguiente;
}else{
cout<<std::left<<setw(8)<<"->>NULL";
}
}
class Pila{
public:
    Pila();
    ~Pila();
    bool pilaVacia(void);
    void Push(int dato);
    int pop(void);
    int cima(void);

private:
    Nodo* tope;

};
Pila::pila(){
this->tope=NULL;
}
Pila::~Pila(){
}
bool Pila::pilaVacia(void){
   return this->tope==NULL;
}
void Pila::push(int dato){
this->tope=new Nodo(dato,this->tope);
}
int Pila::pop(void){
    int dato;
    Nodo* auxiliar;
    if(!this->pilaVacia()){
        auxiliar=this->tope;
        dato=this->tope->dameTuDato();
        this->tope=this->tope->dameTusiguiente();
        delete auxiliar;
    }else{
        cout<<"Pila vacia"<<endl;
        exit(-1);
    }
    return dato;
}
int Pila::cima(void){
int dato;
dato=this->tope.dameTuDato();
return dato;
}
int main()
{
    Nodo N1(10),N2(12,&N1),N3(18,&N2),N4(19,&N3);

    return 0;
}
