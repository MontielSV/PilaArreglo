#include <iostream>
using namespace std;

const int MAX = 5;

class Pila {
    private:
    int datos [MAX];
    int top;
}

private: 
public:
    Pila(){
        top = -1;
    }
    
    bool estaVacia(){
        return top == -1;
    }

    bool estaLlena () {
        return top == MAX -1;
    }

    void push (int valor){
        if (estaLlena()){
            cout << "Error: La lista esta llena." << endl;
            return;
        }

        top++;
        datos[top] = valor;

        cout << "Se agrego: " << valor << endl;
    }

    int pop (){
        if (estaVacia()){
            cout << "Error: La pila esta vacia." << endl;
            return -1;
        }
    
    int valor = datos [top];
    top--;

    return valor;
    }

    int peek(){
        if (estaVacia()){
            
        }
    }


public:
    void push (int valor){
        if (estaLlena()) {            
        }

        top++;
        datos[top] = valor;

        cout << "Se agrego: " << valor << endl;
    }