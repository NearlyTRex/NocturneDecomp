// Name: engine_texture.cpp_clearTextureCache_FUN_005459f0
// Address: 005459f0
// Address Range: [[005459f0, 00545a00]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_clearTextureCache_FUN_005459f0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_clearTextureCache_FUN_005459f0(void)

{
  engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(g_TextureCacheInstance);
  return;
}
