//Virsa Ionut Florin Emil
//321 AC
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

template <class T> // clasa template
class Stack
{
private:
    T stack[10]; //Alternativ pt primul exercitiu se poate scrie T stack[10];
    int topp, size; //topp contor pentru elementele introduse in stiva, size marimea maxima a stivei

public:
    bool isEmpty()
    {
        if(topp < 0)
        {
            cout <<"Stiva e goala" << endl;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void push(const T&item)
    {

        if(topp >  5)
        {
            cout <<"Stiva peste elementul maxim!\n";
            return;
        }

        stack[++topp] = item;
        cout <<"Introdus: " << item << endl;
    }
    T &top()
    {
        if (isEmpty())
        {
            cout << "\nEroare\n";
        }
        if (topp < 0)
        {
            cout << "Nu se poate identifica primul element, stiva e goala !";
        }


        return stack[topp];
    }
    void pop()
    {
        if (isEmpty())
        {
            exit(1);
        }
        if (topp > 5)
        {
            cout << "Stiva este peste elementul maxim !\n";
            exit(1);
        }
        cout << "Element sters : " << stack[topp--] << endl;
    }
    Stack(int maxsize)
    {
        size = maxsize;
        topp = -1;
    }
    //Functie optionala folosita pentru a vizualiza stiva
    void Display()
    {
        cout << "Stiva : \n";
        for (int i = topp; i >= 0; i--)
        {
            cout << " " << stack[i] << "\n";
        }
    }

};


int main()
{
    Stack<int> s(5); //Constructor cu stiva cu maxim 5 elemente.
    bool check;
    vector<int> myVector;
    cout << "Initial : \n"; //Stiva la momentul initial cand nu are elemente
    check = s.isEmpty();

    s.push(8);
    s.push(9);
    s.push(15);
    s.push(10);
    s.push(26);
    s.push(30);
    s.pop();



    int& nr = s.top();


    
    cout << endl;
    s.Display();
    cout << endl;

    cout << "Referinta catre cel mai recent adaugat element : " << nr << endl;




    return 0;
}
