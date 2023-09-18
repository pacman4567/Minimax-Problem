# Problem Statement: Maximum Minimization

You are given `n` arrays, each consisting of `m` integers. You need to choose two arrays, `ai` and `aj`, such that the value of `min_k=1^m bk` is maximized, where `bk=max(ai,k,aj,k)`.

## Input

The input consists of the following:

- The first line contains two integers `n` and `m` (1≤n≤3×10^5, 1≤m≤8) — the number of arrays and the number of elements in each array, respectively.

- Then, `n` lines follow, where the `x`-th line contains the array `ax` represented by `m` integers `ax,1`, `ax,2`, ..., `ax,m` (0≤ax,y≤10^9).

## Output

Print two integers `i` and `j` (1≤i,j≤n, it is possible that i=j) — the indices of the two arrays you have to choose so that the value of `min_k=1^m bk` is maximum possible. If there are multiple answers, print any of them.


## Constraints

- 1≤n≤3×10^5
- 1≤m≤8
- 0≤ax,y≤10^9


## Example

### Input

6 5
5 0 3 1 2
1 8 9 1 3
1 2 3 4 5
9 1 0 3 7
2 3 0 6 3
6 4 1 7 0

### Output

1 5


The End!

