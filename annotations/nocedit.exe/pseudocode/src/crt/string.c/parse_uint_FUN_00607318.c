// Name: crt_string.c_parse_uint_FUN_00607318
// Address: 00607318
// Address Range: [[00607318, 00607346]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_parse_uint_FUN_00607318(char *str,int *result)

#include "nocturne.h"

char * __cdecl crt_string_c_parse_uint_FUN_00607318(char *str,int *result)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = *str;
  iVar3 = 0;
  while ((0x2f < bVar1 && ((byte)*str < 0x3a))) {
    bVar2 = *str;
    str = (char *)((byte *)str + 1);
    bVar1 = *str;
    iVar3 = iVar3 * 10 + (uint)bVar2 + -0x30;
  }
  *result = iVar3;
  return str;
}
