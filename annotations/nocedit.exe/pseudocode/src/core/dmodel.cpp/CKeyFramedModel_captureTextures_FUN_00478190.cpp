// Name: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
// Address: 00478190
// Address Range: [[00478190, 004781cc]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = &this_ptr->texture_list[0].base;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
      texture = texture + 3;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}
