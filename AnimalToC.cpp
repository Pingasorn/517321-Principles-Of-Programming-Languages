#include <iostream>

class Animal {
public:
    // Constructor
    Animal() {
        std::cout << "create animal" << std::endl;
    }

    // Destructor
    virtual ~Animal() {
        std::cout << "delete animal" << std::endl;
    }

    // Method sound
    virtual void sound() {
        std::cout << "animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    // Constructor
    Dog() {
        std::cout << "dog" << std::endl;
    }

    // Destructor
    ~Dog() {
        std::cout << "delete dog" << std::endl;
    }

    // Override method sound
    void sound() override {
        std::cout << "dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    // Constructor
    Cat() {
        std::cout << "cat" << std::endl;
    }

    // Destructor
    ~Cat() {
        std::cout << "delete cat" << std::endl;
    }

    // Override method sound
    void sound() override {
        std::cout << "cat meows" << std::endl;
    }
};

int main() {
    Animal* a = new Animal(); // Create Animal object
    Dog* d = new Dog();       // Create Dog object
    Cat* c = new Cat();       // Create Cat object

    a->sound();               // Animal sound
    d->sound();               // Dog sound
    c->sound();               // Cat sound

    delete a;                 // Delete Animal object
    delete d;                 // Delete Dog object
    delete c;                 // Delete Cat object
    return 0;
}
