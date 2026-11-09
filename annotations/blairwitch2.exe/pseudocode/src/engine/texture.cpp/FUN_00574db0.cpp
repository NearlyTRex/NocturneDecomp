// Name: engine_texture.cpp_FUN_00574db0
// Address: 00574db0
// Address Range: [[00574db0, 00574df1]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574db0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00574db0(void)

{
  CTextureCache *pCVar1;
  
  engine_texture_cpp_FUN_005739a0(_DAT_02652eb0);
  pCVar1 = _DAT_02652eb0;
  if (_DAT_02652eb0 == (CTextureCache *)0x0) {
    _DAT_02652eb0 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_FUN_005739b0(_DAT_02652eb0);
  FUN_005b7fdc(pCVar1);
  _DAT_02652eb0 = (CTextureCache *)0x0;
  return;
}
