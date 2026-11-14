// Name: core_morph.cpp_CMorphModel_free_FUN_004f9a70
// Address: 004f9a70
// Address Range: [[004f9a70, 004f9ac5]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_free_FUN_004f9a70(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_free_FUN_004f9a70(CMorphModel *this_ptr)

{
  if (this_ptr->points != (SMorphPoint *)0x0) {
    FUN_005a3770(this_ptr->points);
    this_ptr->points = (SMorphPoint *)0x0;
  }
  if (this_ptr->faces != (SMRGLPrimitiveTriangle *)0x0) {
    FUN_005a3770(this_ptr->faces);
    this_ptr->faces = (SMRGLPrimitiveTriangle *)0x0;
  }
  this_ptr->num_faces = 0;
  this_ptr->num_textures = 0;
  this_ptr->part_count = 0;
  this_ptr->num_points = 0;
  return;
}
