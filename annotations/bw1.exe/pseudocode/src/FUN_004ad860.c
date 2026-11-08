// Name: FUN_004ad860
// Address: 004ad860
// Address Range: [[004ad860, 004ad9b2]]
// Convention: unknown
// Signature: void FUN_004ad860(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ad860(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(uint *)(param_1 + 0x4c) = 1;
  }
  else {
    lVar4 = (longlong)_DAT_01c43530 * (longlong)*(int *)(param_1 + 0x58);
    lVar4 = (longlong)*(int *)(param_1 + 0x44) *
            (longlong)(int)((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    iVar8 = *(int *)(param_1 + 0x40) -
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x40) = iVar8;
    if (iVar8 < 0) {
      *(uint *)(param_1 + 0x24) = 0;
      *(uint *)(param_1 + 0x40) = 0;
    }
  }
  uVar3 = *(uint *)(0x01CCF390 + 0x294);
  lVar4 = (longlong)*(int *)(param_1 + 0x58) * (longlong)_DAT_01c43530;
  FUN_004d7f50(0x01CCF390,
               (float)(int)((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) *
               (float)_DAT_005df1f4);
  FUN_00532250(param_1);
  fVar5 = (float)FUN_0040cc00(0,*(float *)(param_1 + 0x48) * _DAT_005df1fc);
  fVar1 = *(float *)(param_1 + 0x48);
  fVar6 = (float)FUN_0040cc00(0,*(float *)(param_1 + 0x48) * _DAT_005df1fc);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar7 = (float)FUN_0040cc00(0,*(float *)(param_1 + 0x48) * _DAT_005df1fc);
  iVar8 = 0x01CCF390;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + (fVar5 - fVar1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (fVar6 - fVar2);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (fVar7 - *(float *)(param_1 + 0x48));
  FUN_004d7f50(iVar8,uVar3);
  return;
}
