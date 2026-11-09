// Name: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450f20
// Address: 00450f20
// Address Range: [[00450f20, 00451034]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450f20(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450f20(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SSoftwareEdge *pSVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar4 = scanline_y - _DAT_01c4f00c;
  if (((_DAT_01323d00 != 1) || ((uVar4 & 1) == 0)) && ((_DAT_01323d00 != 2 || ((uVar4 & 3) == 0))))
  {
    iVar8 = (int)uVar4 >> (DAT_01323d00 & 0x1f);
    uVar7 = (*(int *)(right + 8) >> 0x10) - _DAT_01c4f008 >> (DAT_01323d00 & 0x1f);
    uVar9 = (*(int *)(left + 8) >> 0x10) - _DAT_01c4f008 >> (DAT_01323d00 & 0x1f);
    pSVar5 = left;
    uVar4 = uVar7;
    if ((int)uVar9 < (int)uVar7) {
      pSVar5 = right;
      uVar4 = uVar9;
      uVar9 = uVar7;
      right = left;
    }
    iVar2 = iVar8 * 4;
    if (uVar4 < *(uint *)(iVar2 + 0x14dea50)) {
      *(uint *)(iVar2 + 0x14dea50) = uVar4;
      *(uint *)(iVar2 + 0x152a1d0) = *(uint *)(right + 0x10);
    }
    iVar2 = iVar8 * 4;
    if (*(uint *)(iVar2 + 0x14dee10) < uVar9) {
      *(uint *)(iVar2 + 0x14dee10) = uVar9;
      *(uint *)(iVar2 + 0x152a590) = *(uint *)(pSVar5 + 0x10);
    }
    iVar2 = *(int *)(right + 0x28);
    iVar3 = uVar9 - uVar4;
    iVar6 = *(int *)(pSVar5 + 0x28) - iVar2;
    piVar1 = (int *)(uVar4 * 4 + iVar8 * 0x500 + 0x14df1d0);
    for (; (int)uVar4 < (int)uVar9; uVar4 = uVar4 + 1) {
      iVar8 = iVar2 >> 8;
      iVar2 = iVar2 + iVar6 / (iVar3 + 1);
      *piVar1 = iVar8;
      piVar1 = piVar1 + 1;
    }
  }
  return;
}
