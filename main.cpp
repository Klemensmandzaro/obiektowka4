#include <iostream>
using namespace std;

class Book{
private:
    string tytul;
    string autor;
    int wydanie;
public:
    Book(const string &tytul, const string &autor, int wydanie) : tytul(tytul), autor(autor), wydanie(wydanie) {}

public:
    void pokaz(){
        cout<<tytul<<" "<<autor<<" "<<wydanie<<endl;
    }
};

int main() {
    int a=1;
    Book Zaba("Zaba", "Zabson", 2023);
    Book Jez("Jez", "Oki", 2020);
    string b;
    while(a!=0)
    {

        cout<<"1-sprawdzenie ksiazki"<<endl<<"0-wyjscie"<<endl;
        cin>>a;
        if (a==1)
        {
            cin>>b;
            if (b=="Zaba")
            {
                Zaba.pokaz();
            }
            else if (b=="Jez")
            {
                Jez.pokaz();
            }
            else
            {
                cout<<"Dupa";
            }
        }
    }
    return 0;
}


//Zadanie z konstruktorem i hermetyzacją - Książka:
//Stwórz klasę Book, reprezentującą książkę. Klasa powinna mieć prywatne pola, takie jak tytuł, autor i rok wydania.
//Zaimplementuj konstruktor, który umożliwi ustawienie wartości początkowych dla pól klasy.
//Utwórz metody dostępowe, aby uzyskiwać informacje o książce.
//Przetestuj działanie klasy, tworząc kilka obiektów reprezentujących różne książki.