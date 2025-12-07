// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
// Address: 004997d0
// Address Range: [[004997d0, 00499871]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_grid_coords)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
          (CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint in_EAX;
  uint in_EDX;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  byte bVar4;
  float10 in_ST0;
  float10 fVar5;
  double dVar6;
  int aiStack_1018 [1019];
  ulonglong uStack_2c;
  ulonglong local_24;
  
  bVar4 = 0;
  local_24 = (double)((world_position->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x);
  uStack_2c = (double)CONCAT44 /* combine 2-byte values */(0x4997f2,(uint)uStack_2c);
  dVar6 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar5 = (float10)dVar6;
  fVar1 = world_position->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->cell_size).y;
  local_24._0_4_ = 0x49980f;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  local_24 = (double)CONCAT44 /* combine 2-byte values */(local_24._4_4_,(int)ROUND(dVar6));
  uStack_2c = (double)((fVar1 - fVar2) / fVar3);
  dVar6 = crt_math_c_floor_FUN_005feb90((double)fVar5);
  fVar5 = (float10)dVar6;
  fVar1 = world_position->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  uStack_2c = (double)CONCAT44 /* combine 2-byte values */(uStack_2c._4_4_,0x49983a);
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  uStack_2c._4_4_ = (int)ROUND(dVar6);
  crt_math_c_floor_FUN_005feb90((double)fVar5);
  local_24 = (double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX);
  aiStack_1018[0x3fa] = (int)((ulonglong)(double)((fVar1 - fVar2) / fVar3) >> 0x20);
  dVar6 = crt_math_c_round_FUN_005fe6b0(local_24);
  uStack_2c = (double)CONCAT44 /* combine 2-byte values */(uStack_2c._4_4_,(int)ROUND(dVar6));
  *unaff_ESI = aiStack_1018[0x3fa];
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(uint *)(&uStack_2c + -(uint)bVar4);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&uStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4);
  return;
}
