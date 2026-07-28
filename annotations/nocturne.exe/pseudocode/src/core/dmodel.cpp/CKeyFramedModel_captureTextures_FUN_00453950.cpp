// Name: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950
// Address: 00453950
// Address Range: [[00453950, 0045398c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(CKeyFramedModel *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = this_ptr->texture_list[0].textures;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
      texture = texture + 3;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}
