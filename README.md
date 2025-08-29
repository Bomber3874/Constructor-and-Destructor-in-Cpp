# Constructor-and-Destructor-in-Cpp

Aim

To study and implement the concept of constructors and destructors in C++, including default, parameterized, copy constructors, and destructors, demonstrating their role in object initialization and memory management.

Software Used

Compiler: GNU GCC (g++)

IDE: Visual Studio Code

Operating System: Windows/Linux

Theory

Constructor

A constructor is a special member function that initializes objects of a class.

It has the same name as the class and no return type.

It is invoked automatically when an object is created.

Types of constructors:

Default Constructor – Initializes objects with default or user-defined values.

Parameterized Constructor – Takes parameters to initialize objects with specific values.

Copy Constructor – Creates a new object as a copy of an existing object.

Destructor

A destructor is a special member function used to free resources when an object goes out of scope.

It has the same name as the class preceded by ~.

Invoked automatically when an object is destroyed.

Key Features

Constructors and destructors enhance encapsulation, automation of initialization/cleanup, and object lifecycle management.

They reduce redundancy and improve safety by ensuring proper allocation and deallocation of resources.

Algorithms
1. Default Constructor (constructor.cpp)

Algorithm:

Start the program.

Define a class Student with private data members: rollno, name, and fee.

Define a default constructor inside the class that:

Prompts the user to enter roll number, name, and fee.

Stores these values in the respective data members.

Define a member function display() to print student details.

In main():

Create a Student object.

Call display() to show details.

End the program.

2. Constructor Defined Outside the Class (constructor outside the class.cpp)

Algorithm:

Start the program.

Define a class cuboid with private data members: len, wid, and ht.

Declare a default constructor and a member function volume() inside the class.

Define the constructor outside the class that:

Prompts the user to enter length, width, and height.

Stores the values.

Define volume() to calculate and display the volume of the cuboid.

In main():

Create an object c1.

Call volume() to display the cuboid’s volume.

End the program.

3. Parameterized Constructor (parameterized constructor.cpp)

Algorithm:

Start the program.

Define a class Cuboid with private data members: height, width, and length.

Define a parameterized constructor that takes three arguments (h, w, l) and initializes the data members.

Define a member function volume() that returns the product of height × width × length.

In main():

Create an object using specific values with the parameterized constructor.

Call volume() and display the result.

End the program.

4. Copy Constructor (copy constructor.cpp)

Algorithm:

Start the program.

Define a class Subjects with three private string data members (sub1, sub2, sub3).

Define a parameterized constructor to initialize subjects.

Define a copy constructor that initializes a new object with the values of an existing object.

Define a member function display() to print subject details.

In main():

Create an object s1 with subject values.

Create another object s2 using the copy constructor.

Display details of both objects using display().

End the program.

5. Destructor (destructor.cpp)

Algorithm:

Start the program.

Define a class Books with private data members title, author, and price.

Define a constructor that increments a global counter and displays the number of objects created.

Define a destructor that decrements the counter and displays the number of objects remaining.

In main():

Create multiple objects of Books.

Use a block scope to create and destroy an additional object.

Observe constructor and destructor calls automatically.

End the program.

Conclusion

This experiment demonstrated the lifecycle of objects in C++ using different types of constructors and destructors.

Default constructor automates initialization.

Parameterized constructor provides flexibility in object creation.

Copy constructor simplifies object duplication.

Constructor defined outside the class highlights scope of implementation.

Destructor ensures cleanup of resources and tracks object destruction.

Through these programs, the role of constructors and destructors in object-oriented programming is clearly understood, emphasizing their importance in encapsulation, memory management, and code reliability.
