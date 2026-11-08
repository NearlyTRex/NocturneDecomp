// Name: FUN_0057fd39
// Address: 0057fd39
// Address Range: [[0057fd39, 0057ff72]]
// Convention: unknown
// Signature: int * FUN_0057fd39(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0057fd39(void)

{
  bool bVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  uint uVar7;
  int unaff_ESI;
  int iVar8;
  int unaff_EDI;
  uint uVar9;
  
  uVar9 = *(uint *)(unaff_ESI + 8);
  uVar6 = *(uint *)(unaff_EDI + 8);
  uVar7 = uVar9;
  iVar8 = unaff_ESI;
  if (uVar6 < uVar9) {
    uVar7 = uVar6;
    uVar6 = uVar9;
    iVar8 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  piVar3 = (int *)(uVar7 >> 0x10);
  iVar5 = (int)(uVar6 >> 0x10) - (int)piVar3;
  if (iVar5 != 0 && piVar3 <= (int *)(uVar6 >> 0x10)) {
    DAT_006239c8 = *(int *)(&DAT_01c4354c + unaff_EBX * 4) + (int)piVar3 * 2;
    DAT_00623964 = iVar5 * 4;
    piVar3 = (int *)(*(int *)(&DAT_01c4480c + unaff_EBX * 4) + (int)piVar3 * 4);
    DAT_006239cc = piVar3;
    if (_DAT_01c51d14 == 0x80) {
      piVar4 = *(int **)(iVar8 + 0x28);
      iVar8 = (int)((ulonglong)
                    ((longlong)(*(int *)(unaff_EDI + 0x28) - (int)piVar4) *
                    (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      uVar9 = DAT_00623964;
      DAT_006239ac = piVar4;
      DAT_00623dd8 = iVar8;
      do {
        *piVar3 = (int)piVar4;
        piVar4 = (int *)((int)piVar4 + iVar8);
        piVar3 = piVar3 + 1;
        uVar6 = uVar9 - 4;
        bVar1 = 3 < (int)uVar9;
        uVar9 = uVar6;
      } while (uVar6 != 0 && bVar1);
      return piVar4;
    }
    if (_DAT_01c51d18 == 5) {
      uVar9 = *(uint *)(iVar8 + 0x18);
      DAT_006239a0 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)*(int *)(iVar8 + 0x28));
      uVar9 = *(uint *)(unaff_EDI + 0x18);
      _DAT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_006239a0) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      uVar9 = *(uint *)(iVar8 + 0x20);
      DAT_006239a4 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)*(int *)(iVar8 + 0x28));
      uVar9 = *(uint *)(unaff_EDI + 0x20);
      _DAT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_006239a4) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    else {
      DAT_006239a0 = *(uint *)(iVar8 + 0x18);
      _DAT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - DAT_006239a0) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      DAT_006239a4 = *(uint *)(iVar8 + 0x20);
      _DAT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - DAT_006239a4) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    iVar8 = *(int *)(iVar8 + 0x28);
    lVar2 = (longlong)(*(int *)(unaff_EDI + 0x28) - iVar8) *
            (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964);
    DAT_00623dd8 = (int)((ulonglong)lVar2 >> 0x20);
    piVar3 = (int *)lVar2;
    uVar9 = 0;
    DAT_006239ac = (int *)iVar8;
    if ((_DAT_01c50934 == 0) &&
       (uVar6 = DAT_006239a4, uVar7 = DAT_006239a0, (_DAT_01c51d14 & 2) == 0)) {
      while( true ) {
        if (((_DAT_01c51d14 & 0x40) == 0) ||
           (piVar3 = (int *)(uVar9 + (int)DAT_006239cc), *piVar3 <= iVar8)) {
          piVar3 = _DAT_01c4f020;
          if ((_DAT_01c51d14 & 1) != 0) {
            piVar3 = (int *)(uint)*(ushort *)
                                   ((uint)*(byte *)((uVar7 >> (DAT_00623eb8 & 0x1f) & _DAT_00623ef8)
                                                    + _DAT_01c50930 +
                                                   (uVar6 >> (DAT_00623ed8 & 0x1f) & _DAT_00623f18))
                                    * 2 + 0x1c4e7d4);
          }
          *(short *)((uVar9 >> 1) + DAT_006239c8) = (short)piVar3;
          if ((_DAT_01c51d14 & 0x80) != 0) {
            piVar3 = (int *)((int)DAT_006239cc + uVar9);
            *piVar3 = iVar8;
          }
        }
        uVar9 = uVar9 + 4;
        if (DAT_00623964 <= uVar9) break;
        uVar7 = uVar7 + _DAT_00623dd0;
        uVar6 = uVar6 + _DAT_00623dd4;
        iVar8 = iVar8 + DAT_00623dd8;
      }
    }
  }
  return piVar3;
}
