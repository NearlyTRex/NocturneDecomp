// Name: core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
// Address: 00490070
// MANUAL RECONSTRUCTION
// Address Range: [[00490070, 004900a3]]
// Convention: __cdecl
// Signature: SMRGLSkyTexture * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(SMRGLSkyTexture *texture)

#include "nocturne.h"

SMRGLSkyTexture * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(SMRGLSkyTexture *texture)

{
  texture->reserved = 0;
  strcpy(texture->texture_name,"NITESKY.RAW");
  return texture;
}
