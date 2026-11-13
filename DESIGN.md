# Design Document

## 1. Overview

Name Greeter is a small C++ command-line application. It reads a name from standard input and displays a greeting.

The application is organised around a `Greeter` class. Its declaration, implementation and the program entry point are kept in separate files.

## 2. Program Flow

The program follows this sequence:

1. `main()` creates a `Greeter` object.
2. `main()` calls `getName()`.
3. `getName()` reads a name from standard input.
4. `main()` calls `greetName()`.
5. `greetName()` displays the greeting.

In simplified form:

```text
main.cpp
   |
   v
Create Greeter object
   |
   v
getName()
   |
   v
Read name from standard input
   |
   v
greetName()
   |
   v
Print greeting
```

## 3. File Organisation

### main.cpp

Contains the `main()` function, which is the entry point of the application.

It creates an instance of `Greeter`, calls `getName()` to read the user's input, and then calls `greetName()` to display the result.

### Greeter.h

Contains the declaration of the `Greeter` class.

The class has:

- A private `std::string` data member named `name`.
- A public default constructor.
- A public `getName()` method.
- A public `greetName()` method declared as `const`.

The header describes the class interface without containing the method definitions.

### Greeter.cpp

Contains the definitions of the `Greeter` class methods.

- The constructor initialises `name` to an empty string.
- `getName()` reads input using `std::cin`.
- `greetName()` displays the greeting using `std::cout`.

## 4. Design Decisions

### Separation of Declaration and Implementation

The class declaration is placed in `Greeter.h`, while the method definitions are placed in `Greeter.cpp`.

This separates the class interface from its implementation and keeps the program's entry point separate from the greeting logic.

### Encapsulation

The `name` data member is private. Code outside the class cannot access it directly. The public methods provide the operations used by `main()`.

### Object-Oriented Structure

The `Greeter` class groups the name data and the operations that use it. The `main()` function coordinates these operations rather than implementing the greeting logic itself.

### Constant Member Function

The `greetName()` method is declared with the `const` qualifier because it displays the stored name without modifying the object's state.

## 5. Input Handling

The current implementation uses formatted input extraction:

```cpp
std::cin >> name;
```

This reads characters up to the first whitespace character. As a result, a name containing spaces is read only up to its first word.

The application also does not display a prompt before reading input, and it does not validate whether the input was successfully received.

## 6. Compilation

Both `.cpp` files must be compiled and linked together to produce the executable.

From the repository root:

```bash
mkdir -p build
g++ -std=c++11 -Wall -Wextra -Wpedantic main.cpp Greeter.cpp -o build/name-greeter
```

Run the application:

```bash
./build/name-greeter
```

## 7. Possible Improvements

Possible future improvements include:

- Use `std::getline()` to support names containing spaces.
- Display a prompt before reading input.
- Handle empty input and input errors.
- Add automated tests for the greeting behaviour.
