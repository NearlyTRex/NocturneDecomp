// Name: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00482fb0
// Address: 00482fb0
// Address Range: [[00482fb0, 00483203]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SEdgeData *vertex_a,SEdgeData *vertex_b)

#include "nocturne.h"

void __cdecl
core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SEdgeData *vertex_a,SEdgeData *vertex_b)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SEdgeData *pSVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = g_RenderTriangleEdgeCount;
  iVar3 = vertex_b->light_delta >> 0x10;
  iVar7 = vertex_a->light_delta >> 0x10;
  if (iVar7 != iVar3) {
    iVar4 = iVar3;
    pSVar6 = vertex_b;
    if (vertex_b->light_delta < vertex_a->light_delta) {
      iVar4 = iVar7;
      pSVar6 = vertex_a;
      vertex_a = vertex_b;
      iVar7 = iVar3;
    }
    g_EdgeInterpolationArray[g_RenderTriangleEdgeCount].y_start = iVar7;
    iVar3 = g_RenderTriangleMinScanlineY;
    g_EdgeInterpolationArray[iVar2].y_end = iVar4;
    if (iVar7 < iVar3) {
      g_RenderTriangleMinScanlineY = iVar7;
    }
    if (g_RenderTriangleMaxScanlineY < iVar4) {
      g_RenderTriangleMaxScanlineY = iVar4;
    }
    uVar5 = pSVar6->light_delta - vertex_a->light_delta;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)vertex_a->light_delta ^ 0xffff);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->light_current - vertex_a->light_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].x_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].x_current =
         vertex_a->light_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->u_current - vertex_a->u_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].u_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].u_current =
         vertex_a->u_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->u_delta - vertex_a->u_delta);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].v_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].v_current =
         vertex_a->u_delta + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->v_current - vertex_a->v_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].light_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].light_current =
         vertex_a->v_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->z_delta - vertex_a->z_delta);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].w_recip_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].w_recip_current =
         vertex_a->z_delta + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_TexturesDisabled == 0) {
      lVar1 = (longlong)iVar7 * (longlong)(pSVar6->x_delta - vertex_a->x_delta);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].z_delta = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = vertex_a->x_delta;
    }
    else {
      lVar1 = (longlong)iVar7 * (longlong)(pSVar6->x_current - vertex_a->x_current);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].z_delta = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = vertex_a->x_current;
    }
    g_EdgeInterpolationArray[iVar2].z_current = iVar3 + uVar5;
    if ((g_RenderStateFlags._1_1_ & 2) != 0) {
      lVar1 = (longlong)iVar7 * (longlong)(pSVar6->v_delta - vertex_a->v_delta);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].color_delta = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_EdgeInterpolationArray[iVar2].color_current =
           vertex_a->v_delta + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      lVar1 = (longlong)iVar7 * (longlong)(pSVar6->z_current - vertex_a->z_current);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].fog_delta = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_EdgeInterpolationArray[iVar2].fog_current =
           vertex_a->z_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
  }
  return;
}
