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
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  byte bVar1;
  float10 in_ST0;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  int aiStack_1008 [1024];
  
  bVar1 = 0;
  dVar5 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar4 = (float10)dVar5;
  fVar2 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  aiStack_1008[0x3fb] = (int)ROUND(fVar2);
  dVar5 = crt_math_c_floor_FUN_005feb90((double)fVar4);
  fVar4 = (float10)dVar5;
  fVar2 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->adjusted_size).z;
  fVar3 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
  aiStack_1008[0x3fc] = (int)ROUND(fVar3);
  crt_math_c_floor_FUN_005feb90((double)fVar4);
  fVar4 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01);
  aiStack_1008[0x3fa] = (int)((ulonglong)(double)fVar2 >> 0x20);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01));
  aiStack_1008[0x3fd] = (int)ROUND(fVar4);
  *unaff_ESI = aiStack_1008[0x3fa];
  unaff_ESI[(uint)bVar1 * -2 + 1] = aiStack_1008[(uint)bVar1 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       aiStack_1008[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return;
}
