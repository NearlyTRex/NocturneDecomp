// Name: FUN_0046f960
// Address: 0046f960
// Address Range: [[0046f960, 0046f9a5]]
// Convention: unknown
// Signature: uint FUN_0046f960(void)

#include "nocturne.h"

uint FUN_0046f960(void)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  int *piVar8;
  int unaff_ESI;
  int iVar9;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 8);
  uVar5 = *(uint *)(unaff_EDI + 8);
  uVar4 = uVar1;
  iVar9 = unaff_ESI;
  if (uVar5 < uVar1) {
    uVar4 = uVar5;
    uVar5 = uVar1;
    iVar9 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar4 = uVar4 >> 0x10;
  iVar6 = (uVar5 >> 0x10) - uVar4;
  if (iVar6 != 0 && uVar4 <= uVar5 >> 0x10) {
    piVar8 = (int *)(*(int *)(&DAT_01c60dac + unaff_EBX * 4) + uVar4 * 4);
    lVar3 = (longlong)(*(int *)(unaff_EDI + 0x28) - *(int *)(iVar9 + 0x28)) *
            (longlong)*(int *)(&DAT_01c6b5d4 + iVar6 * 4);
    uVar4 = (uint)lVar3;
    iVar9 = *(int *)(iVar9 + 0x28);
    do {
      if (*piVar8 <= iVar9) {
        *piVar8 = iVar9;
      }
      iVar9 = iVar9 + (int)((ulonglong)lVar3 >> 0x20);
      piVar8 = piVar8 + 1;
      iVar7 = iVar6 + -1;
      bVar2 = 0 < iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar2);
  }
  return uVar4;
}
