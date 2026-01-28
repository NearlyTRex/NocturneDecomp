// Name: core_dstrender.cpp_renderDepthOnlyReversed_FUN_004906e9
// Address: 004906e9
// Address Range: [[004906e9, 0049072e]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_renderDepthOnlyReversed_FUN_004906e9 (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderDepthOnlyReversed_FUN_004906e9
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  SEdgeData *pSVar9;
  uint uVar10;
  
  uVar1 = left_edge->x_current;
  uVar10 = right_edge->x_current;
  uVar5 = uVar1;
  pSVar9 = left_edge;
  if (uVar10 < uVar1) {
    uVar5 = uVar10;
    uVar10 = uVar1;
    pSVar9 = right_edge;
    right_edge = left_edge;
  }
  uVar5 = uVar5 >> 0x10;
  iVar6 = (uVar10 >> 0x10) - uVar5;
  if (iVar6 != 0 && uVar5 <= uVar10 >> 0x10) {
    puVar8 = g_ZBufferScanlineArray[scanline_y] + uVar5;
    iVar2 = right_edge->z_current;
    iVar3 = pSVar9->z_current;
    uVar1 = g_ReciprocalLookupTable[iVar6 + 1];
    uVar10 = pSVar9->z_current;
    do {
      if ((int)*puVar8 <= (int)uVar10) {
        *puVar8 = uVar10;
      }
      uVar10 = uVar10 + (int)((ulonglong)((longlong)(iVar2 - iVar3) * (longlong)(int)uVar1) >> 0x20)
      ;
      puVar8 = puVar8 + 1;
      iVar7 = iVar6 + -1;
      bVar4 = 0 < iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar4);
  }
  return;
}
