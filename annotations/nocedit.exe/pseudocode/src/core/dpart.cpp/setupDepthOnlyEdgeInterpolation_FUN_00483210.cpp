// Name: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210
// Address: 00483210
// Address Range: [[00483210, 00483321]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

#include "nocturne.h"

void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SSoftwareEdge *pSVar7;
  
  iVar2 = g_RenderTriangleEdgeCount;
  iVar6 = (vertex_b->base).z_gradient >> 0x10;
  iVar3 = (vertex_a->base).z_gradient >> 0x10;
  if (iVar3 != iVar6) {
    iVar4 = iVar3;
    pSVar7 = vertex_a;
    if ((vertex_b->base).z_gradient < (vertex_a->base).z_gradient) {
      iVar4 = iVar6;
      iVar6 = iVar3;
      pSVar7 = vertex_b;
      vertex_b = vertex_a;
    }
    g_EdgeInterpolationArray[g_RenderTriangleEdgeCount].base.y_min = iVar4;
    iVar3 = g_RenderTriangleMinScanlineY;
    g_EdgeInterpolationArray[iVar2].base.y_max = iVar6;
    if (iVar4 < iVar3) {
      g_RenderTriangleMinScanlineY = iVar4;
    }
    if (g_RenderTriangleMaxScanlineY < iVar6) {
      g_RenderTriangleMaxScanlineY = iVar6;
    }
    uVar5 = (vertex_b->base).z_gradient - (pSVar7->base).z_gradient;
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    lVar1 = (longlong)iVar6 * (longlong)((vertex_b->base).z_current - (pSVar7->base).z_current);
    g_EdgeInterpolationArray[iVar2].base.x_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar6 *
            (longlong)(((vertex_b->base).x_current - (pSVar7->base).x_current) * 0x100);
    g_EdgeInterpolationArray[iVar2].base.w_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar3 = g_RasterizerDepthBias;
    uVar5 = (uint)(ushort)((ushort)(pSVar7->base).z_gradient ^ 0xffff);
    lVar1 = (longlong)(int)uVar5 * (longlong)g_EdgeInterpolationArray[iVar2].base.x_gradient;
    iVar6 = g_EdgeInterpolationArray[iVar2].base.w_gradient;
    g_EdgeInterpolationArray[iVar2].base.x_current =
         (pSVar7->base).z_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar5 * (longlong)iVar6;
    g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
    g_EdgeInterpolationArray[iVar2].base.w_current =
         ((pSVar7->base).x_current * 0x100 - iVar3) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
