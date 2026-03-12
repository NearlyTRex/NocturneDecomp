// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
// Address: 00499880
// Address Range: [[00499880, 00499921]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

{
  uint *puVar2;
  byte bVar3;
  int aiStackY_1004 [1016];
  int local_18;
  int local_14;
  double local_10;
  double dVar1;
  
  bVar3 = 0;
  local_10 = floor
                       ((double)((world_position->x - (this_ptr->bbox_min).x) /
                                (this_ptr->adjusted_size).x));
  dVar1 = ROUND(local_10);
  local_10 = floor
                       ((double)((world_position->y - (this_ptr->bbox_min).y) /
                                (this_ptr->adjusted_size).y));
  local_18 = (int)ROUND(ROUND(local_10));
  local_10 = floor
                       ((double)((world_position->z - (this_ptr->bbox_min).z) /
                                (this_ptr->adjusted_size).z));
  local_14 = (int)ROUND(ROUND(local_10));
  puVar2 = (uint *)((int)output_voxel_coords + (uint)bVar3 * -8 + 4);
  output_voxel_coords->x = (int)ROUND(dVar1);
  *puVar2 = (&local_18)[(uint)bVar3 * -2];
  puVar2[(uint)bVar3 * -2 + 1] = (&local_14)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
  return;
}
