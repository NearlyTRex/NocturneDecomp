// Name: core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98
// Address: 00463d98
// Address Range: [[00463d98, 00463f76]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  SSoftwareEdge *pSVar10;
  uint uVar11;
  uint *puVar12;
  
  uVar1 = _DAT_01c00c70;
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
    puVar6 = (uint *)(*(int *)(&DAT_01bd2fa0 + scanline_y * 4) + uVar2 * 4);
    puVar8 = (uint *)(*(int *)(&DAT_01bd4260 + scanline_y * 4) + uVar2 * 4);
    iVar5 = (int)((ulonglong)
                  ((longlong)((left_edge->base).depth_current - (pSVar10->base).depth_current) *
                  (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar11 = (pSVar10->base).depth_current;
    while (iVar4 = iVar3 + -4, puVar7 = puVar8, puVar12 = puVar6, 3 < iVar3) {
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *puVar6 = uVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar8[1] <= (int)uVar9) {
        puVar8[1] = uVar9;
        puVar6[1] = uVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar8[2] <= (int)uVar9) {
        puVar8[2] = uVar9;
        puVar6[2] = uVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar8[3] <= (int)uVar9) {
        puVar8[3] = uVar9;
        puVar6[3] = uVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar7 = puVar8 + 4;
      puVar12 = puVar6 + 4;
      iVar4 = iVar3 + -8;
      if (iVar3 + -4 < 4) break;
      if ((int)*puVar7 <= (int)(uVar11 >> 8)) {
        *puVar7 = uVar11 >> 8;
        *puVar12 = uVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar8[5] <= (int)uVar9) {
        puVar8[5] = uVar9;
        puVar6[5] = uVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar8[6] <= (int)uVar9) {
        puVar8[6] = uVar9;
        puVar6[6] = uVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar8[7] <= (int)uVar9) {
        puVar8[7] = uVar9;
        puVar6[7] = uVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar7 = puVar8 + 8;
      puVar12 = puVar6 + 8;
      iVar4 = iVar3 + -0xc;
      if (iVar3 + -8 < 4) break;
      if ((int)*puVar7 <= (int)(uVar11 >> 8)) {
        *puVar7 = uVar11 >> 8;
        *puVar12 = uVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar8[9] <= (int)uVar9) {
        puVar8[9] = uVar9;
        puVar6[9] = uVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar8[10] <= (int)uVar9) {
        puVar8[10] = uVar9;
        puVar6[10] = uVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar8[0xb] <= (int)uVar9) {
        puVar8[0xb] = uVar9;
        puVar6[0xb] = uVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar7 = puVar8 + 0xc;
      puVar12 = puVar6 + 0xc;
      iVar4 = iVar3 + -0x10;
      if (iVar3 + -0xc < 4) break;
      if ((int)*puVar7 <= (int)(uVar11 >> 8)) {
        *puVar7 = uVar11 >> 8;
        *puVar12 = uVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar8[0xd] <= (int)uVar9) {
        puVar8[0xd] = uVar9;
        puVar6[0xd] = uVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar8[0xe] <= (int)uVar9) {
        puVar8[0xe] = uVar9;
        puVar6[0xe] = uVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar8[0xf] <= (int)uVar9) {
        puVar8[0xf] = uVar9;
        puVar6[0xf] = uVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar8 = puVar8 + 0x10;
      puVar6 = puVar6 + 0x10;
      iVar3 = iVar4;
    }
    if (-4 < iVar4) {
      if ((int)*puVar7 <= (int)(uVar11 >> 8)) {
        *puVar7 = uVar11 >> 8;
        *puVar12 = uVar1;
      }
      if (iVar4 != -3 && 0 < iVar4 + 4) {
        uVar9 = uVar11 + iVar5 >> 8;
        if ((int)puVar7[1] <= (int)uVar9) {
          puVar7[1] = uVar9;
          puVar12[1] = uVar1;
        }
        if ((1 < iVar4 + 3) && (uVar11 = uVar11 + iVar5 + iVar5 >> 8, (int)puVar7[2] <= (int)uVar11)
           ) {
          puVar7[2] = uVar11;
          puVar12[2] = uVar1;
        }
      }
    }
  }
  return;
}
