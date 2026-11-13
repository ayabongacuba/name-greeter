# Name Greeter

A simple C++ command-line application that reads a name from standard input and prints a personalised greeting.

The project demonstrates basic object-oriented programming and the separation of class declarations and implementations across multiple C++ source files.

## Features

- Reads a name from standard input.
- Prints a personalised greeting.
- Uses a custom `Greeter` class.
- Separates the class declaration from its implementation.

## Project Structure

```text
name-greeter/
├── main.cpp
├── Greeter.h
├── Greeter.cpp
├── README.md
├── DESIGN.md
└── .gitignore
```

| File | Description |
|---|---|
| `main.cpp` | Contains the program entry point and coordinates the greeting process. |
| `Greeter.h` | Declares the `Greeter` class, its private data member and public methods. |
| `Greeter.cpp` | Defines the constructor and methods responsible for reading and displaying the greeting. |
| `DESIGN.md` | Explains the program flow, file organisation and design decisions. |
| `.gitignore` | Specifies files and directories that Git should not track. |

## Requirements

- A C++11-compatible compiler, such as GCC or Clang.
- A terminal or command-line environment.

Visual Studio Code is optional. The application can be compiled independently of any particular editor or extension.

## Build Instructions

Clone the repository:

```bash
git clone https://github.com/ayabongacuba/name-greeter.git
```

Navigate into the project directory:

```bash
cd name-greeter
```

Create a directory for the compiled program:

```bash
mkdir -p build
```

Compile the source files:

```bash
g++ -std=c++11 -Wall -Wextra -Wpedantic main.cpp Greeter.cpp -o build/name-greeter
```

## Running the Application

Run the compiled program:

```bash
./build/name-greeter
```

Enter a name when the program waits for input.

### Example

Input:

```text
Ayabonga
```

Output:

```text
Hello Ayabonga!
```

## Implementation Overview

The application uses a `Greeter` class to encapsulate the name and the operations performed on it.

The class declaration is placed in `Greeter.h`, while its method definitions are implemented in `Greeter.cpp`. The `main()` function in `main.cpp` creates a `Greeter` object and calls its methods.

This structure demonstrates how a C++ program can be organised into multiple source files and compiled and linked into a single executable.

## Current Limitations

- Input is currently limited to a single word. Names containing spaces are not supported.
- The application does not display an input prompt.
- Input validation and error handling are not implemented.

These are potential areas for further development.

## Design

For a more detailed explanation of the program flow, class structure and implementation decisions, see [DESIGN.md](DESIGN.md).

## What This Project Demonstrates

- Defining a class with private data and public methods.
- Separating a class declaration (`.h`) from its implementation (`.cpp`).
- Creating and using an object in `main()`.
- Reading from standard input and writing to standard output.
- Compiling and linking multiple C++ source files into one executable.

## Complexity

Let **N** be the number of characters in the input name. Reading and printing the name take O(N) time. The stored name uses O(N) space. The application has a constant number of operations around that input.

This is a small introductory project, so the emphasis is on clear class organisation and a reproducible build rather than advanced algorithms.

## License

No open-source licence has been selected for this repository yet. Public visibility does not automatically grant permission to reuse, modify or distribute the code. See [GitHub's licensing documentation](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/licensing-a-repository) before reusing it.
