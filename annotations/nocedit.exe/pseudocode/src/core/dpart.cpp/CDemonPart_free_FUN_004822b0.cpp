// Name: core_dpart.cpp_CDemonPart_free_FUN_004822b0
// Address: 004822b0
// Address Range: [[004822b0, 00482323]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004822b0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004822b0(CDemonPart *this_ptr)

{
  if (this_ptr->vertex_positions != (CVector3i *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->vertex_positions,"..\\core\\dpart.cpp",0xa9);
    this_ptr->vertex_positions = (CVector3i *)0x0;
  }
  if (this_ptr->face_data != (SSurfacePlane *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->face_data,"..\\core\\dpart.cpp",0xae);
    this_ptr->face_data = (SSurfacePlane *)0x0;
  }
  if (this_ptr->vertex_normals == (CVector3i *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->vertex_normals,"..\\core\\dpart.cpp",0xb3);
  this_ptr->vertex_normals = (CVector3i *)0x0;
  return;
}
