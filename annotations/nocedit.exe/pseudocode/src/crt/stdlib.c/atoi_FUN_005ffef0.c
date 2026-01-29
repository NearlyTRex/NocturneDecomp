// Name: crt_stdlib.c_atoi_FUN_005ffef0
// Address: 005ffef0
// Address Range: [[005ffef0, 005fff46]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdlib_c_atoi_FUN_005ffef0(char *string_ptr)

#include "nocturne.h"

int __cdecl atoi(char *string_ptr)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  while ((g_CharacterClassificationTable[(byte)(*string_ptr + 1)] & 2U) != 0) {
    string_ptr = (char *)((byte *)string_ptr + 1);
  }
  bVar1 = *string_ptr;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    string_ptr = (char *)((byte *)string_ptr + 1);
  }
  iVar3 = 0;
  while ((g_CharacterClassificationTable[(byte)(*string_ptr + 1)] & 0x20U) != 0) {
    bVar2 = *string_ptr;
    string_ptr = (char *)((byte *)string_ptr + 1);
    iVar3 = iVar3 * 10 + (uint)bVar2 + -0x30;
  }
  if (bVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}
