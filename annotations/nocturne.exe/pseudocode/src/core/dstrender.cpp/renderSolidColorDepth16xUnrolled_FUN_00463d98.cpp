// Name: core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98
// Address: 00463d98
// Address Range: [[00463d98, 00463f76]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  SSoftwareEdge *pSVar10;
  uint uVar11;
  int *piVar12;
  
  iVar1 = g_ActiveRenderColor;
  uVar11 = (right_edge->base).x_current;
  uVar9 = (left_edge->base).x_current;
  uVar2 = uVar11;
  pSVar10 = right_edge;
  if (uVar9 < uVar11) {
    uVar2 = uVar9;
    uVar9 = uVar11;
    pSVar10 = left_edge;
    left_edge = right_edge;
  }
  uVar2 = uVar2 >> 0x10;
  iVar3 = (uVar9 >> 0x10) - uVar2;
  if (iVar3 != 0 && uVar2 <= uVar9 >> 0x10) {
    piVar6 = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar2 * 4);
    puVar7 = g_ZBufferScanlineArray[scanline_y] + uVar2;
    iVar5 = (int)((ulonglong)
                  ((longlong)((left_edge->base).depth_current - (pSVar10->base).depth_current) *
                  (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar11 = (pSVar10->base).depth_current;
    while (iVar4 = iVar3 + -4, puVar8 = puVar7, piVar12 = piVar6, 3 < iVar3) {
      if ((int)*puVar7 <= (int)(uVar11 >> 8)) {
        *puVar7 = uVar11 >> 8;
        *piVar6 = iVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar7[1] <= (int)uVar9) {
        puVar7[1] = uVar9;
        piVar6[1] = iVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[2] <= (int)uVar9) {
        puVar7[2] = uVar9;
        piVar6[2] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[3] <= (int)uVar9) {
        puVar7[3] = uVar9;
        piVar6[3] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar8 = puVar7 + 4;
      piVar12 = piVar6 + 4;
      iVar4 = iVar3 + -8;
      if (iVar3 + -4 < 4) break;
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *piVar12 = iVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar7[5] <= (int)uVar9) {
        puVar7[5] = uVar9;
        piVar6[5] = iVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[6] <= (int)uVar9) {
        puVar7[6] = uVar9;
        piVar6[6] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[7] <= (int)uVar9) {
        puVar7[7] = uVar9;
        piVar6[7] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar8 = puVar7 + 8;
      piVar12 = piVar6 + 8;
      iVar4 = iVar3 + -0xc;
      if (iVar3 + -8 < 4) break;
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *piVar12 = iVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar7[9] <= (int)uVar9) {
        puVar7[9] = uVar9;
        piVar6[9] = iVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[10] <= (int)uVar9) {
        puVar7[10] = uVar9;
        piVar6[10] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[0xb] <= (int)uVar9) {
        puVar7[0xb] = uVar9;
        piVar6[0xb] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar8 = puVar7 + 0xc;
      piVar12 = piVar6 + 0xc;
      iVar4 = iVar3 + -0x10;
      if (iVar3 + -0xc < 4) break;
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *piVar12 = iVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar7[0xd] <= (int)uVar9) {
        puVar7[0xd] = uVar9;
        piVar6[0xd] = iVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[0xe] <= (int)uVar9) {
        puVar7[0xe] = uVar9;
        piVar6[0xe] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[0xf] <= (int)uVar9) {
        puVar7[0xf] = uVar9;
        piVar6[0xf] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar7 = puVar7 + 0x10;
      piVar6 = piVar6 + 0x10;
      iVar3 = iVar4;
    }
    if (-4 < iVar4) {
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *piVar12 = iVar1;
      }
      if (iVar4 != -3 && 0 < iVar4 + 4) {
        uVar9 = uVar11 + iVar5 >> 8;
        if ((int)puVar8[1] <= (int)uVar9) {
          puVar8[1] = uVar9;
          piVar12[1] = iVar1;
        }
        if ((1 < iVar4 + 3) && (uVar11 = uVar11 + iVar5 + iVar5 >> 8, (int)puVar8[2] <= (int)uVar11)
           ) {
          puVar8[2] = uVar11;
          piVar12[2] = iVar1;
        }
      }
    }
  }
  return;
}
