// Name: core_fire.cpp_FUN_004967d0
// Address: 004967d0
// Address Range: [[004967d0, 004968ce]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004967d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004967d0(int param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *extraout_ECX;
  float10 fVar6;
  float10 fVar7;
  
  core_particle_cpp_FUN_00510ef0(param_1);
  fVar6 = SQRT((float10)*(float *)(param_1 + 0x14) * (float10)*(float *)(param_1 + 0x14) +
               (float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(param_1 + 0xc) +
               (float10)*(float *)(param_1 + 0x10) * (float10)*(float *)(param_1 + 0x10));
  fVar1 = (float)fVar6;
  fVar7 = fVar6 * (float10)_DAT_005d543a;
  iVar5 = round();
  iVar4 = _DAT_01c2a370;
  lVar2 = (longlong)iVar5 * (longlong)(int)ROUND(fVar7);
  *(uint *)(param_1 + 0x44) =
       *(int *)(param_1 + 0x44) + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)(iVar4 / 2) * (longlong)(int)ROUND(fVar7);
  *(uint *)(param_1 + 0x48) =
       *(int *)(param_1 + 0x48) + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  if (0.0 < (double)fVar6) {
    fVar3 = fVar1 - fVar1 * *(float *)(param_1 + 0x40) * *(float *)&g_CGamePtr->field_0x284;
    if (0.0 < fVar3) {
      fVar3 = fVar3 / fVar1;
      *extraout_ECX = *extraout_ECX * fVar3;
      extraout_ECX[1] = extraout_ECX[1] * fVar3;
      extraout_ECX[2] = extraout_ECX[2] * fVar3;
      return;
    }
    extraout_ECX[2] = 0.0;
    extraout_ECX[1] = extraout_ECX[2];
    *extraout_ECX = extraout_ECX[1];
  }
  return;
}
