// Name: core_dpart.cpp_CDemonPart_ctor_FUN_00482110
// Address: 00482110
// Address Range: [[00482110, 00482152]]
// Convention: __cdecl
// Signature: CDemonPart * __cdecl core_dpart_cpp_CDemonPart_ctor_FUN_00482110(CDemonPart *this_ptr)

#include "nocturne.h"

CDemonPart * __cdecl core_dpart_cpp_CDemonPart_ctor_FUN_00482110(CDemonPart *this_ptr)

{
  this_ptr->vertex_positions = (CVector3i *)0x0;
  this_ptr->face_data = (SSurfacePlane *)0x0;
  this_ptr->vertex_normals = (CVector3i *)0x0;
  this_ptr->vertex_group_size = 0;
  this_ptr->vertex_count = 0;
  this_ptr->face_count = 0;
  this_ptr->mystery_array_size = 0;
  this_ptr->current_vertex_group = 0;
  this_ptr->format[0] = '\0';
  return this_ptr;
}
