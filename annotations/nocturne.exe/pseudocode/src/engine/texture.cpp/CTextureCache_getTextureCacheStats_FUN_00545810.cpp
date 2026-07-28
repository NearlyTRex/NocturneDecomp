// Name: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00545810
// Address: 00545810
// Address Range: [[00545810, 0054589d]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00545810(CTextureCache *this_ptr,char *output_buffer)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00545810(CTextureCache *this_ptr,char *output_buffer)

{
  CTextureCache *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  iVar2 = 0;
  iVar4 = 0;
  if (this_ptr->wrap_indicator == 0) {
    iVar3 = 0;
    pCVar1 = this_ptr;
    if (0 < *(int *)(this_ptr[10].texture_names[0x1fe] + 8)) {
      do {
        if (pCVar1->texture_dimensions[0] == 0x20) {
          iVar4 = iVar4 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x40) {
          iVar6 = iVar6 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x80) {
          iVar5 = iVar5 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x100) {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar1 = (CTextureCache *)&pCVar1->max_texture_count;
      } while (iVar3 < *(int *)(this_ptr[10].texture_names[0x1fe] + 8));
    }
    iVar2 = _sprintf(output_buffer,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d",
                       *(uint *)(this_ptr[10].texture_names[0x1fe] + 8),iVar4,iVar6,iVar5,
                       iVar2);
    return iVar2;
  }
  iVar2 = _sprintf(output_buffer,"Texture cache has wrapped.  Make it bigger, please.");
  return iVar2;
}
