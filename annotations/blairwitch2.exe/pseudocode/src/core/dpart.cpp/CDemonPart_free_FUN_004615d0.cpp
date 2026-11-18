// Name: core_dpart.cpp_CDemonPart_free_FUN_004615d0
// Address: 004615d0
// Address Range: [[004615d0, 00461625]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004615d0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004615d0(CDemonPart *this_ptr)

{
  if (this_ptr->vertex_positions != (CVector3i *)0x0) {
    debugFree(this_ptr->vertex_positions);
    this_ptr->vertex_positions = (CVector3i *)0x0;
  }
  if (this_ptr->face_data != (SSurfacePlane *)0x0) {
    debugFree(this_ptr->face_data);
    this_ptr->face_data = (SSurfacePlane *)0x0;
  }
  if (this_ptr->vertex_normals == (CVector3i *)0x0) {
    return;
  }
  debugFree(this_ptr->vertex_normals);
  this_ptr->vertex_normals = (CVector3i *)0x0;
  return;
}
