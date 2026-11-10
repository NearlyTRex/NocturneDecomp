// Name: engine_texture.cpp_freeTextureCache_FUN_005979d0
// Address: 005979d0
// Address Range: [[005979d0, 00597a11]]
// Convention: unknown
// Signature: void engine_texture_cpp_freeTextureCache_FUN_005979d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_freeTextureCache_FUN_005979d0(void)

{
  CTextureCache *pCVar1;
  
  engine_texture_cpp_CTextureCache_reset_FUN_005965c0(_DAT_02c8a680);
  pCVar1 = _DAT_02c8a680;
  if (_DAT_02c8a680 == (CTextureCache *)0x0) {
    _DAT_02c8a680 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_FUN_005965d0(_DAT_02c8a680);
  FUN_005c0344(pCVar1);
  _DAT_02c8a680 = (CTextureCache *)0x0;
  return;
}
