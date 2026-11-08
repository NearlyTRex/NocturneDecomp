// Name: FUN_0046cc40
// Address: 0046cc40
// Address Range: [[0046cc40, 0046ce5e]]
// Convention: unknown
// Signature: void FUN_0046cc40(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046cc40(int param_1,float *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  ulonglong uVar15;
  float afStackY_1010 [1017];
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  FUN_0045b9b0(param_2);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fVar7 = (float10)_DAT_005bc4fb;
  fVar8 = (float10)*param_2 * (float10)_DAT_005bc50b;
  fVar9 = (float10)param_2[1] * (float10)_DAT_005bc50b;
  fVar10 = (float10)param_2[2] * (float10)_DAT_005bc50b;
  fVar11 = (float10)param_2[3] * (float10)_DAT_005bc50b;
  fVar12 = (float10)local_1c * fVar7 * (float10)_DAT_005bc503;
  fVar13 = (float10)local_14 * fVar7 * (float10)_DAT_005bc503;
  fVar14 = (float10)local_18 * fVar7 * (float10)_DAT_005bc503;
  FUN_005a3120();
  _DAT_01c6e2fc = (uint)ROUND(fVar8);
  fVar7 = (float10)param_2[4] * (float10)_DAT_005bc50b;
  FUN_005a3120();
  _DAT_01c6e300 = (uint)ROUND(fVar9);
  fVar8 = (float10)param_2[5] * (float10)_DAT_005bc50b;
  FUN_005a3120();
  _DAT_01c6e304 = (int)ROUND(fVar10);
  fVar9 = (float10)param_2[6] * (float10)_DAT_005bc50b;
  FUN_005a3120();
  _DAT_01c6e308 = (uint)ROUND(fVar11);
  fVar10 = (float10)param_2[7] * (float10)_DAT_005bc50b;
  FUN_005a3120();
  iVar2 = DAT_005fba44;
  _DAT_01c6e30c = (uint)ROUND(fVar7);
  fVar7 = (float10)param_2[8] * (float10)_DAT_005bc50b;
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  _DAT_01c6e310 = (int)ROUND(fVar8);
  _DAT_01c6e314 = (uint)ROUND(fVar9);
  _DAT_01c6e318 = (uint)ROUND(fVar10);
  _DAT_01c6e31c = (int)ROUND(fVar7);
  FUN_005a3120();
  FUN_005a3120();
  uVar15 = FUN_005a3120();
  iVar3 = _DAT_01c6b5b4;
  iVar4 = _DAT_01c6b5ac;
  _DAT_01c6e2e4 = (int)ROUND(fVar12);
  _DAT_01c6e2e8 = (int)ROUND(fVar13);
  _DAT_01c6e2ec = (int)ROUND(fVar14);
  iVar5 = _DAT_01c6b5b0 - _DAT_01c6b5a8;
  *(int *)(param_1 + 0x24) =
       (int)(((longlong)(int)uVar15 * (longlong)(int)((ulonglong)uVar15 >> 0x20)) / (longlong)iVar2)
  ;
  iVar2 = DAT_005fba44;
  iVar4 = ((iVar5 + 1) * 0x10000) / ((iVar3 - iVar4) + 1);
  *(int *)(param_1 + 0x28) = iVar4;
  *(int *)(param_1 + 0x28) =
       (int)((longlong)
             ((((longlong)iVar4 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar4 * 0x10000 & 0xffffffffU) / (longlong)iVar2);
  lVar1 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c6e2fc;
  _DAT_01c6e2fc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c6e308;
  _DAT_01c6e308 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c6e314;
  _DAT_01c6e314 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c6e300;
  _DAT_01c6e300 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c6e30c;
  _DAT_01c6e30c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c6e318;
  _DAT_01c6e318 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  FUN_004e4e10();
  return;
}
