// Name: engine_texture.cpp_freeTextureCache_FUN_00574db0
// Address: 00574db0
// Address Range: [[00574db0, 00574df1]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_freeTextureCache_FUN_00574db0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_freeTextureCache_FUN_00574db0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_005739a0(g_TextureCacheInstance);
  ptr = g_TextureCacheInstance;
  if (g_TextureCacheInstance == (CTextureCache *)0x0) {
    g_TextureCacheInstance = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005739b0(g_TextureCacheInstance);
  debugFreeChecked(ptr);
  g_TextureCacheInstance = (CTextureCache *)0x0;
  return;
}
