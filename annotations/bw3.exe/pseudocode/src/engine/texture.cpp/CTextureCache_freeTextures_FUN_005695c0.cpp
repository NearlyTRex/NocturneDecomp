// Name: engine_texture.cpp_CTextureCache_freeTextures_FUN_005695c0
// Address: 005695c0
// Address Range: [[005695c0, 00569665]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_005695c0(CTextureCache *this_ptr)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_005695c0(CTextureCache *this_ptr)

{
  byte *puVar1;
  STextureCacheEntry *pSVar2;
  
  this_ptr->use_counter = 0;
  pSVar2 = this_ptr->entries;
  this_ptr->current_texture_count = 0;
  do {
    if (pSVar2->texture_data != (uchar *)0x0) {
      debugFree(pSVar2->texture_data);
    }
    if (pSVar2->opacity_data != (uchar *)0x0) {
      debugFree(pSVar2->opacity_data);
    }
    if (pSVar2->palette_data != (uchar *)0x0) {
      debugFree(pSVar2->palette_data);
    }
    if (pSVar2->true_color_data != (uchar *)0x0) {
      debugFree(pSVar2->true_color_data);
    }
    pSVar2 = pSVar2 + 1;
  } while (pSVar2 != (STextureCacheEntry *)&this_ptr->current_texture_count);
  memset(this_ptr->entries,0,0x18000);
  puVar1 = g_PTR_02cf60e8;
  this_ptr->wrap_indicator = 0;
  if (puVar1 == (byte *)0x0) {
    return;
  }
  (*(code *)g_PTR_02cf60e8)();
  return;
}
