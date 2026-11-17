// Name: engine_3d.c_freeTextureCache_FUN_00404490
// Address: 00404490
// Address Range: [[00404490, 00404494]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_freeTextureCache_FUN_00404490(void)

#include "nocturne.h"

void __cdecl engine_3d_c_freeTextureCache_FUN_00404490(void)

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
