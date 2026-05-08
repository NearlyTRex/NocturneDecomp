// Name: engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
// Address: 005dd9c0
// MANUAL RECONSTRUCTION
// Address Range: [[005dd9c0, 005dda15]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005dd9c0(void)

#include "nocturne.h"

SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005dd9c0(void)

{
  g_CurrentTexture.base.count = g_CurrentTextureIndex;
  g_CurrentTexture.base.type = 0xd;
  strcpy(g_CurrentTexture.texture_name,
         g_TextureCacheInstance->texture_names[g_CurrentTextureIndex]);
  return &g_CurrentTexture;
}
