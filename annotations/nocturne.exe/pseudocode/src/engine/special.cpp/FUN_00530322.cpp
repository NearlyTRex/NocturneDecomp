// Name: engine_special.cpp_FUN_00530322
// Address: 00530322
// Address Range: [[00530322, 0053055b]]
// Convention: unknown
// Signature: int * engine_special_cpp_FUN_00530322(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_special_cpp_FUN_00530322(void)

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
    DAT_005bf078 = *(int *)(&DAT_01bd2fa0 + unaff_EBX * 4) + (int)piVar3 * 2;
    DAT_005bf014 = iVar5 * 4;
    piVar3 = (int *)(*(int *)(&DAT_01bd4260 + unaff_EBX * 4) + (int)piVar3 * 4);
    DAT_005bf07c = piVar3;
    if (_DAT_01c039a0 == 0x80) {
      piVar4 = *(int **)(iVar8 + 0x28);
      iVar8 = (int)((ulonglong)
                    ((longlong)(*(int *)(unaff_EDI + 0x28) - (int)piVar4) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1]) >> 0x20);
      uVar9 = DAT_005bf014;
      DAT_005bf05c = piVar4;
      DAT_005bf488 = iVar8;
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
    if (_DAT_01c039a4 == 5) {
      uVar9 = *(uint *)(iVar8 + 0x18);
      DAT_005bf050 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)*(int *)(iVar8 + 0x28));
      uVar9 = *(uint *)(unaff_EDI + 0x18);
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1]) >> 0x20);
      uVar9 = *(uint *)(iVar8 + 0x20);
      DAT_005bf054 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)*(int *)(iVar8 + 0x28));
      uVar9 = *(uint *)(unaff_EDI + 0x20);
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1]) >> 0x20);
    }
    else {
      DAT_005bf050 = *(uint *)(iVar8 + 0x18);
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1]) >> 0x20);
      DAT_005bf054 = *(uint *)(iVar8 + 0x20);
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1]) >> 0x20);
    }
    iVar8 = *(int *)(iVar8 + 0x28);
    lVar2 = (longlong)(*(int *)(unaff_EDI + 0x28) - iVar8) *
            (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1];
    DAT_005bf488 = (int)((ulonglong)lVar2 >> 0x20);
    piVar3 = (int *)lVar2;
    uVar9 = 0;
    DAT_005bf05c = (int *)iVar8;
    if ((_DAT_01c02584 == 0) &&
       (uVar6 = DAT_005bf054, uVar7 = DAT_005bf050, (_DAT_01c039a0 & 2) == 0)) {
      while( true ) {
        if (((_DAT_01c039a0 & 0x40) == 0) ||
           (piVar3 = (int *)(uVar9 + (int)DAT_005bf07c), *piVar3 <= iVar8)) {
          piVar3 = _DAT_01c00c70;
          if ((_DAT_01c039a0 & 1) != 0) {
            piVar3 = (int *)(uint)*(ushort *)
                                   ((uint)*(byte *)((uVar7 >> (DAT_005bf550 & 0x1f) & _DAT_005bf590)
                                                    + _DAT_01c02580 +
                                                   (uVar6 >> (DAT_005bf570 & 0x1f) & _DAT_005bf5b0))
                                    * 2 + 0x1c00424);
          }
          *(short *)((uVar9 >> 1) + DAT_005bf078) = (short)piVar3;
          if ((_DAT_01c039a0 & 0x80) != 0) {
            piVar3 = (int *)((int)DAT_005bf07c + uVar9);
            *piVar3 = iVar8;
          }
        }
        uVar9 = uVar9 + 4;
        if (DAT_005bf014 <= uVar9) break;
        uVar7 = uVar7 + _DAT_005bf480;
        uVar6 = uVar6 + _DAT_005bf484;
        iVar8 = iVar8 + DAT_005bf488;
      }
    }
  }
  return piVar3;
}
