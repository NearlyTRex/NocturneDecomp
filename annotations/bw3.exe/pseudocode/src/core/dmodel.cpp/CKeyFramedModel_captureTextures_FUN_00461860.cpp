// Name: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00461860
// Address: 00461860
// Address Range: [[00461860, 0046189c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00461860(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00461860(CKeyFramedModel *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = (SMRGLTextureBasic *)this_ptr->texture_list;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
      texture = texture + 3;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}
