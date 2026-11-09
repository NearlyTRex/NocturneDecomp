// Name: core_texlist.cpp_CTextureList_captureTexture_FUN_00573910
// Address: 00573910
// Address Range: [[00573910, 0057393f]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00573910(CTextureList *this_ptr,uint texture_index)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00573910(CTextureList *this_ptr,uint texture_index)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,
             (SMRGLTextureBasic *)(&this_ptr->field_0x4 + (texture_index & 0xfff) * 0x18));
  return;
}
