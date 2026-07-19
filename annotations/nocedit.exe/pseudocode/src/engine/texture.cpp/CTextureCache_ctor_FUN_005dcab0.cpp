// Name: engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
// Address: 005dcab0
// Address Range: [[005dcab0, 005dcaf5]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache *this_ptr,int max_texture_count)

#include "nocturne.h"

CTextureCache * __cdecl engine_texture_cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache *this_ptr,int max_texture_count)

{
  CTextureCache *pCVar1;
  int *piVar2;
  
  this_ptr->current_texture_count = 0;
  this_ptr->max_texture_count = max_texture_count;
  pCVar1 = this_ptr;
  do {
    piVar2 = &pCVar1->max_texture_count;
    pCVar1->texture_data_ptrs[0] = (uchar *)0x0;
    pCVar1->texture_opacity_ptrs[0] = (uchar *)0x0;
    pCVar1->texture_palette_ptrs[0] = (uchar *)0x0;
    pCVar1->texture_dimensions[0] = 0;
    pCVar1 = (CTextureCache *)piVar2;
  } while (piVar2 != this_ptr->texture_dimensions + 0x3fe);
  this_ptr->wrap_indicator = 0;
  return this_ptr;
}
