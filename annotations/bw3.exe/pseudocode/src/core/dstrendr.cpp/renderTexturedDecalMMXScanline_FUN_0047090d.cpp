// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_0047090d
// Address: 0047090d
// Address Range: [[0047090d, 00470a2b]]
// Convention: unknown
// Signature: void core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d(void)

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
    DAT_005f4ac0 = *(int *)(&DAT_01c5faec + unaff_EBX * 4) + uVar1 * 4;
    DAT_005f4ac4 = iVar2 * 4;
    DAT_005f4ac8 = *(int *)(&DAT_01c60dac + unaff_EBX * 4) + uVar1 * 4;
    uVar3 = *(uint *)(iVar5 + 0x18);
    _DAT_005f4ab4 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar3) *
               (longlong)*(int *)(&DAT_01c6b5d4 + DAT_005f4ac4)) >> 0x20);
    uVar4 = *(uint *)(iVar5 + 0x20);
    _DAT_005f4ab8 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar4) *
               (longlong)*(int *)(&DAT_01c6b5d4 + DAT_005f4ac4)) >> 0x20);
    iVar5 = *(int *)(iVar5 + 0x28);
    _DAT_005f4abc =
         (int)((ulonglong)
               ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar5) *
               (longlong)*(int *)(&DAT_01c6b5d4 + DAT_005f4ac4)) >> 0x20);
    uVar1 = 0;
    DAT_005f4a98 = uVar3;
    DAT_005f4a9c = uVar4;
    DAT_005f4aa4 = iVar5;
    while( true ) {
      if (*(int *)(DAT_005f4ac8 + uVar1) <= iVar5) {
        *(uint *)(DAT_005f4ac0 + uVar1) =
             *(uint *)
              (&DAT_01c6a974 +
              (uint)*(byte *)((uVar3 >> _DAT_00604df8 & (uint)_DAT_00604e38) +
                              (uVar4 >> _DAT_00604e18 & (uint)_DAT_00604e58) + _DAT_01c6ced0) * 4);
      }
      uVar1 = uVar1 + 4;
      if (DAT_005f4ac4 < uVar1) break;
      uVar3 = uVar3 + _DAT_005f4ab4;
      uVar4 = uVar4 + _DAT_005f4ab8;
      iVar5 = iVar5 + _DAT_005f4abc;
    }
  }
  return;
}
