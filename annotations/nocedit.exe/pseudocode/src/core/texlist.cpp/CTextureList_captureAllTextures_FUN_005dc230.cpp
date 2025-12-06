// Name: core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230
// Address: 005dc230
// Address Range: [[005dc230, 005dc261]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230(CTextureList * this_ptr)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_005dc230(CTextureList *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = this_ptr->texture_entries;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
      texture = texture + 1;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}
