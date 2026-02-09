// Name: engine_texture.cpp_freeTextureCache_FUN_005dd7a0
// Address: 005dd7a0
// Address Range: [[005dd7a0, 005dd7fb]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_freeTextureCache_FUN_005dd7a0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_freeTextureCache_FUN_005dd7a0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_005dcb20(g_TextureCacheInstance);
  ptr = g_TextureCacheInstance;
  g_CurrentDebugLine = 0x284;
  g_CurrentDebugFilename = "..\\engine\\texture.cpp";
  if (g_TextureCacheInstance == (CTextureCache *)0x0) {
    g_TextureCacheInstance = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005dcb30(g_TextureCacheInstance);
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  g_TextureCacheInstance = (CTextureCache *)0x0;
  return;
}
