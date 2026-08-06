// Name: core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00463c42
// Address: 00463c42
// Address Range: [[00463c42, 00463d97]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00463c42(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00463c42(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  SSoftwareEdge *pSVar8;
  uint uVar9;
  
  uVar9 = (right_edge->base).x_current;
  uVar2 = (left_edge->base).x_current;
  uVar1 = uVar9;
  pSVar8 = right_edge;
  if (uVar2 < uVar9) {
    uVar1 = uVar2;
    uVar2 = uVar9;
    pSVar8 = left_edge;
    left_edge = right_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar3 = (uVar2 >> 0x10) - uVar1;
  if (iVar3 != 0 && uVar1 <= uVar2 >> 0x10) {
    puVar7 = (uint *)(*(int *)(&DAT_01bd4260 + scanline_y * 4) + uVar1 * 4);
    iVar5 = (int)((ulonglong)
                  ((longlong)((left_edge->base).depth_current - (pSVar8->base).depth_current) *
                  (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar9 = (pSVar8->base).depth_current;
    while (iVar4 = iVar3 + -4, puVar6 = puVar7, 3 < iVar3) {
      *puVar7 = uVar9 >> 8;
      puVar7[1] = uVar9 + iVar5 >> 8;
      uVar9 = uVar9 + iVar5 + iVar5;
      puVar7[2] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar7[3] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar6 = puVar7 + 4;
      iVar4 = iVar3 + -8;
      if (iVar3 + -4 < 4) break;
      *puVar6 = uVar9 >> 8;
      puVar7[5] = uVar9 + iVar5 >> 8;
      uVar9 = uVar9 + iVar5 + iVar5;
      puVar7[6] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar7[7] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar6 = puVar7 + 8;
      iVar4 = iVar3 + -0xc;
      if (iVar3 + -8 < 4) break;
      *puVar6 = uVar9 >> 8;
      puVar7[9] = uVar9 + iVar5 >> 8;
      uVar9 = uVar9 + iVar5 + iVar5;
      puVar7[10] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar7[0xb] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar6 = puVar7 + 0xc;
      iVar4 = iVar3 + -0x10;
      if (iVar3 + -0xc < 4) break;
      *puVar6 = uVar9 >> 8;
      puVar7[0xd] = uVar9 + iVar5 >> 8;
      uVar9 = uVar9 + iVar5 + iVar5;
      puVar7[0xe] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar7[0xf] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar7 = puVar7 + 0x10;
      iVar3 = iVar4;
    }
    if (-4 < iVar4) {
      *puVar6 = uVar9 >> 8;
      if (iVar4 != -3 && 0 < iVar4 + 4) {
        puVar6[1] = uVar9 + iVar5 >> 8;
        if (1 < iVar4 + 3) {
          puVar6[2] = uVar9 + iVar5 + iVar5 >> 8;
        }
      }
    }
  }
  return;
}
