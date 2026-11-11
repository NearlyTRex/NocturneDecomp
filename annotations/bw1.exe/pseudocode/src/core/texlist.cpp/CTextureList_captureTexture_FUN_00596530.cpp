// Name: core_texlist.cpp_CTextureList_captureTexture_FUN_00596530
// Address: 00596530
// Address Range: [[00596530, 0059655f]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00596530(CTextureList *this_ptr,uint texture_index)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00596530(CTextureList *this_ptr,uint texture_index)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,this_ptr->texture_entries + (texture_index & 0xfff));
  return;
}
