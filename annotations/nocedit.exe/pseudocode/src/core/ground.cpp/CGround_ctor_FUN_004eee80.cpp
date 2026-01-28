// Name: core_ground.cpp_CGround_ctor_FUN_004eee80
// Address: 004eee80
// Address Range: [[004eee80, 004eeed5]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_ctor_FUN_004eee80(CGround *this_ptr,int width,int height)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_ctor_FUN_004eee80(CGround *this_ptr,int width,int height)

{
  this_ptr->grid_width = 0x1e;
  this_ptr->grid_height = 0x1e;
  this_ptr->width = width;
  this_ptr->terrain_data = (void *)0x0;
  this_ptr->texture_list = (CTextureList *)0x0;
  this_ptr->vertical_scale = 8;
  this_ptr->height_scale = 1;
  this_ptr->height = height;
  this_ptr->total_cells = this_ptr->grid_width * this_ptr->grid_height;
  this_ptr->height_minus_1 = height + -1;
  this_ptr->width_minus_1 = width + -1;
  return;
}
