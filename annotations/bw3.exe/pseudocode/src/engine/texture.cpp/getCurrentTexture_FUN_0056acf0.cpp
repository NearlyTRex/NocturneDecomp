// Name: engine_texture.cpp_getCurrentTexture_FUN_0056acf0
// Address: 0056acf0
// Address Range: [[0056acf0, 0056ad45]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_0056acf0(void)

#include "nocturne.h"

SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_0056acf0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  g_SMRGLTextureModel_02cfd714.base.type = 0xd;
  g_SMRGLTextureModel_02cfd714.base.count = g_INT_02cfd0cc;
  pcVar3 = g_SMRGLTextureModel_02cfd714.texture_name;
  pcVar2 = g_TextureCacheInstance->entries[g_INT_02cfd0cc].texture_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return (SMRGLTextureBasic *)&g_SMRGLTextureModel_02cfd714;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return (SMRGLTextureBasic *)&g_SMRGLTextureModel_02cfd714;
}
