// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57
// Address: 0046fa57
// Address Range: [[0046fa57, 0046fb71]]
// Convention: unknown
// Signature: void core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  uint uVar6;
  
  uVar4 = *(uint *)(unaff_ESI + 8);
  uVar5 = *(uint *)(unaff_EDI + 8);
  uVar1 = uVar4;
  iVar2 = unaff_ESI;
  if (uVar5 < uVar4) {
    uVar1 = uVar5;
    uVar5 = uVar4;
    iVar2 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar1 = uVar1 >> 0x10;
  iVar3 = (uVar5 >> 0x10) - uVar1;
  if (iVar3 != 0 && uVar1 <= uVar5 >> 0x10) {
    DAT_005f4ac4 = iVar3 * 2;
    DAT_005f4ac8 = *(int *)(&DAT_01c5faec + unaff_EBX * 4) + uVar1 * 2;
    uVar4 = *(uint *)(iVar2 + 0x18);
    _DAT_005f4ab4 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar4) *
               (longlong)*(int *)(&DAT_01c6b5d4 + iVar3 * 4)) >> 0x20);
    uVar5 = *(uint *)(iVar2 + 0x20);
    _DAT_005f4ab8 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar5) *
               (longlong)*(int *)(&DAT_01c6b5d4 + iVar3 * 4)) >> 0x20);
    uVar1 = *(uint *)(iVar2 + 0x28);
    _DAT_005f4abc =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x28) - uVar1) *
               (longlong)*(int *)(&DAT_01c6b5d4 + iVar3 * 4)) >> 0x20);
    uVar6 = 0;
    DAT_005f4a98 = uVar4;
    DAT_005f4a9c = uVar5;
    DAT_005f4aa4 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)(DAT_005f4ac8 + uVar6)) {
        iVar2 = _DAT_01c6ced4;
        if (_DAT_01c6ced4 == 0) {
          iVar2 = _DAT_01c6ced0;
        }
        if (*(char *)((uVar4 >> _DAT_00604df8 & (uint)_DAT_00604e38) +
                      (uVar5 >> _DAT_00604e18 & (uint)_DAT_00604e58) + iVar2) != '\0') {
          *(ushort *)(DAT_005f4ac8 + uVar6) = (ushort)uVar1;
        }
      }
      uVar6 = uVar6 + 2;
      if (DAT_005f4ac4 < uVar6) break;
      uVar4 = uVar4 + _DAT_005f4ab4;
      uVar5 = uVar5 + _DAT_005f4ab8;
      uVar1 = uVar1 + _DAT_005f4abc;
    }
  }
  return;
}
