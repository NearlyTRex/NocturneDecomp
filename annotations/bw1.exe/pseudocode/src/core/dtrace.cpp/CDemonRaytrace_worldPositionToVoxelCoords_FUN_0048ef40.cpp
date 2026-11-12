// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0048ef40
// Address: 0048ef40
// Address Range: [[0048ef40, 0048efe1]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0048ef40(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

#include "nocturne.h"

CVector3i * __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0048ef40(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

{
  uint *puVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  int aiStackY_1004 [1016];
  int local_1c;
  int local_18;
  int local_14;
  double local_10;
  
  bVar2 = 0;
  local_10 = floor
                       ((double)((world_position->x - (this_ptr->bbox_min).x) /
                                (this_ptr->adjusted_size).x));
  fVar3 = ((float10)world_position->y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->adjusted_size).y;
  fVar4 = (float10)local_10;
  round();
  local_1c = (int)ROUND(fVar4);
  local_10 = floor((double)fVar3);
  fVar3 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->adjusted_size).z;
  fVar4 = (float10)local_10;
  round();
  local_18 = (int)ROUND(fVar4);
  local_10 = floor((double)fVar3);
  fVar3 = (float10)local_10;
  round();
  local_14 = (int)ROUND(fVar3);
  puVar1 = (uint *)((int)output_voxel_coords + (uint)bVar2 * -8 + 4);
  output_voxel_coords->x = local_1c;
  *puVar1 = *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return output_voxel_coords;
}
