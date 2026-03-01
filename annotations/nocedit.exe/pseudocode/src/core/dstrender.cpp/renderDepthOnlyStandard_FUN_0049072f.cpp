// Name: core_dstrender.cpp_renderDepthOnlyStandard_FUN_0049072f
// Address: 0049072f
// Address Range: [[0049072f, 0049077c]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  SSoftwareEdge *pSVar10;
  int iVar11;
  
  uVar1 = (left_edge->base).x_current;
  uVar6 = (right_edge->base).x_current;
  uVar5 = uVar1;
  pSVar10 = left_edge;
  if (uVar6 < uVar1) {
    uVar5 = uVar6;
    uVar6 = uVar1;
    pSVar10 = right_edge;
    right_edge = left_edge;
  }
  uVar5 = uVar5 >> 0x10;
  iVar7 = (uVar6 >> 0x10) - uVar5;
  if (iVar7 != 0 && uVar5 <= uVar6 >> 0x10) {
    puVar9 = (ushort *)((int)g_ScreenBufferArray[scanline_y] + uVar5 * 2);
    iVar2 = (right_edge->base).w_current;
    iVar3 = (pSVar10->base).w_current;
    uVar1 = g_ReciprocalLookupTable[iVar7 + 1];
    iVar11 = (pSVar10->base).w_current;
    do {
      if ((uint)(iVar11 >> 8) < (uint)*puVar9) {
        *puVar9 = (ushort)((uint)iVar11 >> 8);
      }
      iVar11 = iVar11 + (int)((ulonglong)((longlong)(iVar2 - iVar3) * (longlong)(int)uVar1) >> 0x20)
      ;
      puVar9 = puVar9 + 1;
      iVar8 = iVar7 + -1;
      bVar4 = 0 < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar4);
  }
  return;
}
