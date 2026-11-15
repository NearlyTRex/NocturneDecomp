// Name: core_inv.cpp_FUN_004d9ff0
// Address: 004d9ff0
// Address Range: [[004d9ff0, 004da120]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004d9ff0(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004d9ff0(float param_1,float param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  byte bVar8;
  double dVar9;
  double dVar10;
  int aiStack_100c [1019];
  int local_1c;
  int local_14;
  
  iVar7 = _DAT_01c35e40;
  iVar6 = _DAT_01c35e38;
  bVar8 = 0;
  dVar10 = (double)param_2 * _DAT_005db3ea;
  dVar9 = round((double)param_1 * _DAT_005db3ea);
  local_14 = (int)ROUND(dVar9);
  dVar10 = round(dVar10);
  local_14 = (int)ROUND(dVar10);
  uVar1 = (ulonglong)((int)ROUND(dVar9) - iVar7);
  iVar6 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)iVar6);
  uVar1 = (ulonglong)((int)ROUND(dVar10) - _DAT_01c35e44);
  iVar7 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)_DAT_01c35e3c);
  lVar2 = (longlong)_DAT_01d04fb8 * (longlong)iVar6;
  lVar3 = (longlong)_DAT_01d04fc4 * (longlong)iVar7;
  lVar4 = (longlong)_DAT_01d04fc0 * (longlong)iVar6;
  lVar5 = (longlong)_DAT_01d04fcc * (longlong)iVar7;
  local_1c = _DAT_01c38b74 +
             ((uint)((longlong)_DAT_01d04fd8 * 0x10000) >> 0x10 |
             (int)((ulonglong)((longlong)_DAT_01d04fd8 * 0x10000) >> 0x20) << 0x10) +
             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
             ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  *unaff_ESI = _DAT_01c38b6c +
               ((uint)((longlong)_DAT_01d04fd0 * 0x10000) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d04fd0 * 0x10000) >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  unaff_ESI[(uint)bVar8 * -2 + 1] = *(int *)(&stack0xffffffe0 + (uint)bVar8 * -8);
  (unaff_ESI + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
       *(int *)((int)&stack0xffffffe4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  return;
}
