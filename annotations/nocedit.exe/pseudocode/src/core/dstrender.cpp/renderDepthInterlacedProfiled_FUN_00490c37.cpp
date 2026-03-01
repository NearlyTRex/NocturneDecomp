// Name: core_dstrender.cpp_renderDepthInterlacedProfiled_FUN_00490c37
// Address: 00490c37
// Address Range: [[00490c37, 00490cb4]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00490c37(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00490c37(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  SSoftwareEdge *pSVar8;
  uint uVar9;
  
  if ((scanline_y & 1U) != 0) {
    return;
  }
  uVar9 = (left_edge->base).x_current;
  uVar3 = (right_edge->base).x_current;
  uVar2 = uVar9;
  pSVar8 = left_edge;
  if (uVar3 < uVar9) {
    uVar2 = uVar3;
    uVar3 = uVar9;
    pSVar8 = right_edge;
    right_edge = left_edge;
  }
  uVar2 = uVar2 >> 0x10;
  iVar4 = (uVar3 >> 0x10) - uVar2;
  if (iVar4 != 0 && uVar2 <= uVar3 >> 0x10) {
    puVar7 = g_ZBufferScanlineArray[scanline_y] + uVar2;
    uVar9 = (pSVar8->base).w_current;
    iVar5 = iVar4;
    do {
      if (((int)*puVar7 <= (int)(uVar9 >> 8)) &&
         (g_RenderPixelCounter = g_RenderPixelCounter + 1,
         (uint)g_RenderPixelBudget <= (uint)g_RenderPixelCounter)) {
        g_RenderAbortFlag = 1;
        return;
      }
      uVar9 = uVar9 + (int)((ulonglong)
                            ((longlong)((right_edge->base).w_current - (pSVar8->base).w_current) *
                            (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20) * 2;
      puVar7 = puVar7 + 2;
      iVar6 = iVar5 + -2;
      bVar1 = 1 < iVar5;
      iVar5 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
  return;
}
