// Name: core_morph.cpp_CMorphModel_ctor_FUN_00522120
// Address: 00522120
// Address Range: [[00522120, 0052214d]]
// Convention: __cdecl
// Signature: CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_00522120(CMorphModel *this_ptr)

#include "nocturne.h"

CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_00522120(CMorphModel *this_ptr)

{
  this_ptr->points = (SMorphPoint *)0x0;
  this_ptr->num_faces = 0;
  this_ptr->faces = (SMRGLPrimitiveTriangle *)0x0;
  this_ptr->num_textures = 0;
  this_ptr->part_count = 0;
  this_ptr->num_points = 0;
  return this_ptr;
}
