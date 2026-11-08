// Name: FUN_0044bb00
// Address: 0044bb00
// Address Range: [[0044bb00, 0044bc4f]]
// Convention: unknown
// Signature: undefined4 FUN_0044bb00(undefined4 param_1,int *param_2,int param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044bb00(uint param_1,int *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  
  if (param_4 == (int *)0x0) {
    iVar7 = 0xaaaa;
  }
  else {
    fVar4 = (float)*param_2 * _DAT_005ddfc4 - *(float *)(param_3 + 4);
    fVar5 = (float)param_2[1] * _DAT_005ddfc4 - *(float *)(param_3 + 8);
    fVar6 = (float)param_2[2] * _DAT_005ddfc4 - *(float *)(param_3 + 0xc);
    fVar9 = (float)(_DAT_01d1a0a8 - ((int)(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) >> 1));
    lVar1 = (longlong)(int)ROUND(fVar4 * fVar9 * _DAT_005ddfc0) * (longlong)*param_4;
    lVar2 = (longlong)(int)ROUND(fVar5 * fVar9 * _DAT_005ddfc0) * (longlong)param_4[1];
    lVar3 = (longlong)(int)ROUND(fVar6 * fVar9 * _DAT_005ddfc0) * (longlong)param_4[2];
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (-1 < iVar7) {
      return 0;
    }
    iVar7 = -iVar7;
  }
  uVar8 = FUN_0044b4a0(param_1,param_2,param_3,iVar7);
  return uVar8;
}
