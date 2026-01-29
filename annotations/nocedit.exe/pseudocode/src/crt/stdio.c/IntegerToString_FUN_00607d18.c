// Name: crt_stdio.c_IntegerToString_FUN_00607d18
// Address: 00607d18
// Address Range: [[00607d18, 00607d46]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c_IntegerToString_FUN_00607d18(int value,char *buffer,int base)

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
