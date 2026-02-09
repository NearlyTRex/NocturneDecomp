// Name: engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30
// Address: 005dcb30
// Address Range: [[005dcb30, 005dcbf4]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_005dcb30(CTextureCache *this_ptr)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_005dcb30(CTextureCache *this_ptr)

{
  CTextureCache *pCVar1;
  CTextureCache *pCVar2;
  int iVar3;
  
  this_ptr->current_texture_count = 0;
  iVar3 = 0;
  pCVar1 = this_ptr;
  pCVar2 = this_ptr;
  if (0 < this_ptr->max_texture_count) {
    do {
      pCVar2->texture_names[0][0] = '\0';
      pCVar1->texture_dimensions[0] = 0;
      if (pCVar1->texture_data_ptrs[0] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (pCVar1->texture_data_ptrs[0],"..\\engine\\texture.cpp",200);
        pCVar1->texture_data_ptrs[0] = (void *)0x0;
      }
      if (pCVar1->texture_opacity_ptrs[0] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (pCVar1->texture_opacity_ptrs[0],"..\\engine\\texture.cpp",0xcc);
        pCVar1->texture_opacity_ptrs[0] = (void *)0x0;
      }
      if (pCVar1->texture_palette_ptrs[0] != (byte *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (pCVar1->texture_palette_ptrs[0],"..\\engine\\texture.cpp",0xd0);
        pCVar1->texture_palette_ptrs[0] = (byte *)0x0;
      }
      iVar3 = iVar3 + 1;
      pCVar1 = (CTextureCache *)&pCVar1->max_texture_count;
      pCVar2 = (CTextureCache *)(pCVar2->texture_dimensions + 0xe);
    } while (iVar3 < this_ptr->max_texture_count);
  }
  this_ptr->wrap_indicator = 0;
  return;
}
