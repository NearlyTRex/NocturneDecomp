// Name: FUN_00463ff5
// Address: 00463ff5
// Address Range: [[00463ff5, 00464074]]
// Convention: unknown
// Signature: void FUN_00463ff5(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463ff5(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint unaff_EBX;
  ushort *puVar7;
  int unaff_ESI;
  int iVar8;
  uint uVar9;
  int unaff_EDI;
  
  if ((unaff_EBX & 1) != 0) {
    return;
  }
  uVar9 = *(uint *)(unaff_ESI + 8);
  uVar3 = *(uint *)(unaff_EDI + 8);
  uVar2 = uVar9;
  iVar8 = unaff_ESI;
  if (uVar3 < uVar9) {
    uVar2 = uVar3;
    uVar3 = uVar9;
    iVar8 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar2 = uVar2 >> 0x10;
  iVar4 = (uVar3 >> 0x10) - uVar2;
  if (iVar4 != 0 && uVar2 <= uVar3 >> 0x10) {
    puVar7 = (ushort *)(*(int *)(&DAT_01bd2fa0 + unaff_EBX * 4) + uVar2 * 2);
    uVar9 = *(uint *)(iVar8 + 0x28);
    iVar5 = iVar4;
    do {
      if ((uVar9 >> 8 < (uint)*puVar7) &&
         (_DAT_01b4d764 = _DAT_01b4d764 + 1, DAT_005ae708 <= _DAT_01b4d764)) {
        _DAT_01b4d768 = 1;
        return;
      }
      uVar9 = uVar9 + (int)((ulonglong)
                            ((longlong)(*(int *)(unaff_EDI + 0x28) - *(int *)(iVar8 + 0x28)) *
                            (longlong)*(int *)(&DAT_01c00c80 + (iVar4 + 1) * 4)) >> 0x20) * 2;
      puVar7 = puVar7 + 2;
      iVar6 = iVar5 + -2;
      bVar1 = 1 < iVar5;
      iVar5 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
  return;
}
