// Name: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_00463b27
// Address: 00463b27
// Address Range: [[00463b27, 00463c41]]
// Convention: unknown
// Signature: void core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(void)

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
    DAT_005b06e4 = iVar3 * 2;
    DAT_005b06e8 = *(int *)(&DAT_01bd2fa0 + unaff_EBX * 4) + uVar1 * 2;
    uVar4 = *(uint *)(iVar2 + 0x18);
    _DAT_005b06d4 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar4) *
               (longlong)*(int *)(&DAT_01c00c84 + iVar3 * 4)) >> 0x20);
    uVar5 = *(uint *)(iVar2 + 0x20);
    _DAT_005b06d8 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar5) *
               (longlong)*(int *)(&DAT_01c00c84 + iVar3 * 4)) >> 0x20);
    uVar1 = *(uint *)(iVar2 + 0x28);
    _DAT_005b06dc =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x28) - uVar1) *
               (longlong)*(int *)(&DAT_01c00c84 + iVar3 * 4)) >> 0x20);
    uVar6 = 0;
    DAT_005b06b8 = uVar4;
    DAT_005b06bc = uVar5;
    DAT_005b06c4 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)(DAT_005b06e8 + uVar6)) {
        iVar2 = _DAT_01c02584;
        if (_DAT_01c02584 == 0) {
          iVar2 = _DAT_01c02580;
        }
        if (*(char *)((uVar4 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                      (uVar5 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + iVar2) != '\0') {
          *(ushort *)(DAT_005b06e8 + uVar6) = (ushort)uVar1;
        }
      }
      uVar6 = uVar6 + 2;
      if (DAT_005b06e4 < uVar6) break;
      uVar4 = uVar4 + _DAT_005b06d4;
      uVar5 = uVar5 + _DAT_005b06d8;
      uVar1 = uVar1 + _DAT_005b06dc;
    }
  }
  return;
}
