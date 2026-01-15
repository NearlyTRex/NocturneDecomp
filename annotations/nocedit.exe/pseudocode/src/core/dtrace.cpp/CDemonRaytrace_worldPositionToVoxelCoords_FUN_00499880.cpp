// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
// Address: 00499880
// Address Range: [[00499880, 00499921]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
          (CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

{
  uint *extraout_EBX;
  byte bVar1;
  float10 fVar2;
  double dVar3;
  double value;
  uint auStackY_1018 [1017];
  uint uVar4;
  
  bVar1 = 0;
  dVar3 = crt_math_c_floor_FUN_005feb90
                    ((double)((world_position->x - (this_ptr->bbox_min).x) /
                             (this_ptr->adjusted_size).x));
  fVar2 = ((float10)world_position->y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->adjusted_size).y;
  crt_math_c_round_FUN_005fe6b0(dVar3);
  dVar3 = crt_math_c_floor_FUN_005feb90((double)fVar2);
  fVar2 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->adjusted_size).z;
  crt_math_c_round_FUN_005fe6b0(dVar3);
  dVar3 = (double)fVar2;
  value = crt_math_c_floor_FUN_005feb90(dVar3);
  uVar4 = (uint)((ulonglong)dVar3 >> 0x20);
  crt_math_c_round_FUN_005fe6b0(value);
  *extraout_EBX = uVar4;
  extraout_EBX[(uint)bVar1 * -2 + 1] = *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8);
  (extraout_EBX + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
