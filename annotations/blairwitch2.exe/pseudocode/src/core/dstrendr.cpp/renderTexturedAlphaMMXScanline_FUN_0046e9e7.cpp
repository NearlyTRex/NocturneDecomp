// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7
// Address: 0046e9e7
// Address Range: [[0046e9e7, 0046eb01]]
// Convention: unknown
// Signature: void core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(void)

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
    DAT_0060d264 = iVar3 * 2;
    DAT_0060d268 = *(int *)(&DAT_01c2a38c + unaff_EBX * 4) + uVar1 * 2;
    uVar4 = *(uint *)(iVar2 + 0x18);
    _DAT_0060d254 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar4) *
               (longlong)*(int *)(&DAT_01c35e74 + iVar3 * 4)) >> 0x20);
    uVar5 = *(uint *)(iVar2 + 0x20);
    _DAT_0060d258 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar5) *
               (longlong)*(int *)(&DAT_01c35e74 + iVar3 * 4)) >> 0x20);
    uVar1 = *(uint *)(iVar2 + 0x28);
    _DAT_0060d25c =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x28) - uVar1) *
               (longlong)*(int *)(&DAT_01c35e74 + iVar3 * 4)) >> 0x20);
    uVar6 = 0;
    DAT_0060d238 = uVar4;
    DAT_0060d23c = uVar5;
    DAT_0060d244 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)(DAT_0060d268 + uVar6)) {
        iVar2 = _DAT_01c37774;
        if (_DAT_01c37774 == 0) {
          iVar2 = _DAT_01c37770;
        }
        if (*(char *)((uVar4 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                      (uVar5 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) + iVar2) != '\0') {
          *(ushort *)(DAT_0060d268 + uVar6) = (ushort)uVar1;
        }
      }
      uVar6 = uVar6 + 2;
      if (DAT_0060d264 < uVar6) break;
      uVar4 = uVar4 + _DAT_0060d254;
      uVar5 = uVar5 + _DAT_0060d258;
      uVar1 = uVar1 + _DAT_0060d25c;
    }
  }
  return;
}
