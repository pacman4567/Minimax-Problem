# Maximum Minimization

This repository contains a solution to the "Maximum Minimization" problem. The problem involves selecting two arrays from a set of arrays and forming a new array such that the minimum element of each position in the new array is maximized. The problem statement is as follows:

## Problem Description

You are given n arrays, each consisting of m integers. You need to choose two arrays, `ai` and `aj`, such that the value of `min_k=1^m bk` is maximized, where `bk=max(ai,k,aj,k)`.

For detailed problem description and examples, refer to the [problem statement](problem_statement.md).

## Solution

The solution to this problem uses a binary search algorithm to find the maximum possible minimum value. The code is implemented in C++ for efficiency.

## Usage

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/maximum-minimization.git
   
2. Compile the C++ code:
 
   ```bash
   g++ -o max_minimization max_minimization.cpp
   
3. Create an input file (e.g., input.txt) with the input data.
4. Run the program with the input file:
   
    ```bash
   ./max_minimization < input.txt

5. The program will output the indices of the two selected arrays, i and j.


Contributing

Contributions are welcome! If you have any improvements or suggestions, please open an issue or create a pull request.

The End!




