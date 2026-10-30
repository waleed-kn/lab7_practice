# Lab 7: Git Branching Practice

A beginner-friendly C++ project for practising Git branches, commits, and conflict resolution.

## Project files

- `src/main.cpp` contains the program and prints a welcome message and project information.
- `.gitignore` tells Git to ignore generated build files.
- `docs/README.md` describes the purpose of the documentation folder.

## Build and run on Windows

With a C++ compiler such as MinGW-w64 `g++` installed and available in PowerShell:

```powershell
New-Item -ItemType Directory -Force build
g++ .\src\main.cpp -o .\build\lab7-git-practice.exe
.\build\lab7-git-practice.exe
```

The `build` folder contains generated files and is not tracked by Git.
