class Animal {
    // Constructor
    public Animal() {
        System.out.println("create animal");
    }

    // Destructor
    protected void finalize() {
        System.out.println("delete animal");
    }

    // Method sound
    public void sound() {
        System.out.println("animal makes a sound");
    }
}

class Dog extends Animal {
    // Constructor
    public Dog() {
        System.out.println("dog");
    }

    // Destructor
    protected void finalize() {
        System.out.println("delete dog");
    }

    // Override method sound
    @Override
    public void sound() {
        System.out.println("dog barks");
    }
}

class Cat extends Animal {
    // Constructor
    public Cat() {
        System.out.println("cat");
    }

    // Destructor
    protected void finalize() {
        System.out.println("delete cat");
    }

    // Override method sound
    @Override
    public void sound() {
        System.out.println("cat meows");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal a = new Animal(); // Create Animal object
        Dog d = new Dog();       // Create Dog object
        Cat c = new Cat();       // Create Cat object
        
        a.sound();               // Animal sound
        d.sound();               // Dog sound
        c.sound();               // Cat sound
    }
}
