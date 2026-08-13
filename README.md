
# 4-Bit Digital Logic Calculator
A 4-bit digital logic calculator designed and simulated as a Digital Logic Design (DLD) project.
The project takes two 4-bit binary numbers as inputs and performs arithmetic and comparison operations using digital logic circuits. It also includes a C++ implementation that demonstrates the corresponding operations programmatically.

## 📌 Project Overview
The calculator works with two 4-bit inputs, allowing values from **0 to 15**.
It supports:
- Addition
- Subtraction
- Multiplication
- Division
- Comparison

The digital circuit was designed using fundamental digital logic components and simulated using **Tinkercad**.
The project demonstrates how individual digital circuits can be combined to create a complete functional calculator.


## ✨ Features
### ➕ Addition

Adds two 4-bit numbers using binary addition.
The digital implementation uses full adders with carry propagation between the bits.
For example:
0101 + 0011 = 1000
  5  +  3  =  8


---

### ➖ Subtraction

Subtracts B from A using **two's complement logic**.

The subtraction process involves:

1. Inverting the bits of B.
2. Adding 1 to obtain the two's complement.
3. Adding the resulting value to A.

Negative results are represented using two's complement.

---

### ✖️ Multiplication

Multiplies two 4-bit numbers.

The multiplier circuit uses:

* AND gates to generate partial products
* Full adders to combine the partial products
* Shift-and-add logic

The result can require up to **8 bits**, since:

```text
15 × 15 = 225
```

---

### ➗ Division

Performs integer division between two 4-bit numbers.

The division circuit calculates:

* Quotient
* Remainder

Division by zero is handled as an error condition.

The digital design uses a restoring-division approach based on repeated subtract, compare, and shift operations.

---

### 🔎 Comparison

Compares two 4-bit numbers and determines whether:

```text
A > B
A = B
A < B
```

The circuit produces a 3-bit output code:

| Result | Code  |
| ------ | ----- |
| A > B  | `001` |
| A = B  | `010` |
| A < B  | `100` |

The comparison is performed starting from the most significant bit and progressing toward the least significant bit.

---

# 🧩 Digital Circuit Design

The calculator is composed of multiple digital logic modules that are integrated into the main circuit.

The project includes:

* Adder
* Adder/Subtractor
* Multiplier
* Divider
* Comparator
* Full Adder
* Logic gates
* Multiplexer

Each module performs a specific function before being integrated into the complete calculator.

---

## 🔧 Adder / Subtractor

The adder/subtractor circuit uses full adders and XOR gates.

A control input determines the operation:

```text
Control = 0 → Addition
Control = 1 → Subtraction
```

For subtraction, the B inputs are conditionally inverted and the two's complement method is used.

The circuit also uses carry propagation between the full-adder stages.

---

## ✖️ Multiplier Circuit

The multiplier accepts two 4-bit inputs and produces an 8-bit product.

Each bit of B is ANDed with the bits of A to generate partial products.

The partial products are then shifted and added using full adders.

---

## 🔎 Comparator Circuit

The comparator receives two 4-bit inputs and produces three possible outputs:

```text
001 → A > B
010 → A = B
100 → A < B
```

The circuit uses XOR, AND, and OR gates to determine the relationship between the two inputs.

---

## ➗ Divider Circuit

The divider is based on a restoring division approach.

The circuit repeatedly:

1. Subtracts the divisor from the current remainder.
2. Checks whether the result is negative.
3. Restores the previous value when necessary.
4. Shifts the values.
5. Determines the corresponding quotient bit.

The final outputs represent the quotient and remainder.

---

# 🔀 Main Calculator Circuit

The main calculator combines the individual arithmetic and comparison modules.

The same 4-bit inputs are supplied to the different operation circuits.

A multiplexer is used to select the output corresponding to the selected operation.

The overall structure can be represented as:

```text
             ┌──────────────────┐
Input A ────►│                  │
             │  Adder/Subtractor│
Input B ────►│                  │
             └────────┬─────────┘
                      │
             ┌────────▼─────────┐
             │    Multiplier    │
             └────────┬─────────┘
                      │
             ┌────────▼─────────┐
             │     Divider      │
             └────────┬─────────┘
                      │
             ┌────────▼─────────┐
             │    Comparator    │
             └────────┬─────────┘
                      │
                ┌─────▼─────┐
                │Multiplexer│
                └─────┬─────┘
                      │
                      ▼
                   OUTPUT
```

---

# 💻 C++ Implementation

A C++ implementation is included in the repository to demonstrate the corresponding calculator operations programmatically.

The program accepts two values between **0 and 15** and allows the user to select an operation.

Available operations:

```text
+  Addition
-  Subtraction
*  Multiplication
/  Division
c  Comparison
```

The program also displays binary representations of the results.

---

## 🧪 C++ Program Structure

The implementation contains separate functions for each operation:

```text
Addition()
Subtraction()
Multiplication()
Division()
Comparison()
```

### Addition

Calculates the sum and displays both decimal and 8-bit binary representations.

### Subtraction

Calculates the difference and displays the result using an 8-bit two's complement representation.

### Multiplication

Calculates the product and displays its decimal and binary representations.

### Division

Calculates:

* Quotient
* Remainder

and checks for division by zero.

### Comparison

Returns one of three comparison codes:

```text
001 → A > B
010 → A = B
100 → A < B
```

---

# 📥 Input

The calculator accepts:

```text
A = 0–15
B = 0–15
```

Any value outside the 4-bit range is rejected by the C++ implementation.

---

# 📊 Example

For:

```text
A = 5
B = 3
```

### Addition

```text
5 + 3 = 8
```

Binary:

```text
0101 + 0011 = 1000
```

### Comparison

```text
5 > 3
```

Output code:

```text
001
```

---

# 🖼️ Screenshots

## Main Calculator

![Main Calculator](screenshots/main-calculator.png)

## Multiplier Circuit

![Multiplier Circuit](screenshots/multiplier.png)

## Arithmetic Circuits

![Arithmetic Circuits](screenshots/arithmetic-circuits.png)

---

# 🛠️ Technologies & Tools

* **Tinkercad Circuits**
* **C++**
* **Digital Logic Design**
* **Binary Arithmetic**
* **Logic Gates**
* **Full Adders**
* **Multiplexers**
* **Combinational Circuits**


# 🔬 Circuit Simulation

The digital logic implementation can be opened and simulated using the provided circuit project file.

The circuit contains the individual modules used to construct the calculator, including the adder/subtractor, multiplier, comparator, divider, full-adder components, and the main integrated calculator circuit.


# 🎯 Learning Objectives
This project was developed to apply Digital Logic Design concepts to a practical system.

The project demonstrates:

* Binary number representation
* Binary arithmetic
* Two's complement subtraction
* Full-adder design
* Arithmetic circuit design
* Multiplication using partial products
* Binary division
* Magnitude comparison
* Logic gates
* Multiplexing
* Combinational circuit design
* Circuit integration
* Digital circuit simulation


# 🚀 Project Highlights
* Designed a functional 4-bit calculator system
* Built individual arithmetic and comparison circuits
* Integrated multiple digital modules into one calculator
* Implemented binary arithmetic
* Used two's complement for subtraction
* Designed an 8-bit multiplication output
* Implemented quotient and remainder for division
* Created comparison output codes
* Simulated the digital circuits
* Developed a corresponding C++ implementation

---


