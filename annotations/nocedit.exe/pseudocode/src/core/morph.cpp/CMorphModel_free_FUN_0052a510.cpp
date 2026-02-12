// Name: core_morph.cpp_CMorphModel_free_FUN_0052a510
// Address: 0052a510
// Address Range: [[0052a510, 0052a573]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_free_FUN_0052a510(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_free_FUN_0052a510(CMorphModel *this_ptr)

{
  if (this_ptr->points != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->points,"..\\core\\morph.cpp",0x5c);
    this_ptr->points = (void *)0x0;
  }
  if (this_ptr->faces != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->faces,"..\\core\\morph.cpp",0x60);
    this_ptr->faces = (void *)0x0;
  }
  this_ptr->num_faces = 0;
  this_ptr->num_textures = 0;
  this_ptr->part_count = 0;
  this_ptr->num_points = 0;
  return;
}
