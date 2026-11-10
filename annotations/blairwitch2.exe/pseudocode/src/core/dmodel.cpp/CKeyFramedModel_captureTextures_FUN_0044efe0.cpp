// Name: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_0044efe0
// Address: 0044efe0
// Address Range: [[0044efe0, 0044f01c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_0044efe0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_0044efe0(CKeyFramedModel *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = (SMRGLTextureBasic *)&this_ptr->field_0x124;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
      texture = texture + 0x48;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}
