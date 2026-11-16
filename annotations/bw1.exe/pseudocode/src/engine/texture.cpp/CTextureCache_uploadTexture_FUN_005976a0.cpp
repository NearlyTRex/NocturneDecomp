// Name: engine_texture.cpp_CTextureCache_uploadTexture_FUN_005976a0
// Address: 005976a0
// Address Range: [[005976a0, 005976ff]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_uploadTexture_FUN_005976a0(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_uploadTexture_FUN_005976a0(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

{
  STextureCacheEntry *pSVar1;
  
  if (_DAT_01c50948 != 0) {
    pSVar1 = this_ptr->entries + (texture->base).count;
    if (pSVar1->true_color_data != (uchar *)0x0) {
      (*_DAT_02c833bc)(texture,pSVar1->dimension,pSVar1->true_color_data);
      return;
    }
    (*_DAT_02c833b4)(texture,pSVar1->dimension,pSVar1->texture_data,pSVar1->palette_data,
                     pSVar1->opacity_data);
  }
  return;
}
