// Name: engine_texture.cpp_freeTextureCache_FUN_00574db0
// Address: 00574db0
// Address Range: [[00574db0, 00574df1]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_freeTextureCache_FUN_00574db0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_freeTextureCache_FUN_00574db0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_005739a0(g_CTextureCache_PTR_02652eb0);
  ptr = g_CTextureCache_PTR_02652eb0;
  if (g_CTextureCache_PTR_02652eb0 == (CTextureCache *)0x0) {
    g_CTextureCache_PTR_02652eb0 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005739b0(g_CTextureCache_PTR_02652eb0);
  debugFreeChecked(ptr);
  g_CTextureCache_PTR_02652eb0 = (CTextureCache *)0x0;
  return;
}
