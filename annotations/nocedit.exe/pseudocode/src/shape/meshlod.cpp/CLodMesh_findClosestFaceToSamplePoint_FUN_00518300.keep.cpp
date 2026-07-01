// Name: shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
// Address: 00518300
// MANUAL RECONSTRUCTION
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

  sample_point = this_ptr->sample_points_ptr + sample_point_index;
  sample_point->distance_to_triangle = 9.999999999999999e+29;
  sample_point->closest_triangle_idx = -1;
  iVar1 = 0;
  if (0 < this_ptr->tri_count) {
    do {
      face = this_ptr->tri_data + iVar1;
      if (face->processed_flag == 0) {
        dVar2 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                          (this_ptr,sample_point,face);
        if (dVar2 < sample_point->distance_to_triangle) {
          sample_point->closest_triangle_idx = iVar1;
          sample_point->distance_to_triangle = dVar2;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->tri_count);
  }
  if (-1 < sample_point->closest_triangle_idx) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 2608;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find closest face!");
  return;
}
