// Name: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210
// Address: 00483210
// Address Range: [[00483210, 00483321]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210(SEdgeData * vertex_a, SEdgeData * vertex_b)

#include "nocturne.h"

void __cdecl
core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210(SEdgeData *vertex_a,SEdgeData *vertex_b)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SEdgeData *pSVar7;
  
  iVar2 = g_RenderTriangleEdgeCount;
  iVar6 = vertex_b->light_delta >> 0x10;
  iVar3 = vertex_a->light_delta >> 0x10;
  if (iVar3 != iVar6) {
    iVar4 = iVar3;
    pSVar7 = vertex_a;
    if (vertex_b->light_delta < vertex_a->light_delta) {
      iVar4 = iVar6;
      iVar6 = iVar3;
      pSVar7 = vertex_b;
      vertex_b = vertex_a;
    }
    g_EdgeInterpolationArray[g_RenderTriangleEdgeCount].y_start = iVar4;
    iVar3 = g_RenderTriangleMinScanlineY;
    g_EdgeInterpolationArray[iVar2].y_end = iVar6;
    if (iVar4 < iVar3) {
      g_RenderTriangleMinScanlineY = iVar4;
    }
    if (g_RenderTriangleMaxScanlineY < iVar6) {
      g_RenderTriangleMaxScanlineY = iVar6;
    }
    uVar5 = vertex_b->light_delta - pSVar7->light_delta;
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    lVar1 = (longlong)iVar6 * (longlong)(vertex_b->light_current - pSVar7->light_current);
    g_EdgeInterpolationArray[iVar2].x_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar6 * (longlong)((vertex_b->x_current - pSVar7->x_current) * 0x100);
    g_EdgeInterpolationArray[iVar2].z_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar3 = g_RasterizerDepthBias;
    uVar5 = (uint)(ushort)((ushort)pSVar7->light_delta ^ 0xffff);
    lVar1 = (longlong)(int)uVar5 * (longlong)g_EdgeInterpolationArray[iVar2].x_delta;
    iVar6 = g_EdgeInterpolationArray[iVar2].z_delta;
    g_EdgeInterpolationArray[iVar2].x_current =
         pSVar7->light_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar5 * (longlong)iVar6;
    g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
    g_EdgeInterpolationArray[iVar2].z_current =
         (pSVar7->x_current * 0x100 - iVar3) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
