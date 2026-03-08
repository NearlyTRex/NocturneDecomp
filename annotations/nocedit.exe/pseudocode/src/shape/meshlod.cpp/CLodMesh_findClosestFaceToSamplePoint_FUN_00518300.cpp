// Name: shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
// Address: 00518300
// Address Range: [[00518300, 005183d2]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh *this_ptr,int sample_point_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh *this_ptr,int sample_point_index)

{
  CLodFace *face;
  SLodSamplePoint *sample_point;
  int iVar1;
  double dVar2;
  uint local_28;
  uint uStack_24;
  int local_18;
  
  sample_point = this_ptr->sample_points_ptr + sample_point_index;
  *(uint *)&sample_point->distance_to_triangle = 0x39a08ce9;
  *(uint *)((int)&sample_point->distance_to_triangle + 4) = 0x46293e59;
  sample_point->closest_triangle_idx = -1;
  iVar1 = 0;
  if (0 < this_ptr->tri_count) {
    local_18 = 0;
    do {
      face = (CLodFace *)((int)this_ptr->tri_data->attribute_indices + local_18);
      if (face->processed_flag == 0) {
        dVar2 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                          (this_ptr,sample_point,face);
        if (dVar2 < sample_point->distance_to_triangle) {
          local_28 = SUB84(__BITCAST_UINT64(dVar2),0);
          sample_point->closest_triangle_idx = iVar1;
          *(uint *)&sample_point->distance_to_triangle = local_28;
          uStack_24 = (uint)((ulonglong)dVar2 >> 0x20);
          *(uint *)((int)&sample_point->distance_to_triangle + 4) = uStack_24;
        }
      }
      iVar1 = iVar1 + 1;
      local_18 = local_18 + 0x8c;
    } while (iVar1 < this_ptr->tri_count);
  }
  if (-1 < sample_point->closest_triangle_idx) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0xa30;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find closest face!");
  return;
}
