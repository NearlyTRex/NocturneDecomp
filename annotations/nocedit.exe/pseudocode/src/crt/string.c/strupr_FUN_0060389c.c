// Name: crt_string.c_strupr_FUN_0060389c
// Address: 0060389c
// Address Range: [[0060389c, 006038be]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strupr_FUN_0060389c(char *string)

#include "nocturne.h"

char * __cdecl strupr(char *string)

{
  byte bVar1;
  char *in_EAX;
  
  bVar1 = *string;
  while (bVar1 != 0) {
    in_EAX = (char *)toupper((uint)(byte)*string);
    *string = (byte)in_EAX;
    bVar1 = string[1];
    string = string + 1;
  }
  return in_EAX;
}
