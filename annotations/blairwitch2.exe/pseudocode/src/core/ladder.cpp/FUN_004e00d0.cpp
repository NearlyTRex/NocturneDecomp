// Name: core_ladder.cpp_FUN_004e00d0
// Address: 004e00d0
// Address Range: [[004e00d0, 004e018e]]
// Convention: unknown
// Signature: void core_ladder_cpp_FUN_004e00d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ladder_cpp_FUN_004e00d0(int param_1)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  uint *unaff_ESI;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStack_38 [3];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint auStack_20 [6];
  
  bVar6 = 0;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  if (*(int *)&pCVar2->field_0x110 < 1) {
    fVar1 = (float)_DAT_005dbd66;
    afStack_38[1] = -0.1;
    fStack_2c = *(float *)(param_1 + 0x430) * fVar1;
    fStack_28 = *(float *)(param_1 + 0x434) + (float)_DAT_005dbd6e;
    fStack_24 = *(float *)(param_1 + 0x438) * fVar1;
    iVar3 = 6;
    afStack_38[2] = -*(float *)(param_1 + 0x438) * fVar1;
    afStack_38[0] = -*(float *)(param_1 + 0x430) * fVar1;
    pfVar4 = afStack_38;
    puVar5 = auStack_20;
  }
  else {
    puVar5 = auStack_20;
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                       ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
    iVar3 = 6;
    pfVar4 = (float *)&pCVar2->field_0x338;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar5 = auStack_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar5;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
