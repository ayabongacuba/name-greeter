# name-greeter

A simple C++ console application that demonstrates multi-file compilation.

## Description

This project is a small command-line program that asks the user for their name and greets them. It is intentionally split across three files to show how a typical C++ project is organized with separate header and implementation files.

## Files

- `main.cpp` — Entry point of the program
- `Greeter.h` — Declaration of the `Greeter` class
- `Greeter.cpp` — Implementation of the `Greeter` class

## How to Build and Run

1. Open the project folder in VS Code.
2. Press `Ctrl + Shift + P` to open the Command Palette.
3. Run `C/C++ Runner: Build Folder`.
4. Run `C/C++ Runner: Run Folder`.
5. Type your name when prompted and press Enter.

## Example Output

```
Alice
Hello Alice!
```

## Requirements

- A C++17 compiler (tested with g++ 16.2.0)
- VS Code with the [C/C++ Runner](https://marketplace.visualstudio.com/items?itemName=franneck94.c-cpp-runner) extension

## Future Improvements

- Add support for multiple greetings in different languages
- Store a history of greetings in a file
- Add unit tests using a testing framework

## Author

Created as a learning project for practicing multi-file C++ compilation.

## License

This project is open source and available under the [MIT License](https://opensource.org/licenses/MIT).
