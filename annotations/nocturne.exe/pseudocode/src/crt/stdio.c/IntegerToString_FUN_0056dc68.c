// Name: crt_stdio.c_IntegerToString_FUN_0056dc68
// Address: 0056dc68
// Address Range: [[0056dc68, 0056dc96]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c_IntegerToString_FUN_0056dc68(int value,char *buffer,int base)

#include "nocturne.h"

char * __cdecl IntegerToString(int value,char *buffer,int base)

{
  char *buffer_00;
  
  buffer_00 = buffer;
  if ((base == 10) && (value < 0)) {
    value = -value;
    buffer_00 = buffer + 1;
    *buffer = '-';
  }
  itoa(value,buffer_00,base);
  return buffer;
}
