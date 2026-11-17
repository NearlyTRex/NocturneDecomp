// Name: engine_texture.cpp_getCurrentTexture_FUN_00545ad0
// Address: 00545ad0
// Address Range: [[00545ad0, 00545b25]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00545ad0(void)

#include "nocturne.h"

SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00545ad0(void)

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
      return (SMRGLTextureBasic *)&g_CurrentTexture;
    }
    cVar1 = (*pacVar2)[1];
    pacVar2 = (char (*) [64])(*pacVar2 + 2);
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return (SMRGLTextureBasic *)&g_CurrentTexture;
}
