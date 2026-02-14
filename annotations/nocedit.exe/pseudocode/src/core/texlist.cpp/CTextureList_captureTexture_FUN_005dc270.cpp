// Name: core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270
// Address: 005dc270
// Address Range: [[005dc270, 005dc29f]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_005dc270(CTextureList *this_ptr,uint texture_index)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_005dc270(CTextureList *this_ptr,uint texture_index)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,this_ptr->texture_entries + (texture_index & 0xfff));
  return;
}
