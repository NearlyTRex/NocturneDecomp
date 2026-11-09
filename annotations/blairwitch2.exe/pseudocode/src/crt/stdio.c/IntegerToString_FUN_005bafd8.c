// Name: crt_stdio.c_IntegerToString_FUN_005bafd8
// Address: 005bafd8
// Address Range: [[005bafd8, 005bb006]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c_IntegerToString_FUN_005bafd8(int value,char *buffer,int base)

#include "nocturne.h"

char * __cdecl IntegerToString(int value,char *buffer,int base)

{
  char *pcVar1;
  
  pcVar1 = buffer;
  if ((base == 10) && (value < 0)) {
    value = -value;
    pcVar1 = buffer + 1;
    *buffer = '-';
  }
  FUN_005baf80(value,pcVar1,base);
  return buffer;
}
