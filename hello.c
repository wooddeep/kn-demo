/*

// 生成库
mkdir lib
gcc -c hello.c
ar rcs lib/libhello.a hello.o

// 生成kotlin定义
cinterop -def hello.def -compiler-option -I. -o hello

*/

#include "hello.h"
#include <stdio.h>

void sayHello()
{
    printf("Hello Kotlin Native\n");
}