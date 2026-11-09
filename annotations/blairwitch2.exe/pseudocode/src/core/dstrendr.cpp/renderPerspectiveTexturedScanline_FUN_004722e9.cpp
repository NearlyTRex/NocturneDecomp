// Name: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_004722e9
// Address: 004722e9
// Address Range: [[004722e9, 004723c2] [004723d0, 004723d5]]
// Convention: unknown
// Signature: uint core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9(void)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  int iVar6;
  int unaff_EDI;
  uint uVar7;
  
  uVar4 = *(uint *)(unaff_ESI + 8);
  uVar5 = *(uint *)(unaff_EDI + 8);
  uVar2 = uVar4;
  iVar6 = unaff_ESI;
  if (uVar5 < uVar4) {
    uVar2 = uVar5;
    uVar5 = uVar4;
    iVar6 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar2 = uVar2 >> 0x10;
  iVar3 = (uVar5 >> 0x10) - uVar2;
  if (iVar3 != 0 && uVar2 <= uVar5 >> 0x10) {
    DAT_0060d260 = *(int *)(&DAT_01c2a38c + unaff_EBX * 4) + uVar2 * 4;
    DAT_0060d264 = iVar3 * 4;
    uVar4 = *(uint *)(iVar6 + 0x18);
    _DAT_0060d254 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar4) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0060d264)) >> 0x20);
    uVar5 = *(uint *)(iVar6 + 0x20);
    lVar1 = (longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar5) *
            (longlong)*(int *)(&DAT_01c35e74 + DAT_0060d264);
    _DAT_0060d258 = (int)((ulonglong)lVar1 >> 0x20);
    uVar2 = (uint)lVar1;
    uVar7 = 0;
    DAT_0060d238 = uVar4;
    DAT_0060d23c = uVar5;
    while( true ) {
      *(uint *)(DAT_0060d260 + uVar7) =
           *(uint *)
            (((uVar4 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
             (uVar5 >> _DAT_0061c888 & (uint)_DAT_0061c8c8)) * 4 + _DAT_01c37770);
      uVar7 = uVar7 + 4;
      if (DAT_0060d264 <= uVar7) break;
      uVar4 = uVar4 + _DAT_0060d254;
      uVar5 = uVar5 + _DAT_0060d258;
    }
  }
  return uVar2;
}
