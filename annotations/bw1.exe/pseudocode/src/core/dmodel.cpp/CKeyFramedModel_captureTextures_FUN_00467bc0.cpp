// Name: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00467bc0
// Address: 00467bc0
// Address Range: [[00467bc0, 00467bfc]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00467bc0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00467bc0(CKeyFramedModel *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = (SMRGLTextureBasic *)this_ptr->texture_list;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
      texture = texture + 3;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}
