// Name: engine_texture.cpp_clearTextureCache_FUN_0056ac20
// Address: 0056ac20
// Address Range: [[0056ac20, 0056ac40]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_clearTextureCache_FUN_0056ac20(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_clearTextureCache_FUN_0056ac20(void)

{
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005695c0(g_TextureCacheInstance);
  g_INT_02cfd0d4 = 0;
  return;
}
