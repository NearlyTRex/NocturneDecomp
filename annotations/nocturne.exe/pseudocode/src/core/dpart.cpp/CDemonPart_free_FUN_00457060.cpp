// Name: core_dpart.cpp_CDemonPart_free_FUN_00457060
// Address: 00457060
// Address Range: [[00457060, 004570b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_free_FUN_00457060(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_free_FUN_00457060(CDemonPart *this_ptr)

{
  if (this_ptr->vertex_positions != (CVector3i *)0x0) {
    free(this_ptr->vertex_positions);
    this_ptr->vertex_positions = (CVector3i *)0x0;
  }
  if (this_ptr->face_data != (SSurfacePlane *)0x0) {
    free(this_ptr->face_data);
    this_ptr->face_data = (SSurfacePlane *)0x0;
  }
  if (this_ptr->vertex_normals == (CVector3i *)0x0) {
    return;
  }
  free(this_ptr->vertex_normals);
  this_ptr->vertex_normals = (CVector3i *)0x0;
  return;
}
