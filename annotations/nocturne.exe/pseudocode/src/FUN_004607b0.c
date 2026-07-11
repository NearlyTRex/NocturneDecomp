// Name: FUN_004607b0
// Address: 004607b0
// Address Range: [[004607b0, 004609cd]]
// Convention: unknown
// Signature: void FUN_004607b0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004607b0(int param_1,float *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  ulonglong uVar13;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_0044dbd0(param_2,&local_20);
  fVar6 = (float10)*param_2 * (float10)_DAT_0057dc1d;
  fVar7 = (float10)param_2[1] * (float10)_DAT_0057dc1d;
  fVar8 = (float10)param_2[2] * (float10)_DAT_0057dc1d;
  fVar9 = (float10)param_2[3] * (float10)_DAT_0057dc1d;
  fVar10 = (float10)local_20 * (float10)_DAT_0057dc0d * (float10)_DAT_0057dc15;
  fVar11 = (float10)local_18 * (float10)_DAT_0057dc0d * (float10)_DAT_0057dc15;
  fVar12 = (float10)local_1c * (float10)_DAT_0057dc0d * (float10)_DAT_0057dc15;
  FUN_00563a30();
  _DAT_01c039e8 = (uint)ROUND(fVar6);
  fVar6 = (float10)param_2[4] * (float10)_DAT_0057dc1d;
  FUN_00563a30();
  _DAT_01c039ec = (uint)ROUND(fVar7);
  fVar7 = (float10)param_2[5] * (float10)_DAT_0057dc1d;
  FUN_00563a30();
  _DAT_01c039f0 = (int)ROUND(fVar8);
  fVar8 = (float10)param_2[6] * (float10)_DAT_0057dc1d;
  FUN_00563a30();
  _DAT_01c039f4 = (uint)ROUND(fVar9);
  fVar9 = (float10)param_2[7] * (float10)_DAT_0057dc1d;
  FUN_00563a30();
  iVar2 = DAT_005b7648;
  _DAT_01c039f8 = (uint)ROUND(fVar6);
  fVar6 = (float10)param_2[8] * (float10)_DAT_0057dc1d;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  _DAT_01c039fc = (int)ROUND(fVar7);
  _DAT_01c03a00 = (uint)ROUND(fVar8);
  _DAT_01c03a04 = (uint)ROUND(fVar9);
  _DAT_01c03a08 = (int)ROUND(fVar6);
  FUN_00563a30();
  FUN_00563a30();
  uVar13 = FUN_00563a30();
  iVar3 = _DAT_01c00c64;
  iVar4 = _DAT_01c00c5c;
  _DAT_01c039d0 = (int)ROUND(fVar10);
  _DAT_01c039d4 = (int)ROUND(fVar11);
  _DAT_01c039d8 = (int)ROUND(fVar12);
  iVar5 = _DAT_01c00c60 - _DAT_01c00c58;
  *(int *)(param_1 + 0x24) =
       (int)(((longlong)(int)uVar13 * (longlong)(int)((ulonglong)uVar13 >> 0x20)) / (longlong)iVar2)
  ;
  iVar2 = DAT_005b7648;
  iVar4 = ((iVar5 + 1) * 0x10000) / ((iVar3 - iVar4) + 1);
  *(int *)(param_1 + 0x28) = iVar4;
  *(int *)(param_1 + 0x28) =
       (int)((longlong)
             ((((longlong)iVar4 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar4 * 0x10000 & 0xffffffffU) / (longlong)iVar2);
  lVar1 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c039e8;
  _DAT_01c039e8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c039f4;
  _DAT_01c039f4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c03a00;
  _DAT_01c03a00 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c039ec;
  _DAT_01c039ec = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c039f8;
  _DAT_01c039f8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c03a04;
  _DAT_01c03a04 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  FUN_004ccae0();
  return;
}
