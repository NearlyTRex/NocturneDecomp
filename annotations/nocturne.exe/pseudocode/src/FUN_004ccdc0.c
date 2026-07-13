// Name: FUN_004ccdc0
// Address: 004ccdc0
// Address Range: [[004ccdc0, 004cd0d4]]
// Convention: unknown
// Signature: void FUN_004ccdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ccdc0(uint param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = FUN_004cca60(param_1);
  iVar7 = FUN_004ccaa0(param_1);
  iVar8 = FUN_004cca60(param_2);
  iVar9 = FUN_004ccaa0(param_2);
  iVar10 = FUN_004cca60(param_3);
  iVar11 = FUN_004ccaa0(param_3);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  lVar2 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  _DAT_01c039f0 =
       (uint)((longlong)iVar7 * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20) << 0x10;
  _DAT_01c039fc = -iVar6;
  lVar3 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  lVar4 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  _DAT_01c03a08 =
       (uint)((longlong)iVar7 * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20) << 0x10;
  if (199 < DAT_005b7620) {
    if (DAT_005b7620 < 0xc9) {
      _DAT_01cc5170 = 0x15555;
      goto LAB_004ccf3c;
    }
    if (DAT_005b7620 == 400) {
      _DAT_01cc5170 = 0xaaaa;
      goto LAB_004ccf3c;
    }
  }
  _DAT_01cc5170 = 0x10000;
LAB_004ccf3c:
  iVar6 = (DAT_005b761c * -(int)(((longlong)_DAT_01c00c4c * 0x10000) / (longlong)_DAT_01c00c48) * 3)
          / (int)(DAT_005b7620 << 2);
  lVar1 = (longlong)iVar6 *
          (longlong)
          (int)(((uint)((longlong)iVar9 * (longlong)iVar11) >> 0x10 |
                (int)((ulonglong)((longlong)iVar9 * (longlong)iVar11) >> 0x20) << 0x10) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
  lVar5 = (longlong)iVar6 *
          (longlong)
          (int)((uint)((longlong)iVar7 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar8) >> 0x20) << 0x10);
  lVar3 = (longlong)iVar6 *
          (longlong)
          (int)(((uint)((longlong)iVar9 * (longlong)-iVar10) >> 0x10 |
                (int)((ulonglong)((longlong)iVar9 * (longlong)-iVar10) >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
  iVar6 = ((((_DAT_01c00c60 - _DAT_01c00c58) * 0x280) / DAT_005b761c) * 0x30000) /
          (((_DAT_01c00c64 - _DAT_01c00c5c) * 0x1e0) / (int)DAT_005b7620);
  iVar12 = iVar6 >> 0x1f;
  iVar6 = (int)((iVar6 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2;
  _DAT_01c039e8 =
       (uint)
       (((longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_005b7648);
  _DAT_01c039ec =
       (uint)
       (((longlong)
         (int)(((uint)((longlong)iVar8 * (longlong)-iVar11) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)-iVar11) >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10)) * (longlong)iVar6) /
       (longlong)DAT_005b7648);
  _DAT_01c039f4 =
       (uint)
       (((longlong)(int)((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_005b7648);
  _DAT_01c039f8 =
       (uint)
       (((longlong)
         (int)((uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_005b7648);
  _DAT_01c03a00 =
       (uint)
       (((longlong)(int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) *
        (longlong)iVar6) / (longlong)DAT_005b7648);
  _DAT_01c03a04 =
       (uint)
       (((longlong)
         (int)(((uint)((longlong)iVar10 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)iVar10 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10)) * (longlong)iVar6) /
       (longlong)DAT_005b7648);
  FUN_004ccae0();
  return;
}
