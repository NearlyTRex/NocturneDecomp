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
  uint *unaff_ESI;
  byte bVar4;
  double dVar5;
  uint auStackY_100c [1016];
  uint uVar6;
  uint local_18;
  uint local_14;
  uint local_10;
  uint uStack_c;
  
  bVar4 = 0;
  dVar5 = floor
                    ((double)((world_position->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x
                             ));
  fVar1 = world_position->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->cell_size).y;
  local_10 = SUB84(dVar5,0);
  uStack_c = (uint)((ulonglong)dVar5 >> 0x20);
  round(dVar5);
  dVar5 = floor((double)((fVar1 - fVar2) / fVar3));
  fVar1 = world_position->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  local_14 = SUB84(dVar5,0);
  local_10 = (uint)((ulonglong)dVar5 >> 0x20);
  uVar6 = 0x49983a;
  round(dVar5);
  dVar5 = floor((double)((fVar1 - fVar2) / fVar3));
  local_18 = SUB84(dVar5,0);
  local_14 = (uint)((ulonglong)dVar5 >> 0x20);
  round(dVar5);
  *unaff_ESI = uVar6;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
