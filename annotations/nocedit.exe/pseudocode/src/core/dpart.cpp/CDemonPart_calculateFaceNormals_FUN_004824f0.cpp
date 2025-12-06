// Name: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
// Address: 004824f0
// Address Range: [[004824f0, 004825b8]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart * this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  SSurfaceNormal local_48;
  
  iVar2 = 0;
  if (0 < this_ptr->face_count) {
    iVar1 = 0;
    do {
      local_48.vertex_count = 3;
      local_48.normal_x = *(int *)((int)&(this_ptr->face_data->plane).A + iVar1);
      local_48.normal_y = *(int *)((int)&(this_ptr->face_data->plane).B + iVar1);
      local_48.normal_z = *(int *)((int)&(this_ptr->face_data->plane).C + iVar1);
      local_48.dot_product = *(int *)((int)&(this_ptr->face_data->plane).D + iVar1);
      local_48.vertex_index_1 = *(int *)((int)&this_ptr->face_data->vertex_index_1 + iVar1);
      local_48.vertex_index_2 = *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar1);
      local_48.vertex_index_3 = *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar1);
      engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertex_positions,&local_48);
      *(int *)((int)&(this_ptr->face_data->plane).A + iVar1) = local_48.normal_y;
      *(int *)((int)&(this_ptr->face_data->plane).B + iVar1) = local_48.normal_z;
      *(int *)((int)&(this_ptr->face_data->plane).C + iVar1) = local_48.dot_product;
      *(int *)((int)&(this_ptr->face_data->plane).D + iVar1) = local_48.vertex_index_1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < this_ptr->face_count);
  }
  return;
}
