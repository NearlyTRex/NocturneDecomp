// Name: crt_unknown.c_IntegerToString_FUN_005c9e48
// Address: 005c9e48
// Address Range: [[005c9e48, 005c9e76]]
// Convention: __cdecl
// Signature: char * __cdecl crt_unknown_c_IntegerToString_FUN_005c9e48(int value,char *buffer,int base)

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
  FUN_005c9df0(value,pcVar1,base);
  return buffer;
}
