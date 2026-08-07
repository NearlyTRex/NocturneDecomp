// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_00444440
// Address: 00444440
// Address Range: [[00444440, 004445fc]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_00444440(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_00444440(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  byte bVar1;
  byte uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *puVar6;
  uint uVar7;
  SSoftwareEdge *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_18;
  uint *local_14;
  
  uVar7 = scanline_y - g_ClipTop;
  if (((_DAT_012b0660 != 1) || ((uVar7 & 1) == 0)) && ((_DAT_012b0660 != 2 || ((uVar7 & 3) == 0))))
  {
    iVar10 = ((right->base).x_current >> 0x10) - g_ClipLeft;
    local_18 = ((left->base).x_current >> 0x10) - g_ClipLeft;
    pSVar8 = left;
    iVar11 = iVar10;
    if (local_18 < iVar10) {
      pSVar8 = right;
      right = left;
      iVar11 = local_18;
      local_18 = iVar10;
    }
    iVar10 = (right->base).depth_current;
    local_14 = g_ZBufferScanlineArray[uVar7] + iVar11;
    local_18 = local_18 >> (DAT_012b0660 & 0x1f);
    iVar11 = iVar11 >> (DAT_012b0660 & 0x1f);
    iVar3 = ((pSVar8->base).depth_current - iVar10) / ((local_18 - iVar11) + 1);
    uVar2 = (byte)
            ((_DAT_014b7190 + (_DAT_014b7190 >> 0x1f) * -0x100) -
             (uint)((_DAT_014b7190 >> 0x1f) << 7 < 0) >> 8);
    iVar4 = ((int)uVar7 >> (DAT_012b0660 & 0x1f)) * 0x140;
    if (_DAT_0140d780 < 2) {
      puVar6 = &DAT_012ceb78 + iVar11 + iVar4;
      for (; iVar11 < local_18; iVar11 = iVar11 + 1) {
        if (*local_14 < (uint)(iVar10 >> 8)) {
          *puVar6 = uVar2;
        }
        iVar10 = iVar10 + iVar3;
        puVar6 = puVar6 + 1;
        local_14 = local_14 + (1 << (DAT_012b0660 & 0x1f));
      }
    }
    else {
      bVar1 = DAT_012b0660 & 0x1f;
      for (; iVar11 < local_18; iVar11 = iVar11 + 1) {
        if ((*local_14 < (uint)(iVar10 >> 8)) && (iVar9 = 0, 0 < _DAT_0140d780)) {
          iVar5 = iVar4 + iVar11;
          do {
            iVar9 = iVar9 + 1;
            *(byte *)(iVar5 + 0x12e1778) = uVar2;
            iVar5 = iVar5 + 0x12c00;
          } while (iVar9 < _DAT_0140d780);
        }
        local_14 = local_14 + (1 << bVar1);
        iVar10 = iVar10 + iVar3;
      }
    }
  }
  return;
}
