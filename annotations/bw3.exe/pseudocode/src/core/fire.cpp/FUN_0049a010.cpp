// Name: core_fire.cpp_FUN_0049a010
// Address: 0049a010
// Address Range: [[0049a010, 0049a08c]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049a010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049a010(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  core_particle_cpp_FUN_00509f30(param_1);
  fVar4 = SQRT((float10)*(float *)(param_1 + 0x14) * (float10)*(float *)(param_1 + 0x14) +
               (float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(param_1 + 0xc) +
               (float10)*(float *)(param_1 + 0x10) * (float10)*(float *)(param_1 + 0x10)) *
          (float10)_DAT_005c05a0;
  iVar3 = round();
  iVar2 = _DAT_01c5fad0;
  lVar1 = (longlong)iVar3 * (longlong)(int)ROUND(fVar4);
  *(uint *)(param_1 + 0x40) =
       *(int *)(param_1 + 0x40) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)(iVar2 / 2) * (longlong)(int)ROUND(fVar4);
  *(int *)(param_1 + 0x44) =
       *(int *)(param_1 + 0x44) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}
