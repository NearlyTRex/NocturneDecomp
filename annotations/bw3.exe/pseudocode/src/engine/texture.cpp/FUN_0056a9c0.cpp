// Name: engine_texture.cpp_FUN_0056a9c0
// Address: 0056a9c0
// Address Range: [[0056a9c0, 0056aa01]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_0056a9c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_0056a9c0(void)

{
  CTextureCache *pCVar1;
  
  engine_texture_cpp_FUN_005695b0(_DAT_02cfd0d0);
  pCVar1 = _DAT_02cfd0d0;
  if (_DAT_02cfd0d0 == (CTextureCache *)0x0) {
    _DAT_02cfd0d0 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_FUN_005695c0(_DAT_02cfd0d0);
  FUN_005a30c4(pCVar1);
  _DAT_02cfd0d0 = (CTextureCache *)0x0;
  return;
}
