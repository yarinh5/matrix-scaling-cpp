#  Matrix Scaling in C++

This repository contains two simple C++ programs demonstrating how to **scale (expand)** a 2D matrix by a chosen factor using integer division on array indices.

It’s a great exercise to understand **nested loops, array indexing, integer division, and dynamic memory allocation** in C++.

---

## Versions

### 1️⃣ Basic Version — `matrix_scale.cpp`
A simple implementation using fixed-size 2D arrays.
It scales a 2×2 matrix into a 4×4 matrix by duplicating each element based on a scale factor.

#### Example:
**Input Matrix:**

1 2
3 4

**Scaled Output (factor = 2):**

1 1 2 2
1 1 2 2
3 3 4 4
3 3 4 4


---

### 2️⃣ Dynamic Version — `matrix_scale_dynamic.cpp`
A more flexible version that uses **dynamic memory allocation (`new` / `delete`)**  
and allows the user to input any size `n` and any scaling factor `s`.

#### Example Run:


Enter scale factor: 3

Enter 4 elements:
1 2
3 4


**Output:**


Original matrix (2x2):
1 2
3 4

Scaled matrix (6x6):
1 1 1 2 2 2
1 1 1 2 2 2
1 1 1 2 2 2
3 3 3 4 4 4
3 3 3 4 4 4
3 3 3 4 4 4


---

## How to Run
You can compile and run either file using any C++ compiler:
You can also use C++ online.

