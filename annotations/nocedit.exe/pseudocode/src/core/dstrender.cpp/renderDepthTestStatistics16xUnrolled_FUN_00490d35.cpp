// Name: core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35
// Address: 00490d35
// Address Range: [[00490d35, 00490ebf]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  SEdgeData *pSVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = left_edge->x_current;
  uVar8 = right_edge->x_current;
  uVar1 = uVar9;
  pSVar7 = left_edge;
  if (uVar8 < uVar9) {
    uVar1 = uVar8;
    uVar8 = uVar9;
    pSVar7 = right_edge;
    right_edge = left_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar8 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar8 >> 0x10) {
    puVar5 = g_ZBufferScanlineArray[scanline_y] + uVar1;
    iVar4 = (int)((ulonglong)
                  ((longlong)(right_edge->z_current - pSVar7->z_current) *
                  (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar9 = pSVar7->z_current;
    while (iVar3 = iVar2 + -4, puVar6 = puVar5, 3 < iVar2) {
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      g_RenderPixelCounter =
           ((((g_RenderPixelCounter - (uint)(uVar9 >> 8 < *puVar5)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar5[1])) - (uint)(uVar8 >> 8 < puVar5[2])) + 4) -
           (uint)(uVar1 >> 8 < puVar5[3]);
      uVar9 = uVar1 + iVar4;
      puVar6 = puVar5 + 4;
      iVar3 = iVar2 + -8;
      if (iVar2 + -4 < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      g_RenderPixelCounter =
           ((((g_RenderPixelCounter - (uint)(uVar9 >> 8 < *puVar6)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar5[5])) - (uint)(uVar8 >> 8 < puVar5[6])) + 4) -
           (uint)(uVar1 >> 8 < puVar5[7]);
      uVar9 = uVar1 + iVar4;
      puVar6 = puVar5 + 8;
      iVar3 = iVar2 + -0xc;
      if (iVar2 + -8 < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      g_RenderPixelCounter =
           ((((g_RenderPixelCounter - (uint)(uVar9 >> 8 < *puVar6)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar5[9])) - (uint)(uVar8 >> 8 < puVar5[10])) + 4) -
           (uint)(uVar1 >> 8 < puVar5[0xb]);
      uVar9 = uVar1 + iVar4;
      puVar6 = puVar5 + 0xc;
      iVar3 = iVar2 + -0x10;
      if (iVar2 + -0xc < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      g_RenderPixelCounter =
           ((((g_RenderPixelCounter - (uint)(uVar9 >> 8 < *puVar6)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar5[0xd])) - (uint)(uVar8 >> 8 < puVar5[0xe])) + 4) -
           (uint)(uVar1 >> 8 < puVar5[0xf]);
      uVar9 = uVar1 + iVar4;
      puVar5 = puVar5 + 0x10;
      iVar2 = iVar3;
    }
    if (-4 < iVar3) {
      g_RenderPixelCounter = (g_RenderPixelCounter + 1) - (uint)(uVar9 >> 8 < *puVar6);
      if (iVar3 != -3 && 0 < iVar3 + 4) {
        g_RenderPixelCounter = (g_RenderPixelCounter + 1) - (uint)(uVar9 + iVar4 >> 8 < puVar6[1]);
        if (1 < iVar3 + 3) {
          g_RenderPixelCounter =
               (g_RenderPixelCounter + 1) - (uint)(uVar9 + iVar4 + iVar4 >> 8 < puVar6[2]);
        }
      }
    }
  }
  return;
}
