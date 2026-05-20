// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
// Address: 00499880
// MANUAL RECONSTRUCTION
// Address Range: [[00499880, 00499921] [0060c93c, 0060c958]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

#include "nocturne.h"

CVector3i * __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

{
  double dVar2;
  double dVar3;
  double dVar1;
  
  dVar2 = floor
                    ((double)((world_position->x - (this_ptr->bbox_min).x) /
                             (this_ptr->adjusted_size).x));
  dVar1 = ROUND(dVar2);
  dVar2 = floor
                    ((double)((world_position->y - (this_ptr->bbox_min).y) /
                             (this_ptr->adjusted_size).y));
  dVar3 = floor
                    ((double)((world_position->z - (this_ptr->bbox_min).z) /
                             (this_ptr->adjusted_size).z));
  output_voxel_coords->x = (int)ROUND(dVar1);
  output_voxel_coords->y = (int)ROUND(ROUND(dVar2));
  output_voxel_coords->z = (int)ROUND(ROUND(dVar3));
  return output_voxel_coords;
}
