// Name: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
// Address: 005dd690
// Address Range: [[005dd690, 005dd75a]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_005dd690 (CTextureCache *this_ptr,char *output_buffer)

#include "nocturne.h"

int __cdecl
engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
          (CTextureCache *this_ptr,char *output_buffer)

{
  CTextureCache *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = 0;
  iVar4 = 0;
  local_14 = 0;
  local_18 = 0;
  if (this_ptr->wrap_indicator == 0) {
    iVar3 = 0;
    pCVar1 = this_ptr;
    if (0 < this_ptr->current_texture_count) {
      do {
        if (pCVar1->texture_dimensions[0] == 0x20) {
          iVar5 = iVar5 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x40) {
          iVar6 = iVar6 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x80) {
          iVar2 = iVar2 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x100) {
          local_14 = local_14 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x200) {
          iVar4 = iVar4 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x400) {
          local_18 = local_18 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar1 = (CTextureCache *)&pCVar1->max_texture_count;
      } while (iVar3 < this_ptr->current_texture_count);
    }
    iVar2 = sprintf
                      (output_buffer,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d, 512: %d, 1024: %d",
                       this_ptr->current_texture_count,iVar5,iVar6,iVar2,local_14,iVar4,local_18);
    return iVar2;
  }
  iVar2 = sprintf(output_buffer,"Texture cache has wrapped.  Make it bigger, please.");
  return iVar2;
}
