// Name: core_texlist.cpp_CTextureList_captureTexture_FUN_00544db0
// Address: 00544db0
// Address Range: [[00544db0, 00544ddf]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00544db0(CTextureList *this_ptr,uint texture_index)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00544db0(CTextureList *this_ptr,uint texture_index)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,this_ptr->texture_entries + (texture_index & 0xfff));
  return;
}
