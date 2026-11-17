// Name: engine_texture.cpp_CTextureCache_uploadTexture_FUN_00574a80
// Address: 00574a80
// Address Range: [[00574a80, 00574adf]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_uploadTexture_FUN_00574a80(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_uploadTexture_FUN_00574a80(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

{
  STextureCacheEntry *pSVar1;
  
  if (g_INT_01c37788 != 0) {
    pSVar1 = this_ptr->entries + (texture->base).count;
    if (pSVar1->true_color_data != (uchar *)0x0) {
      (*(code *)g_PTR_0264bbec)(texture,pSVar1->dimension,pSVar1->true_color_data);
      return;
    }
    (*(code *)g_PTR_0264bbe4)
              (texture,pSVar1->dimension,pSVar1->texture_data,pSVar1->palette_data,
               pSVar1->opacity_data);
  }
  return;
}
