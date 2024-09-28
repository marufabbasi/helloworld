# Hello World! program

## Build
From the program home directory type:

```
mkdir build
cd build
cmake ..
make
cpack -G DEB
```

You need cmake version 3.10 or later and C++ 11 compiler installed.

## Install

To insyall run something like:

```
dpkg -i hello-1.0.0.deb 
```

Change the debian package file name as required.