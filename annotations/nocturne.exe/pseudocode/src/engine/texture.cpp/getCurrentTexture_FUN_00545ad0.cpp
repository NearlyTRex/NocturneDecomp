// Name: engine_texture.cpp_getCurrentTexture_FUN_00545ad0
// Address: 00545ad0
// Address Range: [[00545ad0, 00545b25]]
// Convention: __cdecl
// Signature: undefined1 * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00545ad0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00545ad0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  _DAT_02dd0f8c = _DAT_02dd0f80;
  pcVar3 = &DAT_02dd0f90;
  pcVar2 = (char *)(_DAT_02dd0f84 + 0x3008 + _DAT_02dd0f80 * 0x40);
  _DAT_02dd0f88 = 0xd;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return &DAT_02dd0f88;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return &DAT_02dd0f88;
}
