// Name: FUN_004988b0
// Address: 004988b0
// Address Range: [[004988b0, 00498a02]]
// Convention: unknown
// Signature: void FUN_004988b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004988b0(int param_1)

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
    lVar4 = (longlong)_DAT_01c5fad0 * (longlong)*(int *)(param_1 + 0x58);
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
  uVar3 = *(uint *)(0x01D2130C + 0x314);
  lVar4 = (longlong)*(int *)(param_1 + 0x58) * (longlong)_DAT_01c5fad0;
  FUN_004bf3a0(0x01D2130C,
               (float)(int)((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) *
               (float)_DAT_005c0530);
  FUN_00509f30(param_1);
  fVar5 = (float)FUN_0040ce40(0,*(float *)(param_1 + 0x48) * _DAT_005c0538);
  fVar1 = *(float *)(param_1 + 0x48);
  fVar6 = (float)FUN_0040ce40(0,*(float *)(param_1 + 0x48) * _DAT_005c0538);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar7 = (float)FUN_0040ce40(0,*(float *)(param_1 + 0x48) * _DAT_005c0538);
  iVar8 = 0x01D2130C;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + (fVar5 - fVar1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (fVar6 - fVar2);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (fVar7 - *(float *)(param_1 + 0x48));
  FUN_004bf3a0(iVar8,uVar3);
  return;
}
