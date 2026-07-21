// Name: core_fire.cpp_CRock_process_FUN_00484cc0
// Address: 00484cc0
// Address Range: [[00484cc0, 00484d37]]
// Convention: unknown
// Signature: void core_fire_cpp_CRock_process_FUN_00484cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CRock_process_FUN_00484cc0(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  core_particle_cpp_CParticle_process_FUN_004ef120(param_1);
  iVar4 = _DAT_01bd1d80 >> 0x1f;
  iVar1 = _DAT_01bd1d80 + iVar4 * -4;
  fVar5 = (float10)round
                             (SQRT((float10)*(float *)(param_1 + 0x14) *
                                   (float10)*(float *)(param_1 + 0x14) +
                                   (float10)*(float *)(param_1 + 0xc) *
                                   (float10)*(float *)(param_1 + 0xc) +
                                   (float10)*(float *)(param_1 + 0x10) *
                                   (float10)*(float *)(param_1 + 0x10)) * (float10)_DAT_00581134);
  iVar3 = _DAT_01bd1d80;
  lVar2 = (longlong)((int)(iVar1 - (uint)(iVar4 << 1 < 0)) >> 2) * (longlong)(int)ROUND(fVar5);
  *(uint *)(param_1 + 0x38) =
       *(int *)(param_1 + 0x38) + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)(iVar3 / 2) * (longlong)(int)ROUND(fVar5);
  *(int *)(param_1 + 0x3c) =
       *(int *)(param_1 + 0x3c) + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  return;
}
