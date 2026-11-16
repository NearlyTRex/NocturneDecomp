// Name: core_dpart.cpp_CDemonPart_free_FUN_00479ae0
// Address: 00479ae0
// Address Range: [[00479ae0, 00479b35]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_free_FUN_00479ae0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_free_FUN_00479ae0(CDemonPart *this_ptr)

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
