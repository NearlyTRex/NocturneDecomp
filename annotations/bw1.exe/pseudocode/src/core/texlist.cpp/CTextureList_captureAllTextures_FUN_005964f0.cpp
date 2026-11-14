// Name: core_texlist.cpp_CTextureList_captureAllTextures_FUN_005964f0
// Address: 005964f0
// Address Range: [[005964f0, 00596521]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_005964f0(CTextureList *this_ptr)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_005964f0(CTextureList *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = this_ptr->texture_entries;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
      texture = texture + 1;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}
