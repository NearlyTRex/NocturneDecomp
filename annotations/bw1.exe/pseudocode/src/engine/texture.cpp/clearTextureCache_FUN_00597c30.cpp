// Name: engine_texture.cpp_clearTextureCache_FUN_00597c30
// Address: 00597c30
// Address Range: [[00597c30, 00597c50]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_clearTextureCache_FUN_00597c30(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_clearTextureCache_FUN_00597c30(void)

{
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005965d0(g_CTextureCache_PTR_02c8a680);
  g_INT_02c8a684 = 0;
  return;
}
