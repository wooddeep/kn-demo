## 1. 生成静态库
gcc -c hello.c
ar rcs lib/libhello.a hello.o

## 2. 生成klib
cinterop -def hello.def -compiler-option -I. -o hello

## 3. 编译
kotlinc-native main.kt -library hello  -o main