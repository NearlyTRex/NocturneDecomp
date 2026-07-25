// Name: FUN_00464075
// Address: 00464075
// Address Range: [[00464075, 004641ff]]
// Convention: unknown
// Signature: void FUN_00464075(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464075(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  uint *puVar5;
  uint *puVar6;
  int unaff_ESI;
  uint uVar7;
  uint uVar8;
  int unaff_EDI;
  
  uVar8 = *(uint *)(unaff_ESI + 8);
  uVar7 = *(uint *)(unaff_EDI + 8);
  uVar1 = uVar8;
  iVar3 = unaff_ESI;
  if (uVar7 < uVar8) {
    uVar1 = uVar7;
    uVar7 = uVar8;
    iVar3 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar7 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar7 >> 0x10) {
    puVar6 = (uint *)(*(int *)(&DAT_01bd4260 + unaff_EBX * 4) + uVar1 * 4);
    iVar4 = (int)((ulonglong)
                  ((longlong)(*(int *)(unaff_EDI + 0x28) - *(int *)(iVar3 + 0x28)) *
                  (longlong)*(int *)(&DAT_01c00c80 + (iVar2 + 1) * 4)) >> 0x20);
    uVar8 = *(uint *)(iVar3 + 0x28);
    while (iVar3 = iVar2 + -4, puVar5 = puVar6, 3 < iVar2) {
      uVar7 = uVar8 + iVar4 + iVar4;
      uVar1 = uVar7 + iVar4;
      _DAT_01b4d764 =
           ((((_DAT_01b4d764 - (uint)(uVar8 >> 8 < *puVar6)) -
             (uint)(uVar8 + iVar4 >> 8 < puVar6[1])) - (uint)(uVar7 >> 8 < puVar6[2])) + 4) -
           (uint)(uVar1 >> 8 < puVar6[3]);
      uVar8 = uVar1 + iVar4;
      puVar5 = puVar6 + 4;
      iVar3 = iVar2 + -8;
      if (iVar2 + -4 < 4) break;
      uVar7 = uVar8 + iVar4 + iVar4;
      uVar1 = uVar7 + iVar4;
      _DAT_01b4d764 =
           ((((_DAT_01b4d764 - (uint)(uVar8 >> 8 < *puVar5)) -
             (uint)(uVar8 + iVar4 >> 8 < puVar6[5])) - (uint)(uVar7 >> 8 < puVar6[6])) + 4) -
           (uint)(uVar1 >> 8 < puVar6[7]);
      uVar8 = uVar1 + iVar4;
      puVar5 = puVar6 + 8;
      iVar3 = iVar2 + -0xc;
      if (iVar2 + -8 < 4) break;
      uVar7 = uVar8 + iVar4 + iVar4;
      uVar1 = uVar7 + iVar4;
      _DAT_01b4d764 =
           ((((_DAT_01b4d764 - (uint)(uVar8 >> 8 < *puVar5)) -
             (uint)(uVar8 + iVar4 >> 8 < puVar6[9])) - (uint)(uVar7 >> 8 < puVar6[10])) + 4) -
           (uint)(uVar1 >> 8 < puVar6[0xb]);
      uVar8 = uVar1 + iVar4;
      puVar5 = puVar6 + 0xc;
      iVar3 = iVar2 + -0x10;
      if (iVar2 + -0xc < 4) break;
      uVar7 = uVar8 + iVar4 + iVar4;
      uVar1 = uVar7 + iVar4;
      _DAT_01b4d764 =
           ((((_DAT_01b4d764 - (uint)(uVar8 >> 8 < *puVar5)) -
             (uint)(uVar8 + iVar4 >> 8 < puVar6[0xd])) - (uint)(uVar7 >> 8 < puVar6[0xe])) + 4) -
           (uint)(uVar1 >> 8 < puVar6[0xf]);
      uVar8 = uVar1 + iVar4;
      puVar6 = puVar6 + 0x10;
      iVar2 = iVar3;
    }
    if (-4 < iVar3) {
      _DAT_01b4d764 = (_DAT_01b4d764 + 1) - (uint)(uVar8 >> 8 < *puVar5);
      if (iVar3 != -3 && 0 < iVar3 + 4) {
        _DAT_01b4d764 = (_DAT_01b4d764 + 1) - (uint)(uVar8 + iVar4 >> 8 < puVar5[1]);
        if (1 < iVar3 + 3) {
          _DAT_01b4d764 = (_DAT_01b4d764 + 1) - (uint)(uVar8 + iVar4 + iVar4 >> 8 < puVar5[2]);
        }
      }
    }
  }
  return;
}
