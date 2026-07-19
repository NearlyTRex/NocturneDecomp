// Name: engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
// Address: 005dcab0
// MANUAL RECONSTRUCTION
// Address Range: [[005dcab0, 005dcaf5]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache *this_ptr,int max_texture_count)

#include "nocturne.h"

CTextureCache * __cdecl engine_texture_cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache *this_ptr,int max_texture_count)

{
  int i;

  this_ptr->current_texture_count = 0;
  this_ptr->max_texture_count = max_texture_count;
  for (i = 0; i < 1024; i = i + 1) {
    this_ptr->texture_data_ptrs[i] = (uchar *)0x0;
    this_ptr->texture_opacity_ptrs[i] = (uchar *)0x0;
    this_ptr->texture_palette_ptrs[i] = (byte *)0x0;
    this_ptr->texture_dimensions[i] = 0;
  }
  this_ptr->wrap_indicator = 0;
  return this_ptr;
}
