// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
// Address: 004997d0
// Address Range: [[004997d0, 00499871]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *extraout_EBX;
  byte bVar4;
  double dVar5;
  double value;
  uint auStackY_1018 [1017];
  uint uVar6;
  
  bVar4 = 0;
  dVar5 = floor
                    ((double)((world_position->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x
                             ));
  fVar1 = world_position->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->cell_size).y;
  round(dVar5);
  dVar5 = floor((double)((fVar1 - fVar2) / fVar3));
  fVar1 = world_position->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  round(dVar5);
  dVar5 = (double)((fVar1 - fVar2) / fVar3);
  value = floor(dVar5);
  uVar6 = (uint)((ulonglong)dVar5 >> 0x20);
  round(value);
  *extraout_EBX = uVar6;
  extraout_EBX[(uint)bVar4 * -2 + 1] = *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8);
  (extraout_EBX + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
