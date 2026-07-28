// Name: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_004649dd
// Address: 004649dd
// Address Range: [[004649dd, 00464afb]]
// Convention: unknown
// Signature: void core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_ESI;
  int iVar5;
  int unaff_EDI;
  
  uVar3 = *(uint *)(unaff_ESI + 8);
  uVar4 = *(uint *)(unaff_EDI + 8);
  uVar1 = uVar3;
  iVar5 = unaff_ESI;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
    uVar4 = uVar3;
    iVar5 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar4 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar4 >> 0x10) {
    DAT_005b06e0 = *(int *)(&DAT_01bd2fa0 + unaff_EBX * 4) + uVar1 * 4;
    DAT_005b06e4 = iVar2 * 4;
    DAT_005b06e8 = *(int *)(&DAT_01bd4260 + unaff_EBX * 4) + uVar1 * 4;
    uVar3 = *(uint *)(iVar5 + 0x18);
    _DAT_005b06d4 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar3) *
               (longlong)*(int *)(&DAT_01c00c84 + DAT_005b06e4)) >> 0x20);
    uVar4 = *(uint *)(iVar5 + 0x20);
    _DAT_005b06d8 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar4) *
               (longlong)*(int *)(&DAT_01c00c84 + DAT_005b06e4)) >> 0x20);
    iVar5 = *(int *)(iVar5 + 0x28);
    _DAT_005b06dc =
         (int)((ulonglong)
               ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar5) *
               (longlong)*(int *)(&DAT_01c00c84 + DAT_005b06e4)) >> 0x20);
    uVar1 = 0;
    DAT_005b06b8 = uVar3;
    DAT_005b06bc = uVar4;
    DAT_005b06c4 = iVar5;
    while( true ) {
      if (*(int *)(DAT_005b06e8 + uVar1) <= iVar5) {
        *(uint *)(DAT_005b06e0 + uVar1) =
             *(uint *)
              (&DAT_01c00024 +
              (uint)*(byte *)((uVar3 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                              (uVar4 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + _DAT_01c02580) * 4);
      }
      uVar1 = uVar1 + 4;
      if (DAT_005b06e4 < uVar1) break;
      uVar3 = uVar3 + _DAT_005b06d4;
      uVar4 = uVar4 + _DAT_005b06d8;
      iVar5 = iVar5 + _DAT_005b06dc;
    }
  }
  return;
}
