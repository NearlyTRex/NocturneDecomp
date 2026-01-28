// Name: core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
// Address: 00490070
// Address Range: [[00490070, 004900a3]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(SMRGLTextureBasic *texture)

#include "nocturne.h"

SMRGLTextureBasic * __cdecl
core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(SMRGLTextureBasic *texture)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "NITESKY.RAW";
  pcVar3 = texture->texture_name + 4;
  texture->texture_name[0] = '\0';
  texture->texture_name[1] = '\0';
  texture->texture_name[2] = '\0';
  texture->texture_name[3] = '\0';
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
