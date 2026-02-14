// Name: core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930
// Address: 00499930
// Address Range: [[00499930, 00499960]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930(CDemonRaytrace *raytrace_ptr,CVector3f *output_position,CVector3i *voxel_coords)

#include "nocturne.h"

CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930(CDemonRaytrace *raytrace_ptr,CVector3f *output_position,CVector3i *voxel_coords)

{
  output_position->x =
       (float)voxel_coords->x * (raytrace_ptr->adjusted_size).x + (raytrace_ptr->bbox_min).x;
  output_position->y =
       (float)voxel_coords->y * (raytrace_ptr->adjusted_size).y + (raytrace_ptr->bbox_min).y;
  output_position->z =
       (float)voxel_coords->z * (raytrace_ptr->adjusted_size).z + (raytrace_ptr->bbox_min).z;
  return output_position;
}
