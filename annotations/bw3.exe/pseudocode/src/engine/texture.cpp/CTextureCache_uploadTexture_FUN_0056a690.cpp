// Name: engine_texture.cpp_CTextureCache_uploadTexture_FUN_0056a690
// Address: 0056a690
// Address Range: [[0056a690, 0056a6ef]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_uploadTexture_FUN_0056a690(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_uploadTexture_FUN_0056a690(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

{
  STextureCacheEntry *pSVar1;
  
  if (g_INT_01c6cee8 != 0) {
    pSVar1 = this_ptr->entries + (texture->base).count;
    if (pSVar1->true_color_data != (uchar *)0x0) {
      (*(code *)g_PTR_02cf6018)(texture,pSVar1->dimension,pSVar1->true_color_data);
      return;
    }
    (*(code *)g_PTR_02cf6010)
              (texture,pSVar1->dimension,pSVar1->texture_data,pSVar1->palette_data,
               pSVar1->opacity_data);
  }
  return;
}
