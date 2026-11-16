// Name: FUN_004e5410
// Address: 004e5410
// Address Range: [[004e5410, 004e54dc]]
// Convention: unknown
// Signature: void FUN_004e5410(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5410(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  int iVar9;
  
  iVar9 = *param_1 - _DAT_01c6e2cc;
  iVar8 = param_1[2] - _DAT_01c6e2d4;
  iVar7 = param_1[1] - _DAT_01c6e2d0;
  lVar1 = (longlong)_DAT_01c6e300;
  lVar2 = (longlong)_DAT_01c6e30c;
  lVar3 = (longlong)_DAT_01c6e318;
  lVar4 = (longlong)_DAT_01c6e304;
  lVar5 = (longlong)_DAT_01c6e310;
  lVar6 = (longlong)_DAT_01c6e31c;
  *unaff_ESI = ((uint)((longlong)_DAT_01c6e2fc * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c6e2fc * (longlong)iVar9) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01c6e308 * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c6e308 * (longlong)iVar7) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01c6e314 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c6e314 * (longlong)iVar8) >> 0x20) << 0x10);
  unaff_ESI[1] = ((uint)(lVar1 * iVar9) >> 0x10 | (int)((ulonglong)(lVar1 * iVar9) >> 0x20) << 0x10)
                 + ((uint)(lVar2 * iVar7) >> 0x10 |
                   (int)((ulonglong)(lVar2 * iVar7) >> 0x20) << 0x10) +
                 ((uint)(lVar3 * iVar8) >> 0x10 | (int)((ulonglong)(lVar3 * iVar8) >> 0x20) << 0x10)
  ;
  unaff_ESI[2] = ((uint)(lVar4 * iVar9) >> 0x10 | (int)((ulonglong)(lVar4 * iVar9) >> 0x20) << 0x10)
                 + ((uint)(lVar5 * iVar7) >> 0x10 |
                   (int)((ulonglong)(lVar5 * iVar7) >> 0x20) << 0x10) +
                 ((uint)(lVar6 * iVar8) >> 0x10 | (int)((ulonglong)(lVar6 * iVar8) >> 0x20) << 0x10)
  ;
  return;
}
