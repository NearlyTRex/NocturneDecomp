// Name: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
// Address: 004824f0
// MANUAL RECONSTRUCTION
// Address Range: [[004824f0, 004825b8]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart *this_ptr)

{
  int iVar2;
  SMRGLPrimitiveTriangle local_48;

  iVar2 = 0;
  if (0 < this_ptr->face_count) {
    do {
      local_48.base.base.count = 3;
      local_48.base.surface_normal = this_ptr->face_data[iVar2].plane;
      local_48.vertices[0].vertex_index = this_ptr->face_data[iVar2].vertex_index_1;
      local_48.vertices[1].vertex_index = this_ptr->face_data[iVar2].vertex_index_2;
      local_48.vertices[2].vertex_index = this_ptr->face_data[iVar2].vertex_index_3;
      engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertex_positions,&local_48);
      this_ptr->face_data[iVar2].plane = local_48.base.surface_normal;
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->face_count);
  }
  return;
}
