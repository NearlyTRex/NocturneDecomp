// Name: engine_texture.cpp_freeTextureCache_FUN_00574db0
// Address: 00574db0
// Address Range: [[00574db0, 00574df1]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_freeTextureCache_FUN_00574db0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_freeTextureCache_FUN_00574db0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_005739a0(_DAT_02652eb0);
  ptr = _DAT_02652eb0;
  if (_DAT_02652eb0 == (CTextureCache *)0x0) {
    _DAT_02652eb0 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005739b0(_DAT_02652eb0);
  debugFreeChecked(ptr);
  _DAT_02652eb0 = (CTextureCache *)0x0;
  return;
}
