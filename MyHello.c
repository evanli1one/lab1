/*
  MyHello.c
  Evan Li 1682859 CSE15 10/5/19
  Main c program for lab1
  Defines strings and prints them to
  a greet and introduce my name
*/
#include <stdio.h>
#include <stdlib.h>
#define HELLO_STRING "Hello World!"
#define NAME_STRING "Evan Li"

int main() {
  printf(HELLO_STRING " My name is " NAME_STRING ".\n");
  return EXIT_SUCCESS;
}
