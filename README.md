# 🕛 Timestamp

This repository provides a lightweight and flexible C++ utility for generating system timestamps. It supports both raw Unix timestamps and custom-formatted date/time strings using standard C++ libraries.

---

## 🚀 Purpose

The goal of this utility is to provide:
* **Simplicity:** A single-function solution for time-related needs.
* **Flexibility:** Support for custom formats (e.g., `%Y-%m-%d %H:%M:%S`).
* **Raw Data:** Easy access to Unix epoch time in string format.
* **Safety:** Thread-safe local time conversion using `localtime_s`.

---

## 🛠️ Components Used

| Component | Description |
| :--- | :--- |
| **std::to_string** | Converts the raw `time_t` integer to a readable string. |
| **localtime_s** | Securely converts the timer value to a local time structure (tm). |
| **strftime** | Formats the time into a character array based on a specific format string. |
| **Ternary Operator** | Used in `main` for clean, conditional logic based on CLI arguments. |

---

## 💻 How It Works

The `Timestamp` function adapts based on the provided input:

1. **Empty Input:** If no format is provided, it returns the current Unix Epoch time (e.g., `"1740261600"`).
2. **Formatted Input:** If a format like `%H:%M:%S` is provided, it processes the local time and returns a formatted string (e.g., `"14:30:05"`).
3. **CLI Support:** The `main` function allows passing a format string directly as a command-line argument.

---

## 🛠️ Installation & Compilation

To compile and run this project, you need a C++11 (or higher) compatible compiler (optimized for Windows/MSVC due to `localtime_s`).

```bash
# Clone the repository
git clone [https://github.com/xRangeroQ/Timestamp_Cpp.git](https://github.com/xRangeroQ/Timestamp_Cpp.git)

# Navigate to the directory
cd Timestamp_Cpp

# Compile with G++ or MSVC
g++ main.cpp -o TimestampApp

# Usage Examples:
./TimestampApp              # Output: 1740261600 - 1740261600
./TimestampApp "%Y-%m-%d"   # Output: 2026-02-23 - 1740261600
