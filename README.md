# bCPP
A place to keep my C/C++ beginner notes and learnings and what not

- ece520 ECE 520 Software Engineering for Embedded Applications
- aoc_23 Advent of Code 

### Windows

Visual Studio Code can be used to compile/run programs, and keeps project configurations in .vscode/tasks.json

Windows doesn't have a Make tool included with the C/++ development toolkit, so some options for compiling and linking code include using VScode, using CMake and directly invoking the g++ or C compiler

Windows developer build tools comes with the cl.exe  
/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/VC/Tools/MSVC/14.37.32822/bin/HostX86/x86/cl

I also installed the GNU c tools, g++ and gcc, appears to be the 64bit version
/c/msys64/mingw64/bin/g++
/c/msys64/mingw64/bin/gcc

I'll mostly use g++ and potentially explore cl at a later time..

g++ defaults to an output of a.out
cl defaults to output <file>.o and <file>.exe

g++ compiles in 4 steps, preprocesses (headers and macros) in .i or .ii files, then compiles into assembly (.s), then assembles into machine code (.o or .obj) and links (with linker ld) into an exe executable.

Example of using g++ to build and then link files, and keep o files and exes separate
g++ -c src/*.cpp src/*.h -o build/
cd bin
g++ -o a.exe .\build\*.o

Tricks and tools
doing g++ -v file.cpp will show all the compilation steps that are being done and libraries being accessed
file utility will show info about a file type


### Linux