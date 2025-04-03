# Trigonometric-Function-Implementation-in-C++

This project implements a complete trigonometric function library from scratch in C++, without using any built-in math libraries.

## Features

- Implemented using **Taylor Series** expansion.
- Supports:
  - `sin`, `cos`, `tan`, `cot` with **radian** input.
  - `sinDeg`, `cosDeg`, `tanDeg`, `cotDeg` with **degree** input.
- Includes custom implementations of:
  - `factorial(int x)` for calculating factorial
  - `root1(double x, int n)` for computing `x^n`
- Handles:
  - **Negative angles**
  - **Angles beyond 360 degrees**
  - **Division by zero** with output `1.0E+20` instead of infinity

## Project Structure

```plaintext
├── TrigonometricFunction.h    # Header file with function prototypes and constants
├── TrigonometricFunction.cpp  # Function implementations
├── main.cpp                   # Demonstration main function
├── log.txt                    # Test output results
