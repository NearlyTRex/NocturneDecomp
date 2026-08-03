// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
// Address: 0046b700
// Address Range: [[0046b700, 0046b7a1]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

#include "nocturne.h"

CVector3i * __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  byte bVar5;
  double dVar6;
  uint auStackY_100c [1016];
  int iVar7;
  uint local_18;
  uint local_14;
  uint local_10;
  uint uStack_c;
  
  bVar5 = 0;
  dVar6 = floor
                    ((double)((world_position->x - (this_ptr->bbox_min).x) /
                             (this_ptr->adjusted_size).x));
  fVar1 = world_position->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->adjusted_size).y;
  local_10 = SUB84(__BITCAST_UINT64(dVar6),0);
  uStack_c = (uint)((ulonglong)dVar6 >> 0x20);
  round(dVar6);
  dVar6 = floor((double)((fVar1 - fVar2) / fVar3));
  fVar1 = world_position->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->adjusted_size).z;
  local_14 = SUB84(__BITCAST_UINT64(dVar6),0);
  local_10 = (uint)((ulonglong)dVar6 >> 0x20);
  iVar7 = 0x46b76a;
  round(dVar6);
  dVar6 = floor((double)((fVar1 - fVar2) / fVar3));
  local_18 = SUB84(__BITCAST_UINT64(dVar6),0);
  local_14 = (uint)((ulonglong)dVar6 >> 0x20);
  round(dVar6);
  puVar4 = (uint *)((int)output_voxel_coords + (uint)bVar5 * -8 + 4);
  output_voxel_coords->x = iVar7;
  *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return output_voxel_coords;
}
