// Name: core_texlist.cpp_CTextureList_captureTexture_FUN_00569520
// Address: 00569520
// Address Range: [[00569520, 0056954f]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00569520(CTextureList *this_ptr,uint texture_index)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00569520(CTextureList *this_ptr,uint texture_index)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,this_ptr->texture_entries + (texture_index & 0xfff));
  return;
}
