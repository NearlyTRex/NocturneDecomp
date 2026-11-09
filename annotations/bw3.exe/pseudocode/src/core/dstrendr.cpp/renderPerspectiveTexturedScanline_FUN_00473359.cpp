// Name: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_00473359
// Address: 00473359
// Address Range: [[00473359, 00473432] [00473440, 00473445]]
// Convention: unknown
// Signature: uint core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359(void)

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
    DAT_005f4ac0 = *(int *)(&DAT_01c5faec + unaff_EBX * 4) + uVar2 * 4;
    DAT_005f4ac4 = iVar3 * 4;
    uVar4 = *(uint *)(iVar6 + 0x18);
    _DAT_005f4ab4 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar4) *
               (longlong)*(int *)(&DAT_01c6b5d4 + DAT_005f4ac4)) >> 0x20);
    uVar5 = *(uint *)(iVar6 + 0x20);
    lVar1 = (longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar5) *
            (longlong)*(int *)(&DAT_01c6b5d4 + DAT_005f4ac4);
    _DAT_005f4ab8 = (int)((ulonglong)lVar1 >> 0x20);
    uVar2 = (uint)lVar1;
    uVar7 = 0;
    DAT_005f4a98 = uVar4;
    DAT_005f4a9c = uVar5;
    while( true ) {
      *(uint *)(DAT_005f4ac0 + uVar7) =
           *(uint *)
            (((uVar4 >> _DAT_00604df8 & (uint)_DAT_00604e38) +
             (uVar5 >> _DAT_00604e18 & (uint)_DAT_00604e58)) * 4 + _DAT_01c6ced0);
      uVar7 = uVar7 + 4;
      if (DAT_005f4ac4 <= uVar7) break;
      uVar4 = uVar4 + _DAT_005f4ab4;
      uVar5 = uVar5 + _DAT_005f4ab8;
    }
  }
  return uVar2;
}
