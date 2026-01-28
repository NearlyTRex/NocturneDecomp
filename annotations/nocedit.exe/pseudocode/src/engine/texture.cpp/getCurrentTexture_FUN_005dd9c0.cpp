// Name: engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
// Address: 005dd9c0
// Address Range: [[005dd9c0, 005dda15]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005dd9c0(void)

#include "nocturne.h"

SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005dd9c0(void)

{
  char cVar1;
  char (*pacVar2) [64];
  char *pcVar3;
  
  g_CurrentTexture.base.count = g_CurrentTextureIndex;
  pcVar3 = g_CurrentTexture.texture_name;
  pacVar2 = g_TextureCacheInstance->texture_names + g_CurrentTextureIndex;
  g_CurrentTexture.base.type = 0xd;
  do {
    cVar1 = (*pacVar2)[0];
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return &g_CurrentTexture;
    }
    cVar1 = (*pacVar2)[1];
    pacVar2 = (char (*) [64])(*pacVar2 + 2);
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return &g_CurrentTexture;
}
