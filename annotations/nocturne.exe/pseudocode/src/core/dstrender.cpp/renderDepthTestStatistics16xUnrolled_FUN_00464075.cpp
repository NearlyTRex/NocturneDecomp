// Name: core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00464075
// Address: 00464075
// Address Range: [[00464075, 004641ff]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00464075(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00464075(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  SSoftwareEdge *pSVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = (right_edge->base).x_current;
  uVar8 = (left_edge->base).x_current;
  uVar1 = uVar9;
  pSVar7 = right_edge;
  if (uVar8 < uVar9) {
    uVar1 = uVar8;
    uVar8 = uVar9;
    pSVar7 = left_edge;
    left_edge = right_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar8 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar8 >> 0x10) {
    puVar6 = (uint *)(*(int *)(&DAT_01bd4260 + scanline_y * 4) + uVar1 * 4);
    iVar4 = (int)((ulonglong)
                  ((longlong)((left_edge->base).depth_current - (pSVar7->base).depth_current) *
                  (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar9 = (pSVar7->base).depth_current;
    while (iVar3 = iVar2 + -4, puVar5 = puVar6, 3 < iVar2) {
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      _DAT_01b4d764 =
           ((((_DAT_01b4d764 - (uint)(uVar9 >> 8 < *puVar6)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar6[1])) - (uint)(uVar8 >> 8 < puVar6[2])) + 4) -
           (uint)(uVar1 >> 8 < puVar6[3]);
      uVar9 = uVar1 + iVar4;
      puVar5 = puVar6 + 4;
      iVar3 = iVar2 + -8;
      if (iVar2 + -4 < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      _DAT_01b4d764 =
           ((((_DAT_01b4d764 - (uint)(uVar9 >> 8 < *puVar5)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar6[5])) - (uint)(uVar8 >> 8 < puVar6[6])) + 4) -
           (uint)(uVar1 >> 8 < puVar6[7]);
      uVar9 = uVar1 + iVar4;
      puVar5 = puVar6 + 8;
      iVar3 = iVar2 + -0xc;
      if (iVar2 + -8 < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      _DAT_01b4d764 =
           ((((_DAT_01b4d764 - (uint)(uVar9 >> 8 < *puVar5)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar6[9])) - (uint)(uVar8 >> 8 < puVar6[10])) + 4) -
           (uint)(uVar1 >> 8 < puVar6[0xb]);
      uVar9 = uVar1 + iVar4;
      puVar5 = puVar6 + 0xc;
      iVar3 = iVar2 + -0x10;
      if (iVar2 + -0xc < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      _DAT_01b4d764 =
           ((((_DAT_01b4d764 - (uint)(uVar9 >> 8 < *puVar5)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar6[0xd])) - (uint)(uVar8 >> 8 < puVar6[0xe])) + 4) -
           (uint)(uVar1 >> 8 < puVar6[0xf]);
      uVar9 = uVar1 + iVar4;
      puVar6 = puVar6 + 0x10;
      iVar2 = iVar3;
    }
    if (-4 < iVar3) {
      _DAT_01b4d764 = (_DAT_01b4d764 + 1) - (uint)(uVar9 >> 8 < *puVar5);
      if (iVar3 != -3 && 0 < iVar3 + 4) {
        _DAT_01b4d764 = (_DAT_01b4d764 + 1) - (uint)(uVar9 + iVar4 >> 8 < puVar5[1]);
        if (1 < iVar3 + 3) {
          _DAT_01b4d764 = (_DAT_01b4d764 + 1) - (uint)(uVar9 + iVar4 + iVar4 >> 8 < puVar5[2]);
        }
      }
    }
  }
  return;
}
