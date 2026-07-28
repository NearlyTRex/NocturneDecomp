// Name: engine_texture.cpp_FUN_005458d0
// Address: 005458d0
// Address Range: [[005458d0, 00545911]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_005458d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_005458d0(void)

{
  CTextureCache *pCVar1;
  
  engine_texture_cpp_FUN_00544e50(_DAT_02dd0f84);
  pCVar1 = _DAT_02dd0f84;
  if (_DAT_02dd0f84 == (CTextureCache *)0x0) {
    _DAT_02dd0f84 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(_DAT_02dd0f84);
  FUN_00564494(pCVar1);
  _DAT_02dd0f84 = (CTextureCache *)0x0;
  return;
}
