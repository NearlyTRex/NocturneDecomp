// Name: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
// Address: 004824f0
// Address Range: [[004824f0, 004825b8]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart *this_ptr)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitiveTriangle local_48;
  
  iVar2 = 0;
  if (0 < this_ptr->face_count) {
    iVar1 = 0;
    do {
      local_48.base.base.count = 3;
      local_48.base.surface_normal.A =
           *(UIntegerFloat *)((int)&(this_ptr->face_data->plane).A + iVar1);
      local_48.base.surface_normal.B =
           *(UIntegerFloat *)((int)&(this_ptr->face_data->plane).B + iVar1);
      local_48.base.surface_normal.C =
           *(UIntegerFloat *)((int)&(this_ptr->face_data->plane).C + iVar1);
      local_48.base.surface_normal.D =
           *(UIntegerFloat *)((int)&(this_ptr->face_data->plane).D + iVar1);
      local_48.vertices[0].vertex_index =
           *(int *)((int)&this_ptr->face_data->vertex_index_1 + iVar1);
      local_48.vertices[1].vertex_index =
           *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar1);
      local_48.vertices[2].vertex_index =
           *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar1);
      engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertex_positions,&local_48);
      *(UIntegerFloat *)((int)&(this_ptr->face_data->plane).A + iVar1) =
           local_48.base.surface_normal.A;
      *(UIntegerFloat *)((int)&(this_ptr->face_data->plane).B + iVar1) =
           local_48.base.surface_normal.B;
      *(UIntegerFloat *)((int)&(this_ptr->face_data->plane).C + iVar1) =
           local_48.base.surface_normal.C;
      *(UIntegerFloat *)((int)&(this_ptr->face_data->plane).D + iVar1) =
           local_48.base.surface_normal.D;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < this_ptr->face_count);
  }
  return;
}
