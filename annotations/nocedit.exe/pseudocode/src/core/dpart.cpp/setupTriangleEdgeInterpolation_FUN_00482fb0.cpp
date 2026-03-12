// Name: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00482fb0
// Address: 00482fb0
// Address Range: [[00482fb0, 00483203]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

#include "nocturne.h"

void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

{
  longlong lVar2;
  uint uVar3;
  int iVar5;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SSoftwareEdge *pSVar6;
  int iVar7;
  uint uVar8;
  int iVar2;
  longlong lVar1;
  
  iVar2 = g_RenderTriangleEdgeCount;
  iVar3 = (vertex_b->base).z_gradient >> 0x10;
  iVar7 = (vertex_a->base).z_gradient >> 0x10;
  if (iVar7 != iVar3) {
    iVar4 = iVar3;
    pSVar6 = vertex_b;
    if ((vertex_b->base).z_gradient < (vertex_a->base).z_gradient) {
      iVar4 = iVar7;
      pSVar6 = vertex_a;
      vertex_a = vertex_b;
      iVar7 = iVar3;
    }
    g_EdgeInterpolationArray[g_RenderTriangleEdgeCount].base.y_min = iVar7;
    iVar6 = g_RenderTriangleMinScanlineY;
    g_EdgeInterpolationArray[iVar2].base.y_max = iVar4;
    if (iVar7 < iVar6) {
      g_RenderTriangleMinScanlineY = iVar7;
    }
    if (g_RenderTriangleMaxScanlineY < iVar4) {
      g_RenderTriangleMaxScanlineY = iVar4;
    }
    uVar5 = (pSVar6->base).z_gradient - (vertex_a->base).z_gradient;
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8._0_2_ = (ushort)(vertex_a->base).z_gradient;
    uVar8._0_2_ = (ushort)uVar8 ^ 0xffff;
    uVar8 = (uint)(ushort)uVar8;
    lVar1 = (longlong)iVar6 * (longlong)((pSVar6->base).z_current - (vertex_a->base).z_current);
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.x_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_EdgeInterpolationArray[iVar2].base.x_current =
         (vertex_a->base).z_current +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)((pSVar6->base).u_current - (vertex_a->base).u_current);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.u_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_EdgeInterpolationArray[iVar2].base.u_current =
         (vertex_a->base).u_current +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)((pSVar6->base).u_gradient - (vertex_a->base).u_gradient);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.v_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_EdgeInterpolationArray[iVar2].base.v_current =
         (vertex_a->base).u_gradient +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)((pSVar6->base).v_current - (vertex_a->base).v_current);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.z_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_EdgeInterpolationArray[iVar2].base.z_current =
         (vertex_a->base).v_current +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)((pSVar6->base).w_gradient - (vertex_a->base).w_gradient);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.fog_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_EdgeInterpolationArray[iVar2].base.fog_current =
         (vertex_a->base).w_gradient +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (g_TexturesDisabled == 0) {
      lVar2 = (longlong)iVar6 * (longlong)((pSVar6->base).x_gradient - (vertex_a->base).x_gradient);
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].base.w_gradient = uVar3;
      lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar5 = (vertex_a->base).x_gradient;
    }
    else {
      lVar2 = (longlong)iVar6 * (longlong)((pSVar6->base).x_current - (vertex_a->base).x_current);
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].base.w_gradient = uVar3;
      lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar5 = (vertex_a->base).x_current;
    }
    g_EdgeInterpolationArray[iVar2].base.w_current = iVar5 + uVar3;
    if ((g_RenderStateFlags.bytes[1] & 2) != 0) {
      lVar2 = (longlong)iVar6 * (longlong)((pSVar6->base).v_gradient - (vertex_a->base).v_gradient);
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].color_gradient = uVar3;
      lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
      g_EdgeInterpolationArray[iVar2].color_current =
           (vertex_a->base).v_gradient +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      lVar2 = (longlong)iVar6 * (longlong)((pSVar6->base).w_current - (vertex_a->base).w_current);
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].alpha_gradient = uVar3;
      lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
      g_EdgeInterpolationArray[iVar2].alpha_current =
           (vertex_a->base).w_current +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
  }
  return;
}
