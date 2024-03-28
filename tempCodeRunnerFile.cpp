#include <iostream>
#include <unordered_map>
using namespace std;

class Animal {
private:
    string name;

public:
    Animal(string name) {
        this->name = name;
    }

    void sound() {
        cout << "Animal sound." << endl;
    }

    class Mammal {
    public:
        string name;

        Mammal(string name2) {
            this->name = name2;
        }

        void sound() {
            cout << "Mammal sound" << endl;
        }
    };

    class Bird {
    public:
        string name;

        Bird(string name) {
            this->name = name;
        }

        void sound() {
            cout << "Bird sound" << endl;
        }
    };

    class Fish {
    public:
        string name;

        Fish(string name) {
            this->name = name;
        }

        void sound()  {
            cout << "Fish sound" << endl;
        }
    };
};

int main() {
    unordered_map<int, string> m;
    int n;
    cout << "Enter the Number Of Animals :" << endl;
    cin >> n;
    cout << "Enter animal type (1 for Mammal, 2 for Bird, 3 for Fish) and name:" << endl;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        string s;
        cin >> s;
        m[x] = s;  // Using x as the key directly
    }

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            Animal::Mammal mammal(m[i]);
            cout << m[i] << " makes ";
            mammal.sound();
        } else if (i == 2) {
            Animal::Bird bird(m[i]);
            cout << m[i] << " makes ";
            bird.sound();
        } else if (i == 3) {
            Animal::Fish fish(m[i]);
            cout << m[i] << " makes ";
            fish.sound();
        }
    }
    return 0;
}
