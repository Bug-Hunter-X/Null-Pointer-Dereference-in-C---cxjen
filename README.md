# Null Pointer Dereference Bug in C++

This repository demonstrates a common C++ error: dereferencing a null pointer.  The `bug.cpp` file contains the problematic code, while `bugSolution.cpp` provides a corrected version.

**Bug:** The original code attempts to assign a value to a memory location pointed to by a null pointer, resulting in undefined behavior.

**Solution:** The corrected code checks if the pointer is null before attempting to dereference it, preventing the error.

This example highlights the importance of careful pointer handling in C++ to avoid crashes and unexpected behavior.