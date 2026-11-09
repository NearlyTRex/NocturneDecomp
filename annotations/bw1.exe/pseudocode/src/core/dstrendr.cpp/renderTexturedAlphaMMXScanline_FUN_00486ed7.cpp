// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7
// Address: 00486ed7
// Address Range: [[00486ed7, 00486ff1]]
// Convention: unknown
// Signature: void core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7(void)

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
    DAT_00614544 = iVar3 * 2;
    DAT_00614548 = *(int *)(&DAT_01c4354c + unaff_EBX * 4) + uVar1 * 2;
    uVar4 = *(uint *)(iVar2 + 0x18);
    _DAT_00614534 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar4) *
               (longlong)*(int *)(&DAT_01c4f034 + iVar3 * 4)) >> 0x20);
    uVar5 = *(uint *)(iVar2 + 0x20);
    _DAT_00614538 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar5) *
               (longlong)*(int *)(&DAT_01c4f034 + iVar3 * 4)) >> 0x20);
    uVar1 = *(uint *)(iVar2 + 0x28);
    _DAT_0061453c =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x28) - uVar1) *
               (longlong)*(int *)(&DAT_01c4f034 + iVar3 * 4)) >> 0x20);
    uVar6 = 0;
    DAT_00614518 = uVar4;
    DAT_0061451c = uVar5;
    DAT_00614524 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)(DAT_00614548 + uVar6)) {
        iVar2 = _DAT_01c50934;
        if (_DAT_01c50934 == 0) {
          iVar2 = _DAT_01c50930;
        }
        if (*(char *)((uVar4 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                      (uVar5 >> _DAT_00623ed8 & (uint)_DAT_00623f18) + iVar2) != '\0') {
          *(ushort *)(DAT_00614548 + uVar6) = (ushort)uVar1;
        }
      }
      uVar6 = uVar6 + 2;
      if (DAT_00614544 < uVar6) break;
      uVar4 = uVar4 + _DAT_00614534;
      uVar5 = uVar5 + _DAT_00614538;
      uVar1 = uVar1 + _DAT_0061453c;
    }
  }
  return;
}
