// Name: engine_texture.cpp_freeTextureCache_FUN_0056a9c0
// Address: 0056a9c0
// Address Range: [[0056a9c0, 0056aa01]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_freeTextureCache_FUN_0056a9c0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_freeTextureCache_FUN_0056a9c0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_005695b0(g_CTextureCache_PTR_02cfd0d0);
  ptr = g_CTextureCache_PTR_02cfd0d0;
  if (g_CTextureCache_PTR_02cfd0d0 == (CTextureCache *)0x0) {
    g_CTextureCache_PTR_02cfd0d0 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005695c0(g_CTextureCache_PTR_02cfd0d0);
  debugFreeChecked(ptr);
  g_CTextureCache_PTR_02cfd0d0 = (CTextureCache *)0x0;
  return;
}
