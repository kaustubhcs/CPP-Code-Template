# CPP Code Template

This repository provides a simple C++ project structure along with a `Makefile` to help you quickly set up and compile your code. The structure separates source files, headers, and object files into different directories and uses a minimal Makefile that covers compilation, cleaning, running, and testing your program.

---

## Table of Contents

1. [Project Structure](#project-structure)  
2. [Prerequisites](#prerequisites)  
3. [How to Build](#how-to-build)  
4. [How to Run](#how-to-run)  
5. [How to Test](#how-to-test)  
6. [How to Clean](#how-to-clean)  
7. [Customization](#customization)  
8. [License](#license)  

---

## Project Structure

```
your_project/
├── Makefile            // The main Makefile controlling compilation
├── README.md           // This README file
└── src/
    ├── code/
    │   └── main.cpp    // Example main source code (entry point)
    ├── lib/
    │   ├── debugger.cpp  // Example source for a 'debugger' library
    │   ├── functions.cpp // Example source for utility functions
    │   └── (other headers/libraries, if any)
    └── obj/
        └── (object files will be generated here)
```

**Key directories**:
- **`src/code/`**: Contains your main application source files (e.g., `main.cpp`).
- **`src/lib/`**: Contains additional library/utility source files and headers (e.g., `functions.cpp`, `debugger.cpp`).
- **`src/obj/`**: Object files are automatically placed here after compilation.

---

## Prerequisites

- **C++ Compiler**: This template assumes **g++** is installed.
- **Make**: A `make` utility is required to use the provided Makefile.

---

## How to Build

1. Open a terminal in the project’s root directory.
2. Run the following command:

   ```bash
   make
   ```

   - The Makefile will compile all `.cpp` files from `src/code` and `src/lib`, place the object files in `src/obj/`, and generate the final binary **`hello.bin`** in the project root directory.

---

## How to Run

After building, you can run the compiled binary by using the make target `run`:

```bash
make run
```

This will execute the generated binary `hello.bin`.

Alternatively, you can run the binary directly:

```bash
./hello.bin
```

---

## How to Test

A simple test target is provided for demonstration:

```bash
make test
```

This command will print:

```
Test Start
```

You can replace the test logic in the `test` target of the Makefile to suit your testing framework or scripts.

---

## How to Clean

To remove all **object files** and the **compiled binary**, run:

```bash
make clean
```

This will remove all `.o` files in `src/obj/` and the `hello.bin` file in the project root. The cleanup step is useful if you want to rebuild everything from scratch.

---

## Customization

Feel free to customize the Makefile as needed:

- **`TARGET`**: Change `hello.bin` to any desired binary output name.
- **`CC`**: Change `g++` to another compiler if needed (e.g., `clang++`).
- **`CFLAGS`**: Adjust compilation flags (e.g., change `-std=c++0x` to `-std=c++17`).
- **`LDFLAGS`**: Add or remove linker flags (e.g., `-lm` for math library).
- **Directory structure**: You can rename directories or add more sources, libraries, and object files to match your project’s complexity.

---

## License

```
# Created Kaustubh Shivdikar — All Rights Reserved
```

Use of this template is provided "as is," without warranty of any kind. Modify and distribute according to your needs, respecting any included notices and disclaimers if applicable. 

---