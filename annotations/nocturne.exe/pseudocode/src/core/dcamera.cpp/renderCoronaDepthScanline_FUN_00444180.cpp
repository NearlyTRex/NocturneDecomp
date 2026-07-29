// Name: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00444180
// Address: 00444180
// Address Range: [[00444180, 00444294]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00444180(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00444180(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

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
  
  uVar4 = scanline_y - _DAT_01c00c5c;
  if (((_DAT_012b0660 != 1) || ((uVar4 & 1) == 0)) && ((_DAT_012b0660 != 2 || ((uVar4 & 3) == 0))))
  {
    iVar8 = (int)uVar4 >> (DAT_012b0660 & 0x1f);
    uVar7 = ((right->base).x_current >> 0x10) - _DAT_01c00c58 >> (DAT_012b0660 & 0x1f);
    uVar9 = ((left->base).x_current >> 0x10) - _DAT_01c00c58 >> (DAT_012b0660 & 0x1f);
    pSVar5 = left;
    uVar4 = uVar7;
    if ((int)uVar9 < (int)uVar7) {
      pSVar5 = right;
      uVar4 = uVar9;
      uVar9 = uVar7;
      right = left;
    }
    iVar2 = iVar8 * 4;
    if (uVar4 < *(uint *)(iVar2 + 0x146b290)) {
      *(uint *)(iVar2 + 0x146b290) = uVar4;
      *(int *)(iVar2 + 0x14b6a10) = (right->base).red_current;
    }
    iVar2 = iVar8 * 4;
    if (*(uint *)(iVar2 + 0x146b650) < uVar9) {
      *(uint *)(iVar2 + 0x146b650) = uVar9;
      *(int *)(iVar2 + 0x14b6dd0) = (pSVar5->base).red_current;
    }
    iVar2 = (right->base).depth_current;
    iVar3 = uVar9 - uVar4;
    iVar6 = (pSVar5->base).depth_current - iVar2;
    piVar1 = (int *)(uVar4 * 4 + iVar8 * 0x500 + 0x146ba10);
    for (; (int)uVar4 < (int)uVar9; uVar4 = uVar4 + 1) {
      iVar8 = iVar2 >> 8;
      iVar2 = iVar2 + iVar6 / (iVar3 + 1);
      *piVar1 = iVar8;
      piVar1 = piVar1 + 1;
    }
  }
  return;
}
