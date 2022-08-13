//Lia Sanchez 22110129

#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal{
    private://Atributos
        string onomatomeya;
        string grupo;
        int npatas;
        

    public: //Métodos
        Animal(string, string, int);//Constructor
        void saltar();
        void correr();
        void nadar();

};  

Animal::Animal(string _onomatopeya, string _grupo, int _npatas){
    onomatomeya = _onomatopeya;
    grupo = _grupo;
    npatas = _npatas;

}

void Animal::saltar(){
    cout<<"Este animal esta saltando, hace "<<onomatomeya<<" y tiene "<<npatas<<" patas?"<<endl; 
}

void Animal::correr(){
    cout<<"Este  animal de esta corriendo, tiene "<<npatas<<", es el mas rapido y es "<<grupo<<"?"<<endl;
}

int main(){
    Animal a1 = Animal("croac", "reptil", 4);
    Animal a2 = Animal("gaña", "mamifero", 4);
    Animal a3 = Animal("oink", "mamifero", 4);
    Animal a4 = Animal("croc", "ave", 2);
    Animal a5 = Animal("quiquiriqui", "ave", 2);

    a1.saltar();
    a2.correr();
    return 0;
}