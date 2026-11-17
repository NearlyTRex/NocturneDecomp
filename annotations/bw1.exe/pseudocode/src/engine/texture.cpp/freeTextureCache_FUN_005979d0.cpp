// Name: engine_texture.cpp_freeTextureCache_FUN_005979d0
// Address: 005979d0
// Address Range: [[005979d0, 00597a11]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_freeTextureCache_FUN_005979d0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_freeTextureCache_FUN_005979d0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_005965c0(g_TextureCacheInstance);
  ptr = g_TextureCacheInstance;
  if (g_TextureCacheInstance == (CTextureCache *)0x0) {
    g_TextureCacheInstance = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005965d0(g_TextureCacheInstance);
  debugFreeChecked(ptr);
  g_TextureCacheInstance = (CTextureCache *)0x0;
  return;
}
