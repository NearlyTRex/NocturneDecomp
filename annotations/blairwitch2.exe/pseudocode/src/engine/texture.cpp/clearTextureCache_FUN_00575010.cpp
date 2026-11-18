// Name: engine_texture.cpp_clearTextureCache_FUN_00575010
// Address: 00575010
// Address Range: [[00575010, 00575030]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_clearTextureCache_FUN_00575010(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_clearTextureCache_FUN_00575010(void)

{
  engine_texture_cpp_CTextureCache_freeTextures_FUN_005739b0(g_TextureCacheInstance);
  g_INT_02652eb4 = 0;
  return;
}
