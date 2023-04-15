A simple shell is a basic command-line interface (CLI) program that allows users to enter commands and receive output from the operating system. It is typically used in Unix-based systems, such as Linux, and is often referred to as a "terminal" or "console."

A simple shell provides a minimalistic interface for interacting with the operating system, which is especially useful for users who prefer a keyboard-based interface or need to automate tasks using scripts. The shell parses the user's input, executes the appropriate commands, and displays the output to the user.

Some popular simple shell programs include Bash, Zsh, and Tcsh. These shells offer a wide range of features, including command history, auto-completion, and scripting capabilities. In addition to running commands directly, a simple shell can also execute scripts written in various programming languages, such as Bash scripts or Python scripts.
.
Overall, a simple shell is an essential tool for any Unix-based system administrator or power user. By mastering the basic commands and features of a shell, users can greatly increase their productivity and automate repetitive tasks.

*Exercises*
0. printenv with environ
Write a program that prints the environment using the global variable environ.

1. env vs environ
Write a program that prints the address of env (the third parameter of the main function) and environ (the global variable). Are they they same? Does this make sense?

2. getenv()
Write a function that gets an environment variable. (without using getenv)

Prototype: char *_getenv(const char *name);
man 3 getenv

3. PATH
Write a function that prints each directory contained in the the environment variable PATH, one directory per line.

4. PATH
Write a function that builds a linked list of the PATH directories.

5. setenv
Write a function that changes or adds an environment variable (without using setenv).

Prototype: int _setenv(const char *name, const char *value, int overwrite);
man 3 setenv

6. unsetenv
Write a function that deletes the variable name from the environment (without using unsetenv).

Prototype: int _unsetenv(const char *name);
man 3 unsetenv
