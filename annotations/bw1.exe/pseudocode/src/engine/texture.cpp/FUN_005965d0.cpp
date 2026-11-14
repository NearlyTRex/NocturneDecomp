// Name: engine_texture.cpp_FUN_005965d0
// Address: 005965d0
// Address Range: [[005965d0, 00596675]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_FUN_005965d0(CTextureCache *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_FUN_005965d0(CTextureCache *this_ptr)

{
  code *pcVar1;
  STextureCacheEntry *pSVar2;
  
  this_ptr->use_counter = 0;
  pSVar2 = this_ptr->entries;
  this_ptr->current_texture_count = 0;
  do {
    if (pSVar2->texture_data != (uchar *)0x0) {
      FUN_005c09f0(pSVar2->texture_data);
    }
    if (pSVar2->opacity_data != (uchar *)0x0) {
      FUN_005c09f0(pSVar2->opacity_data);
    }
    if (pSVar2->palette_data != (uchar *)0x0) {
      FUN_005c09f0(pSVar2->palette_data);
    }
    if (pSVar2->true_color_data != (uchar *)0x0) {
      FUN_005c09f0(pSVar2->true_color_data);
    }
    pSVar2 = pSVar2 + 1;
  } while (pSVar2 != (STextureCacheEntry *)&this_ptr->current_texture_count);
  memset(this_ptr->entries,0,0x18000);
  pcVar1 = _DAT_02c8348c;
  this_ptr->wrap_indicator = 0;
  if (pcVar1 == (code *)0x0) {
    return;
  }
  (*_DAT_02c8348c)();
  return;
}
