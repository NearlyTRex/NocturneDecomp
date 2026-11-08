// Name: FUN_0055d0b3
// Address: 0055d0b3
// Address Range: [[0055d0b3, 0055d2e8]]
// Convention: unknown
// Signature: int * FUN_0055d0b3(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0055d0b3(void)

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
    DAT_0061c378 = *(int *)(&DAT_01c2a38c + unaff_EBX * 4) + (int)piVar3 * 4;
    DAT_0061c314 = iVar5 * 4;
    piVar3 = (int *)(*(int *)(&DAT_01c2b64c + unaff_EBX * 4) + (int)piVar3 * 4);
    DAT_0061c37c = piVar3;
    if (_DAT_01c38b54 == 0x80) {
      piVar4 = *(int **)(iVar8 + 0x28);
      iVar8 = (int)((ulonglong)
                    ((longlong)(*(int *)(unaff_EDI + 0x28) - (int)piVar4) *
                    (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar9 = DAT_0061c314;
      DAT_0061c35c = piVar4;
      DAT_0061c788 = iVar8;
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
    if (_DAT_01c38b58 == 5) {
      uVar9 = *(uint *)(iVar8 + 0x18);
      DAT_0061c350 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)*(int *)(iVar8 + 0x28));
      uVar9 = *(uint *)(unaff_EDI + 0x18);
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar9 = *(uint *)(iVar8 + 0x20);
      DAT_0061c354 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)*(int *)(iVar8 + 0x28));
      uVar9 = *(uint *)(unaff_EDI + 0x20);
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    else {
      DAT_0061c350 = *(uint *)(iVar8 + 0x18);
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      DAT_0061c354 = *(uint *)(iVar8 + 0x20);
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    iVar8 = *(int *)(iVar8 + 0x28);
    lVar2 = (longlong)(*(int *)(unaff_EDI + 0x28) - iVar8) *
            (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314);
    DAT_0061c788 = (int)((ulonglong)lVar2 >> 0x20);
    piVar3 = (int *)lVar2;
    uVar9 = 0;
    DAT_0061c35c = (int *)iVar8;
    if ((_DAT_01c37774 == 0) &&
       (uVar6 = DAT_0061c354, uVar7 = DAT_0061c350, (_DAT_01c38b54 & 2) == 0)) {
      while( true ) {
        if (((_DAT_01c38b54 & 0x40) == 0) ||
           (piVar3 = (int *)(uVar9 + (int)DAT_0061c37c), *piVar3 <= iVar8)) {
          piVar3 = _DAT_01c35e60;
          if ((_DAT_01c38b54 & 1) != 0) {
            piVar3 = *(int **)(&DAT_01c35214 +
                              (uint)*(byte *)((uVar7 >> (DAT_0061c868 & 0x1f) & _DAT_0061c8a8) +
                                              _DAT_01c37770 +
                                             (uVar6 >> (DAT_0061c888 & 0x1f) & _DAT_0061c8c8)) * 4);
          }
          *(int **)(DAT_0061c378 + uVar9) = piVar3;
          if ((_DAT_01c38b54 & 0x80) != 0) {
            piVar3 = (int *)((int)DAT_0061c37c + uVar9);
            *piVar3 = iVar8;
          }
        }
        uVar9 = uVar9 + 4;
        if (DAT_0061c314 <= uVar9) break;
        uVar7 = uVar7 + _DAT_0061c780;
        uVar6 = uVar6 + _DAT_0061c784;
        iVar8 = iVar8 + DAT_0061c788;
      }
    }
  }
  return piVar3;
}
