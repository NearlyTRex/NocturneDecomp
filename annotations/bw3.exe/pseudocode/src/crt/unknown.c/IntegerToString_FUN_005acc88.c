// Name: crt_unknown.c_IntegerToString_FUN_005acc88
// Address: 005acc88
// Address Range: [[005acc88, 005accb6]]
// Convention: __cdecl
// Signature: char * __cdecl crt_unknown_c_IntegerToString_FUN_005acc88(int value,char *buffer,int base)

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
  FUN_005acc30(value,pcVar1,base);
  return buffer;
}
