# advanced-coding-assignments

---


This repository contains solutions to coding assignments implemented in C++.

---

## 📁 Assignment 1

### 🔹 Problem 1: Cyclic Substring Maximum Sum
- Given a string, find the maximum sum of a cyclic substring with all unique characters.
- **Approach:** Sliding window + string doubling to handle circular substrings.
- **Complexity:** O(n)

---

### 🔹 Problem 2: Array Transformation Cost Minimization
- Convert all elements of an array to the same value using ±K operations.
- **Approach:**  
  - Check feasibility using modulo condition  
  - Normalize values  
  - Use median to minimize total operations  
- **Complexity:** O(n log n)

---

## 🛠️ Language Used
- C++

---

## 📌 Notes
- Each assignment is organized in separate folders.
- Each problem is implemented in an individual file.
- Code includes comments explaining the logic and approach.

---

## 🚀 How to Run

1. Compile:
   ```bash
   g++ problem1.cpp -o problem1
   g++ problem2.cpp -o problem2
   ```

2. Run:
   ```bash
   ./problem1
   ./problem2
   ```

---

## 📂 Repository Structure

```
coding-assignments/
│── assignment-1/
│     ├── problem1.cpp
│     ├── problem2.cpp
│
│── README.md
```
