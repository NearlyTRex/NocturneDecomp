// Name: core_dstrender.cpp_renderDepth16BitConditional_FUN_0049077d
// Address: 0049077d
// Address Range: [[0049077d, 004907d0] [004907e0, 004907e6]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderDepth16BitConditional_FUN_0049077d(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderDepth16BitConditional_FUN_0049077d
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  SEdgeData *pSVar10;
  int iVar11;
  
  uVar1 = left_edge->x_current;
  uVar6 = right_edge->x_current;
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
    psVar9 = (short *)((int)g_ScreenBufferArray[scanline_y] + uVar5 * 2);
    iVar2 = right_edge->z_current;
    iVar3 = pSVar10->z_current;
    uVar1 = g_ReciprocalLookupTable[iVar7 + 1];
    iVar11 = pSVar10->z_current;
    do {
      if (*psVar9 != 0) {
        if ((uint)(iVar11 >> 8) < 0x10000) {
          *psVar9 = (short)((uint)iVar11 >> 8);
        }
        else {
          *psVar9 = -1;
        }
      }
      iVar11 = iVar11 + (int)((ulonglong)((longlong)(iVar2 - iVar3) * (longlong)(int)uVar1) >> 0x20)
      ;
      psVar9 = psVar9 + 1;
      iVar8 = iVar7 + -1;
      bVar4 = 0 < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar4);
  }
  return;
}
