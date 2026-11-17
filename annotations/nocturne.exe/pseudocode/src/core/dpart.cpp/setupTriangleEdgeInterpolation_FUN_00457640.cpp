// Name: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00457640
// Address: 00457640
// Address Range: [[00457640, 00457893]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00457640(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

#include "nocturne.h"

void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00457640(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SSoftwareEdge *pSVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = g_RenderTriangleEdgeCount;
  iVar3 = (vertex_b->base).red_gradient >> 0x10;
  iVar7 = (vertex_a->base).red_gradient >> 0x10;
  if (iVar7 != iVar3) {
    iVar4 = iVar3;
    pSVar6 = vertex_b;
    if ((vertex_b->base).red_gradient < (vertex_a->base).red_gradient) {
      iVar4 = iVar7;
      pSVar6 = vertex_a;
      vertex_a = vertex_b;
      iVar7 = iVar3;
    }
    g_EdgeInterpolationArray[g_RenderTriangleEdgeCount].base.y_min = iVar7;
    iVar3 = g_RenderTriangleMinScanlineY;
    g_EdgeInterpolationArray[iVar2].base.y_max = iVar4;
    if (iVar7 < iVar3) {
      g_RenderTriangleMinScanlineY = iVar7;
    }
    if (g_RenderTriangleMaxScanlineY < iVar4) {
      g_RenderTriangleMaxScanlineY = iVar4;
    }
    uVar5 = (pSVar6->base).red_gradient - (vertex_a->base).red_gradient;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)(vertex_a->base).red_gradient ^ 0xffff);
    lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).red_current - (vertex_a->base).red_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].base.x_current =
         (vertex_a->base).red_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).u_current - (vertex_a->base).u_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.u_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].base.u_current =
         (vertex_a->base).u_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).u_gradient - (vertex_a->base).u_gradient);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.v_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].base.v_current =
         (vertex_a->base).u_gradient +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).v_current - (vertex_a->base).v_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.red_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].base.red_current =
         (vertex_a->base).v_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 *
            (longlong)((pSVar6->base).depth_gradient - (vertex_a->base).depth_gradient);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.alpha_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].base.alpha_current =
         (vertex_a->base).depth_gradient +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_TexturesDisabled == 0) {
      lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).x_gradient - (vertex_a->base).x_gradient);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].base.depth_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = (vertex_a->base).x_gradient;
    }
    else {
      lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).x_current - (vertex_a->base).x_current);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].base.depth_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = (vertex_a->base).x_current;
    }
    g_EdgeInterpolationArray[iVar2].base.depth_current = iVar3 + uVar5;
    if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) != 0) {
      lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).v_gradient - (vertex_a->base).v_gradient);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].green_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_EdgeInterpolationArray[iVar2].green_current =
           (vertex_a->base).v_gradient +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      lVar1 = (longlong)iVar7 *
              (longlong)((pSVar6->base).depth_current - (vertex_a->base).depth_current);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].blue_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_EdgeInterpolationArray[iVar2].blue_current =
           (vertex_a->base).depth_current +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
  }
  return;
}
