// Name: engine_texture.cpp_CTextureCache_findFreeSlot_FUN_00573a60
// Address: 00573a60
// Address Range: [[00573a60, 00573b7f]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00573a60(CTextureCache *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00573a60(CTextureCache *this_ptr)

{
  uint uVar1;
  CTextureCache *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  STextureCacheEntry *dest;
  
  if (this_ptr->wrap_indicator == 0) {
    iVar5 = this_ptr->current_texture_count;
    this_ptr->current_texture_count = iVar5 + 1;
    if (0x3ff < iVar5 + 1) {
      this_ptr->wrap_indicator = 1;
      iVar4 = _DAT_02652eb4;
      this_ptr->current_texture_count = 0x400;
      if (iVar4 != 0) {
        _DAT_01d046a0 = "..\\engine\\texture.cpp";
        _DAT_01d046a4 = 0xbc;
        core_main_c_FUN_004e4500("CTextureCache::findFreeSlot - Cache has wrapped, but is supposed to be frozen");
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
    iVar4 = 0;
    iVar5 = 0;
    pCVar2 = this_ptr;
    do {
      if ((pCVar2->entries[0].is_locked == 0) &&
         (uVar1 = pCVar2->entries[0].use_stamp, uVar1 < uVar3)) {
        uVar3 = uVar1;
        iVar5 = iVar4;
      }
      iVar4 = iVar4 + 1;
      pCVar2 = (CTextureCache *)&pCVar2->entries[0].hw_texture_handle;
    } while (iVar4 < 0x400);
  }
  dest = this_ptr->entries + iVar5;
  if (dest->texture_data != (uchar *)0x0) {
    FUN_005b86a0(dest->texture_data);
  }
  if (dest->opacity_data != (uchar *)0x0) {
    FUN_005b86a0(dest->opacity_data);
  }
  if (dest->palette_data != (uchar *)0x0) {
    FUN_005b86a0(dest->palette_data);
  }
  if (dest->true_color_data != (uchar *)0x0) {
    FUN_005b86a0(dest->true_color_data);
    memset(dest,0,0x60);
    return iVar5;
  }
  memset(dest,0,0x60);
  return iVar5;
}
