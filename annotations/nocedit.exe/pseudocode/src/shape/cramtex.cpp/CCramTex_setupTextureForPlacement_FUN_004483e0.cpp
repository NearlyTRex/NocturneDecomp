// Name: shape_cramtex.cpp_CCramTex_setupTextureForPlacement_FUN_004483e0
// Address: 004483e0
// Address Range: [[004483e0, 00448434]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_CCramTex_setupTextureForPlacement_FUN_004483e0(CCramTex *this_ptr,CCramTex *source)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_CCramTex_setupTextureForPlacement_FUN_004483e0(CCramTex *this_ptr,CCramTex *source)

{
  int iVar1;
  
  this_ptr->assigned_map_number = source->width;
  this_ptr->placement_flags = source->effective_width;
  this_ptr->placement_bottom = source->height;
  this_ptr->working_right = source->padded_width;
  if (this_ptr->placement_flags == 0) {
    this_ptr->effective_width = this_ptr->padded_width;
    iVar1 = this_ptr->padded_height;
  }
  else {
    this_ptr->effective_width = this_ptr->padded_height;
    iVar1 = this_ptr->padded_width;
  }
  this_ptr->effective_height = iVar1;
  this_ptr->working_top = this_ptr->placement_bottom + this_ptr->effective_width;
  this_ptr->working_width = this_ptr->working_right + this_ptr->effective_height;
  return;
}
