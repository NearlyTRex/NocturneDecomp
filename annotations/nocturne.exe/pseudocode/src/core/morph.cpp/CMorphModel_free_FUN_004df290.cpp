// Name: core_morph.cpp_CMorphModel_free_FUN_004df290
// Address: 004df290
// Address Range: [[004df290, 004df2e5]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_free_FUN_004df290(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_free_FUN_004df290(CMorphModel *this_ptr)

{
  if (this_ptr->points != (SMorphPoint *)0x0) {
    free(this_ptr->points);
    this_ptr->points = (SMorphPoint *)0x0;
  }
  if (this_ptr->faces != (SMRGLPrimitiveTriangle *)0x0) {
    free(this_ptr->faces);
    this_ptr->faces = (SMRGLPrimitiveTriangle *)0x0;
  }
  this_ptr->num_faces = 0;
  this_ptr->num_textures = 0;
  this_ptr->part_count = 0;
  this_ptr->num_points = 0;
  return;
}
