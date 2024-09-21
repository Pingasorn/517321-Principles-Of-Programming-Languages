class Animal:
    # Constructor
    def __init__(self):
        print("create animal")

    # Destructor
    def __del__(self):
        print("delete animal")

    # Method sound
    def sound(self):
        print("animal makes a sound")

class Dog(Animal):
    # Constructor
    def __init__(self):
        super().__init__()
        print("dog")

    # Destructor
    def __del__(self):
        print("delete dog")
        super().__del__()

    # Override method sound
    def sound(self):
        print("dog barks")

class Cat(Animal):
    # Constructor
    def __init__(self):
        super().__init__()
        print("cat")

    # Destructor
    def __del__(self):
        print("delete cat")
        super().__del__()

    # Override method sound
    def sound(self):
        print("cat meows")

# Create objects
a = Animal()  # Create Animal object
d = Dog()     # Create Dog object
c = Cat()     # Create Cat object

a.sound()     # Animal sound
d.sound()     # Dog sound
c.sound()     # Cat sound
