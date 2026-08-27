# 🎓 C++ University System (Multiple Inheritance)

## 📖 About the Project
This project is a C++ console application that demonstrates **Multiple Inheritance**. It simulates a university environment where a Teaching Assistant acts as both a student and an employee simultaneously.

By inheriting from two completely independent base classes (`Student` and `Employee`), the `TeachingAssistant` derived class merges their respective states and behaviors into a single, unified object.

## ✨ Features
*   **Multiple Base Classes:** Utilizes comma-separated inheritance syntax (`class Derived : public Base1, public Base2`) to fuse two distinct class blueprints.
*   **Protected Data Access:** Both base classes use the `protected` access modifier, allowing the derived class to directly read and format the IDs without relying on public getter methods.
*   **Dual-Role Simulation:** The `main()` execution proves that a single object (`ta1`) can seamlessly accept method calls defined in entirely different parental class structures.

## 🏆 Technical Learnings & Architecture
*   **C++ Feature Exclusivity:** Successfully implemented a complex architectural pattern (Multiple Inheritance) that is explicitly restricted in languages like Java and C#.
*   **State Merging:** Validated that the memory footprint of a multiply-inherited object expands to securely house the variables of all its parent classes side-by-side.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Multiple Inheritance, Protected Access Modifier, Object-Oriented Architecture, State Merging.

## 🛠️ How to Run
1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ university_ta.cpp -o university_ta
