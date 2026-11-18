// Name: engine_texture.cpp_freeTextureCache_FUN_005458d0
// Address: 005458d0
// Address Range: [[005458d0, 00545911]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_freeTextureCache_FUN_005458d0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_freeTextureCache_FUN_005458d0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_00544e50(g_TextureCacheInstance);
  ptr = g_TextureCacheInstance;
  if (g_TextureCacheInstance == (CTextureCache *)0x0) {
    g_TextureCacheInstance = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(g_TextureCacheInstance);
  operator_delete(ptr);
  g_TextureCacheInstance = (CTextureCache *)0x0;
  return;
}
