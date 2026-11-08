// Name: FUN_004d9ff0
// Address: 004d9ff0
// Address Range: [[004d9ff0, 004da120]]
// Convention: unknown
// Signature: void FUN_004d9ff0(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d9ff0(float param_1,float param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  ulonglong uVar7;
  int aiStack_1004 [1017];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = _DAT_01c35e38;
  bVar4 = 0;
  fVar5 = (float10)param_1 * (float10)_DAT_005db3ea;
  fVar6 = (float10)param_2 * (float10)_DAT_005db3ea;
  FUN_005b7ff0();
  local_10 = (int)ROUND(fVar5);
  uVar7 = FUN_005b7ff0();
  local_c = (int)ROUND(fVar6);
  uVar1 = (ulonglong)((int)uVar7 - (int)((ulonglong)uVar7 >> 0x20));
  iVar2 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)iVar2);
  uVar1 = (ulonglong)((int)ROUND(fVar6) - _DAT_01c35e44);
  iVar3 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)_DAT_01c35e3c);
  local_1c = _DAT_01c38b6c +
             ((uint)((longlong)_DAT_01d04fd0 * 0x10000) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fd0 * 0x10000) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01d04fb8 * (longlong)iVar2) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fb8 * (longlong)iVar2) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01d04fc4 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fc4 * (longlong)iVar3) >> 0x20) << 0x10);
  local_18 = _DAT_01c38b70 +
             ((uint)((longlong)_DAT_01d04fd4 * 0x10000) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fd4 * 0x10000) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01d04fbc * (longlong)iVar2) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fbc * (longlong)iVar2) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01d04fc8 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fc8 * (longlong)iVar3) >> 0x20) << 0x10);
  local_14 = _DAT_01c38b74 +
             ((uint)((longlong)_DAT_01d04fd8 * 0x10000) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fd8 * 0x10000) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01d04fc0 * (longlong)iVar2) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fc0 * (longlong)iVar2) >> 0x20) << 0x10) +
             ((uint)((longlong)_DAT_01d04fcc * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fcc * (longlong)iVar3) >> 0x20) << 0x10);
  *unaff_ESI = local_1c;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(int *)((int)&stack0xffffffe8 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(int *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
