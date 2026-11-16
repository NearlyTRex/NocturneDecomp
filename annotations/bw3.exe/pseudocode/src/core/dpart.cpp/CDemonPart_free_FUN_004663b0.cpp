// Name: core_dpart.cpp_CDemonPart_free_FUN_004663b0
// Address: 004663b0
// Address Range: [[004663b0, 00466405]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004663b0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004663b0(CDemonPart *this_ptr)

{
  if (this_ptr->vertex_positions != (CVector3i *)0x0) {
    FUN_005a3770(this_ptr->vertex_positions);
    this_ptr->vertex_positions = (CVector3i *)0x0;
  }
  if (this_ptr->face_data != (SSurfacePlane *)0x0) {
    FUN_005a3770(this_ptr->face_data);
    this_ptr->face_data = (SSurfacePlane *)0x0;
  }
  if (this_ptr->vertex_normals == (CVector3i *)0x0) {
    return;
  }
  FUN_005a3770(this_ptr->vertex_normals);
  this_ptr->vertex_normals = (CVector3i *)0x0;
  return;
}
