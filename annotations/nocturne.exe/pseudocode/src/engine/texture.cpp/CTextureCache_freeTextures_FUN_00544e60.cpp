// Name: engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60
// Address: 00544e60
// Address Range: [[00544e60, 00544ee2]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(CTextureCache *this_ptr)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(CTextureCache *this_ptr)

{
  int iVar1;
  char (*pacVar2) [64];
  CTextureCache *pCVar3;
  int iVar4;
  CTextureCache *pCVar5;
  
  iVar1 = this_ptr->max_texture_count;
  pacVar2 = this_ptr[10].texture_names;
  *(char *)((int)(pacVar2 + 0x1fe) + 8) = '\0';
  *(char *)((int)(pacVar2 + 0x1fe) + 9) = '\0';
  *(char *)((int)(pacVar2 + 0x1fe) + 10) = '\0';
  *(char *)((int)(pacVar2 + 0x1fe) + 0xb) = '\0';
  iVar4 = 0;
  pCVar3 = this_ptr;
  pCVar5 = this_ptr;
  if (0 < iVar1) {
    do {
      pCVar5->texture_names[0][0] = '\0';
      pCVar3->texture_dimensions[0] = 0;
      if (pCVar3->texture_data_ptrs[0] != (uchar *)0x0) {
        free(pCVar3->texture_data_ptrs[0]);
        pCVar3->texture_data_ptrs[0] = (uchar *)0x0;
      }
      if (pCVar3->texture_opacity_ptrs[0] != (uchar *)0x0) {
        free(pCVar3->texture_opacity_ptrs[0]);
        pCVar3->texture_opacity_ptrs[0] = (uchar *)0x0;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CTextureCache *)&pCVar3->max_texture_count;
      pCVar5 = (CTextureCache *)(pCVar5->texture_dimensions + 0xe);
    } while (iVar4 < this_ptr->max_texture_count);
  }
  this_ptr->wrap_indicator = 0;
  return;
}
