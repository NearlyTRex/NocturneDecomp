// Name: crt_string.c_strupr_FUN_0060389c
// Address: 0060389c
// Address Range: [[0060389c, 006038be]]
// Convention: __cdecl
// Signature: char * crt_string.c_strupr_FUN_0060389c(char * string)

#include "nocturne.h"

char * __cdecl crt_string_c_strupr_FUN_0060389c(char *string)

{
  byte bVar1;
  char *in_EAX;
  
  bVar1 = *string;
  while (bVar1 != 0) {
    in_EAX = (char *)crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)*string);
    *string = (byte)in_EAX;
    bVar1 = ((byte *)string)[1];
    string = (char *)((byte *)string + 1);
  }
  return in_EAX;
}
