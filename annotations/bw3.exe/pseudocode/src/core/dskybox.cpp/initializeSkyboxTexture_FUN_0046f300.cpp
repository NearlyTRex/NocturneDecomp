// Name: core_dskybox.cpp_initializeSkyboxTexture_FUN_0046f300
// Address: 0046f300
// Address Range: [[0046f300, 0046f333]]
// Convention: __cdecl
// Signature: SMRGLSkyTexture * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_0046f300(SMRGLSkyTexture *texture)

#include "nocturne.h"

SMRGLSkyTexture * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_0046f300(SMRGLSkyTexture *texture)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "ANITESKY.RAW" + 1;
  pcVar3 = texture->texture_name;
  texture->reserved = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return texture;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return texture;
}
