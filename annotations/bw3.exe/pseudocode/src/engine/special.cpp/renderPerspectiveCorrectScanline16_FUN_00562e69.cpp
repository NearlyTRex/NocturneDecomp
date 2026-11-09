// Name: engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69
// Address: 00562e69
// Address Range: [[00562e69, 005630a2]]
// Convention: unknown
// Signature: int * engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69(void)

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
    DAT_00604908 = *(int *)(&DAT_01c5faec + unaff_EBX * 4) + (int)piVar3 * 2;
    DAT_006048a4 = iVar5 * 4;
    piVar3 = (int *)(*(int *)(&DAT_01c60dac + unaff_EBX * 4) + (int)piVar3 * 4);
    DAT_0060490c = piVar3;
    if (_DAT_01c6e2b4 == 0x80) {
      piVar4 = *(int **)(iVar8 + 0x28);
      iVar8 = (int)((ulonglong)
                    ((longlong)(*(int *)(unaff_EDI + 0x28) - (int)piVar4) *
                    (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
      uVar9 = DAT_006048a4;
      DAT_006048ec = piVar4;
      DAT_00604d18 = iVar8;
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
    if (_DAT_01c6e2b8 == 5) {
      uVar9 = *(uint *)(iVar8 + 0x18);
      DAT_006048e0 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)*(int *)(iVar8 + 0x28));
      uVar9 = *(uint *)(unaff_EDI + 0x18);
      _DAT_00604d10 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_006048e0) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
      uVar9 = *(uint *)(iVar8 + 0x20);
      DAT_006048e4 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)*(int *)(iVar8 + 0x28));
      uVar9 = *(uint *)(unaff_EDI + 0x20);
      _DAT_00604d14 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_006048e4) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    }
    else {
      DAT_006048e0 = *(uint *)(iVar8 + 0x18);
      _DAT_00604d10 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - DAT_006048e0) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
      DAT_006048e4 = *(uint *)(iVar8 + 0x20);
      _DAT_00604d14 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - DAT_006048e4) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    }
    iVar8 = *(int *)(iVar8 + 0x28);
    lVar2 = (longlong)(*(int *)(unaff_EDI + 0x28) - iVar8) *
            (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4);
    DAT_00604d18 = (int)((ulonglong)lVar2 >> 0x20);
    piVar3 = (int *)lVar2;
    uVar9 = 0;
    DAT_006048ec = (int *)iVar8;
    if ((_DAT_01c6ced4 == 0) &&
       (uVar6 = DAT_006048e4, uVar7 = DAT_006048e0, (_DAT_01c6e2b4 & 2) == 0)) {
      while( true ) {
        if (((_DAT_01c6e2b4 & 0x40) == 0) ||
           (piVar3 = (int *)(uVar9 + (int)DAT_0060490c), *piVar3 <= iVar8)) {
          piVar3 = _DAT_01c6b5c0;
          if ((_DAT_01c6e2b4 & 1) != 0) {
            piVar3 = (int *)(uint)*(ushort *)
                                   ((uint)*(byte *)((uVar7 >> (DAT_00604df8 & 0x1f) & _DAT_00604e38)
                                                    + _DAT_01c6ced0 +
                                                   (uVar6 >> (DAT_00604e18 & 0x1f) & _DAT_00604e58))
                                    * 2 + 0x1c6ad74);
          }
          *(short *)((uVar9 >> 1) + DAT_00604908) = (short)piVar3;
          if ((_DAT_01c6e2b4 & 0x80) != 0) {
            piVar3 = (int *)((int)DAT_0060490c + uVar9);
            *piVar3 = iVar8;
          }
        }
        uVar9 = uVar9 + 4;
        if (DAT_006048a4 <= uVar9) break;
        uVar7 = uVar7 + _DAT_00604d10;
        uVar6 = uVar6 + _DAT_00604d14;
        iVar8 = iVar8 + DAT_00604d18;
      }
    }
  }
  return piVar3;
}
