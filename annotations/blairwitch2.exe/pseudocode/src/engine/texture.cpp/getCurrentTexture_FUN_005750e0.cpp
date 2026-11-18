// Name: engine_texture.cpp_getCurrentTexture_FUN_005750e0
// Address: 005750e0
// Address Range: [[005750e0, 00575135]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005750e0(void)

#include "nocturne.h"

SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005750e0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  g_SMRGLTextureModel_026534f4.base.type = 0xd;
  g_SMRGLTextureModel_026534f4.base.count = g_INT_02652eac;
  pcVar3 = g_SMRGLTextureModel_026534f4.texture_name;
  pcVar2 = g_TextureCacheInstance->entries[g_INT_02652eac].texture_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return (SMRGLTextureBasic *)&g_SMRGLTextureModel_026534f4;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return (SMRGLTextureBasic *)&g_SMRGLTextureModel_026534f4;
}
