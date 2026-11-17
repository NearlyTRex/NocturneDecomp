// Name: engine_prim.c_setupColoredSoftwareEdge_FUN_0053eda0
// Address: 0053eda0
// Address Range: [[0053eda0, 0053f01b]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_0053eda0(SRenderVertex *vertex0,SRenderVertex *vertex1)

#include "nocturne.h"

void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_0053eda0(SRenderVertex *vertex0,SRenderVertex *vertex1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  int iStack_14;
  
  iVar2 = g_INT_01e7dacc;
  iVar7 = (vertex1->projected_vertex).screen_y >> 0x10;
  iVar3 = (vertex0->projected_vertex).screen_y >> 0x10;
  if (iVar3 != iVar7) {
    iVar4 = iVar3;
    pSVar6 = vertex1;
    if ((vertex1->projected_vertex).screen_y < (vertex0->projected_vertex).screen_y) {
      iVar4 = iVar7;
      pSVar6 = vertex0;
      vertex0 = vertex1;
      iVar7 = iVar3;
    }
    g_SSoftwareEdge_ARRAY_01e7dad0[g_INT_01e7dacc].base.y_min = iVar4;
    iVar3 = g_INT_01e7dfd0;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.y_max = iVar7;
    if (iVar4 < iVar3) {
      g_INT_01e7dfd0 = iVar4;
    }
    if (g_INT_01e7dfd4 < iVar7) {
      g_INT_01e7dfd4 = iVar7;
    }
    uVar5 = (pSVar6->projected_vertex).screen_y - (vertex0->projected_vertex).screen_y;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)(vertex0->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar7 *
            (longlong)((pSVar6->projected_vertex).screen_x - (vertex0->projected_vertex).screen_x);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.x_current =
         (vertex0->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->u - vertex0->u);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.u_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.u_current =
         vertex0->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->v - vertex0->v);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.v_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.v_current =
         vertex0->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->r - vertex0->r);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.red_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.red_current =
         vertex0->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->a - vertex0->a);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.alpha_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.alpha_current =
         vertex0->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_INT_01c51d18 == 1) {
      if (g_INT_01c51d10 == 0) {
        iStack_14 = (vertex0->projected_vertex).inv_z;
        iVar3 = (pSVar6->projected_vertex).inv_z;
      }
      else {
        iStack_14 = 0x7fffffff - (vertex0->projected_vertex).transformed_z;
        iVar3 = 0x7fffffff - (pSVar6->projected_vertex).transformed_z;
      }
      lVar1 = (longlong)iVar7 * (longlong)(iVar3 - iStack_14);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.depth_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.depth_current =
           iStack_14 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    else {
      lVar1 = (longlong)iVar7 *
              (longlong)
              ((pSVar6->projected_vertex).transformed_z - (vertex0->projected_vertex).transformed_z)
      ;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.depth_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].base.depth_current =
           (vertex0->projected_vertex).transformed_z +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->g - vertex0->g);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].green_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].green_current =
         vertex0->g + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->b - vertex0->b);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].blue_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_INT_01e7dacc = g_INT_01e7dacc + 1;
    g_SSoftwareEdge_ARRAY_01e7dad0[iVar2].blue_current =
         vertex0->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
