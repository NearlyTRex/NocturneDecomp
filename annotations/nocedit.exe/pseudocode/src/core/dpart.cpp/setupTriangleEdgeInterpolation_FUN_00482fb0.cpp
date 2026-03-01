// Name: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00482fb0
// Address: 00482fb0
// Address Range: [[00482fb0, 00483203]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

#include "nocturne.h"

void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

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
    iVar3 = g_RenderTriangleMinScanlineY;
    g_EdgeInterpolationArray[iVar2].base.y_max = iVar4;
    if (iVar7 < iVar3) {
      g_RenderTriangleMinScanlineY = iVar7;
    }
    if (g_RenderTriangleMaxScanlineY < iVar4) {
      g_RenderTriangleMaxScanlineY = iVar4;
    }
    uVar5 = (pSVar6->base).z_gradient - (vertex_a->base).z_gradient;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)(vertex_a->base).z_gradient ^ 0xffff);
    lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).z_current - (vertex_a->base).z_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].base.x_current =
         (vertex_a->base).z_current +
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
    g_EdgeInterpolationArray[iVar2].base.z_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].base.z_current =
         (vertex_a->base).v_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).w_gradient - (vertex_a->base).w_gradient);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].base.fog_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].base.fog_current =
         (vertex_a->base).w_gradient +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_TexturesDisabled == 0) {
      lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).x_gradient - (vertex_a->base).x_gradient);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].base.w_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = (vertex_a->base).x_gradient;
    }
    else {
      lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).x_current - (vertex_a->base).x_current);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].base.w_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = (vertex_a->base).x_current;
    }
    g_EdgeInterpolationArray[iVar2].base.w_current = iVar3 + uVar5;
    if ((g_RenderStateFlags.bytes[1] & 2) != 0) {
      lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).v_gradient - (vertex_a->base).v_gradient);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].color_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_EdgeInterpolationArray[iVar2].color_current =
           (vertex_a->base).v_gradient +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      lVar1 = (longlong)iVar7 * (longlong)((pSVar6->base).w_current - (vertex_a->base).w_current);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].alpha_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_EdgeInterpolationArray[iVar2].alpha_current =
           (vertex_a->base).w_current +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
  }
  return;
}
