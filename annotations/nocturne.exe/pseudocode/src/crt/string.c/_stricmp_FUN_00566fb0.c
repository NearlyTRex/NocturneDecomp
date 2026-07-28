// Name: crt_string.c__stricmp_FUN_00566fb0
// Address: 00566fb0
// Address Range: [[00566fb0, 00566fb4]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c__stricmp_FUN_00566fb0(char *str1,char *str2)

#include "nocturne.h"

int __cdecl _stricmp(char *str1,char *str2)

{
  byte bVar1;
  byte bVar2;
  
  while( true ) {
    bVar1 = *str1;
    bVar2 = *str2;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      bVar2 = bVar2 + 0x20;
    }
    if ((bVar1 != bVar2) || (bVar2 == 0)) break;
    str1 = str1 + 1;
    str2 = str2 + 1;
  }
  return (uint)bVar1 - (uint)bVar2;
}
