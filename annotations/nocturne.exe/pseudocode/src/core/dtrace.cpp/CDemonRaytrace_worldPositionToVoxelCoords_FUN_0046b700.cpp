// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
// Address: 0046b700
// Address Range: [[0046b700, 0046b7a1]]
// Convention: unknown
// Signature: void core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(int param_1,float *param_2)

#include "nocturne.h"

void core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  double dVar6;
  int aiStackY_100c [1016];
  uint uVar7;
  int iStack_20;
  byte local_18 [8];
  double local_10;
  
  bVar4 = 0;
  dVar6 = (double)((*param_2 - *(float *)(param_1 + 0x10)) / *(float *)(param_1 + 0x34));
  iStack_20 = (int)((ulonglong)dVar6 >> 0x20);
  local_10 = (double)floor(SUB84(__BITCAST_UINT64(dVar6),0));
  fVar1 = param_2[1];
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x38);
  iStack_20 = 0x46b73f;
  fVar5 = (float10)round((float10)local_10);
  iStack_20 = (int)ROUND(fVar5);
  dVar6 = (double)floor((double)((fVar1 - fVar2) / fVar3));
  fVar1 = param_2[2];
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x3c);
  uVar7 = 0x46b76a;
  unique0x10000133 = dVar6;
  fVar5 = (float10)round((float10)dVar6);
  iStack_20 = (int)ROUND(fVar5);
  dVar6 = (double)floor((double)((fVar1 - fVar2) / fVar3));
  local_18 = (byte  [8])dVar6;
  fVar5 = (float10)round((float10)dVar6);
  iStack_20 = (int)ROUND(fVar5);
  *unaff_ESI = uVar7;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
