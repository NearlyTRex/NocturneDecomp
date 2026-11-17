// Name: engine_texture.cpp_freeTextureCache_FUN_005979d0
// Address: 005979d0
// Address Range: [[005979d0, 00597a11]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_freeTextureCache_FUN_005979d0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_freeTextureCache_FUN_005979d0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_005965c0(g_CTextureCache_PTR_02c8a680);
  ptr = g_CTextureCache_PTR_02c8a680;
  if (g_CTextureCache_PTR_02c8a680 == (CTextureCache *)0x0) {
    g_CTextureCache_PTR_02c8a680 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005965d0(g_CTextureCache_PTR_02c8a680);
  debugFreeChecked(ptr);
  g_CTextureCache_PTR_02c8a680 = (CTextureCache *)0x0;
  return;
}
