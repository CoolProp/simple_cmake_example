# simple_cmake_example
A simple example of how to use the cmake build system and integrate with CoolProp

Prereqs:
* Python
* git
* A compiler/build system (visual studio, OSX, g++, etc.)

Start a command prompt!!

1. Do a recursive checkout of this example:
```
git clone --recursive https://github.com/CoolProp/simple_cmake_example
```
2. Move into the directory
```
cd simple_cmake_example
```
3. Make directories
```
mkdir build && cd build
```
4. Run cmake to generate build system
```
cmake .. -G GENERATOR
```
where ``GENERATOR`` would be ``"Visual Studio 14 2015 Win64"`` for Visual Studio 2015, or nothing for the default, or ``Xcode`` for Xcode on OSX.  See ``cmake --help`` for a list of supported generators on your computer
5. Build!
```
cmake --build .
```
