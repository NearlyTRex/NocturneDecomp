// Name: core_dcamera.cpp_renderVolumetricLightScanline_FUN_004442a0
// Address: 004442a0
// Address Range: [[004442a0, 0044443c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_004442a0(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_004442a0(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  SSoftwareEdge *pSVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  pSVar5 = left;
  uVar9 = scanline_y - _DAT_01c00c5c;
  if (((_DAT_012b0660 != 1) || ((uVar9 & 1) == 0)) && ((_DAT_012b0660 != 2 || ((uVar9 & 3) == 0))))
  {
    iVar17 = (int)uVar9 >> (DAT_012b0660 & 0x1f);
    iVar15 = ((right->base).x_current >> 0x10) - _DAT_01c00c58 >> (DAT_012b0660 & 0x1f);
    iVar18 = ((left->base).x_current >> 0x10) - _DAT_01c00c58 >> (DAT_012b0660 & 0x1f);
    iVar16 = iVar15;
    if (iVar18 < iVar15) {
      left = right;
      iVar16 = iVar18;
      iVar18 = iVar15;
      right = pSVar5;
    }
    iVar15 = (right->base).depth_current;
    iVar10 = iVar15 >> 0x1f;
    iVar6 = (int)((iVar15 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
    iVar15 = (left->base).depth_current;
    iVar11 = (left->base).depth_current >> 0x1f;
    iVar10 = (right->base).depth_current;
    iVar12 = iVar10 >> 0x1f;
    iVar8 = (iVar18 - iVar16) + 1;
    iVar14 = (right->base).red_current;
    iVar13 = (left->base).red_current - iVar14;
    bVar4 = DAT_012b0660 & 0x1f;
    iVar2 = *(int *)(&DAT_01bd4260 + (iVar17 << (DAT_012b0660 & 0x1f)) * 4);
    pbVar7 = &DAT_012ceb78 + iVar16 + iVar17 * 0x140;
    iVar18 = (iVar18 - iVar16) * 4;
    do {
      if (*(int *)(iVar18 + iVar2 + (iVar16 << bVar4) * 4) < iVar6) {
        piVar1 = (int *)(_DAT_012b0230 + 0x12b0234);
        _DAT_012b0230 = _DAT_012b0230 + 4 & 0x3fc;
        uVar9 = (uint)*pbVar7 * 0x100 + iVar14 + *piVar1 >> 8;
        if (0xfe < uVar9) {
          uVar9 = 0xff;
        }
        *pbVar7 = (byte)uVar9;
      }
      iVar14 = iVar14 + iVar13 / iVar8;
      iVar6 = iVar6 + (((int)((iVar15 + iVar11 * -0x100) - (uint)(iVar11 << 7 < 0)) >> 8) -
                      ((int)((iVar10 + iVar12 * -0x100) - (uint)(iVar12 << 7 < 0)) >> 8)) / iVar8;
      pbVar7 = pbVar7 + 1;
      iVar17 = iVar18 + -4;
      bVar3 = 3 < iVar18;
      iVar18 = iVar17;
    } while (iVar17 != 0 && bVar3);
    _DAT_012b022c = 1;
  }
  return;
}
