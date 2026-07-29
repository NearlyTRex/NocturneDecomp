// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650
// Address: 0046b650
// Address Range: [[0046b650, 0046b6f1]]
// Convention: unknown
// Signature: void core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650(int param_1,float *param_2)

#include "nocturne.h"

void core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650(int param_1,float *param_2)

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
                    ((double)((*param_2 - *(float *)(param_1 + 0x10)) / *(float *)(param_1 + 0x28)))
  ;
  fVar1 = param_2[1];
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x2c);
  local_10 = SUB84(__BITCAST_UINT64(dVar5),0);
  uStack_c = (uint)((ulonglong)dVar5 >> 0x20);
  round(dVar5);
  dVar5 = floor((double)((fVar1 - fVar2) / fVar3));
  fVar1 = param_2[2];
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x30);
  local_14 = SUB84(__BITCAST_UINT64(dVar5),0);
  local_10 = (uint)((ulonglong)dVar5 >> 0x20);
  uVar6 = 0x46b6ba;
  round(dVar5);
  dVar5 = floor((double)((fVar1 - fVar2) / fVar3));
  local_18 = SUB84(__BITCAST_UINT64(dVar5),0);
  local_14 = (uint)((ulonglong)dVar5 >> 0x20);
  round(dVar5);
  *unaff_ESI = uVar6;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
