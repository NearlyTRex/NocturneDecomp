// Name: engine_texture.cpp_CTextureCache_uploadTexture_FUN_00574a80
// Address: 00574a80
// Address Range: [[00574a80, 00574adf]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_uploadTexture_FUN_00574a80(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_uploadTexture_FUN_00574a80(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

{
  STextureCacheEntry *pSVar1;
  
  if (_DAT_01c37788 != 0) {
    pSVar1 = this_ptr->entries + (texture->base).count;
    if (pSVar1->true_color_data != (uchar *)0x0) {
      (*_DAT_0264bbec)(texture,pSVar1->dimension,pSVar1->true_color_data);
      return;
    }
    (*_DAT_0264bbe4)(texture,pSVar1->dimension,pSVar1->texture_data,pSVar1->palette_data,
                     pSVar1->opacity_data);
  }
  return;
}
