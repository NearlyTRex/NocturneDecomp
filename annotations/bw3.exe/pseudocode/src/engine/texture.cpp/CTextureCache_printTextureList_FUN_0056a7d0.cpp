// Name: engine_texture.cpp_CTextureCache_printTextureList_FUN_0056a7d0
// Address: 0056a7d0
// Address Range: [[0056a7d0, 0056a8e0]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_printTextureList_FUN_0056a7d0(CTextureCache *this_ptr,void *file,int dimension)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_printTextureList_FUN_0056a7d0(CTextureCache *this_ptr,void *file,int dimension)

{
  CTextureCache *pCVar1;
  STextureCacheEntry *pSVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (dimension == 0) {
    iVar4 = 0;
    iVar3 = 0;
    if (0 < this_ptr->current_texture_count) {
      pSVar2 = this_ptr->entries;
      do {
        if (pSVar2->texture_data != (uchar *)0x0) {
          iVar3 = iVar3 + pSVar2->dimension * pSVar2->dimension;
        }
        if (pSVar2->opacity_data != (uchar *)0x0) {
          iVar3 = iVar3 + pSVar2->dimension * pSVar2->dimension;
        }
        if (pSVar2->palette_data != (uchar *)0x0) {
          iVar3 = iVar3 + 0x300;
        }
        if (pSVar2->true_color_data != (uchar *)0x0) {
          iVar3 = iVar3 + pSVar2->dimension * pSVar2->dimension * 4;
        }
        iVar4 = iVar4 + 1;
        pSVar2 = pSVar2 + 1;
      } while (iVar4 < this_ptr->current_texture_count);
    }
    FUN_005a3140(file,"Total system mem usage : %d bytes\n",iVar3);
    return;
  }
  iVar4 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->current_texture_count) {
    do {
      if (dimension == pCVar1->entries[0].dimension) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      pCVar1 = (CTextureCache *)&pCVar1->entries[0].hw_texture_handle;
    } while (iVar4 < this_ptr->current_texture_count);
  }
  FUN_005a3140(file,"%d %dx%d textures\n",iVar3,dimension,dimension);
  iVar3 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->current_texture_count) {
    do {
      if (dimension == pCVar1->entries[0].dimension) {
        FUN_005a3140(file,0x5d619d,this_ptr->entries[iVar3].texture_name);
      }
      iVar3 = iVar3 + 1;
      pCVar1 = (CTextureCache *)&pCVar1->entries[0].hw_texture_handle;
    } while (iVar3 < this_ptr->current_texture_count);
  }
  return;
}
