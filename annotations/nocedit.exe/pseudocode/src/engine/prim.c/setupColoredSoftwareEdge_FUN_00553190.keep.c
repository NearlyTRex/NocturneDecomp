// Name: engine_prim.c_setupColoredSoftwareEdge_FUN_00553190
// Address: 00553190
// MANUAL RECONSTRUCTION
// Address Range: [[00553190, 0055340b]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_00553190(SRenderVertex *vertex0,SRenderVertex *vertex1)

#include "nocturne.h"

void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_00553190(SRenderVertex *vertex0,SRenderVertex *vertex1)

{
  longlong lVar2;
  uint uVar3;
  int iVar5;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  int local_14;
  int iVar2;
  longlong lVar1;
  
  iVar2 = g_ActiveEdgeCount;
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
    g_SoftwareEdgeTable[g_ActiveEdgeCount].base.y_min = iVar4;
    iVar6 = g_MinScanline;
    g_SoftwareEdgeTable[iVar2].base.y_max = iVar7;
    if (iVar4 < iVar6) {
      g_MinScanline = iVar4;
    }
    if (g_MaxScanline < iVar7) {
      g_MaxScanline = iVar7;
    }
    uVar5 = (pSVar6->projected_vertex).screen_y - (vertex0->projected_vertex).screen_y;
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)(vertex0->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar6 *
            (longlong)((pSVar6->projected_vertex).screen_x - (vertex0->projected_vertex).screen_x);
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.x_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.x_current =
         (vertex0->projected_vertex).screen_x +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)(pSVar6->u - vertex0->u);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.u_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.u_current =
         vertex0->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)(pSVar6->v - vertex0->v);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.v_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.v_current =
         vertex0->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)(pSVar6->r - vertex0->r);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.red_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.red_current =
         vertex0->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)(pSVar6->a - vertex0->a);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.alpha_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.alpha_current =
         vertex0->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (g_VertexPreprocessMode == 1) {
      if (g_ProcessorType == 0) {
        local_14 = (vertex0->projected_vertex).inv_z;
        iVar5 = (pSVar6->projected_vertex).inv_z;
      }
      else {
        local_14 = 0x7fffffff - (vertex0->projected_vertex).transformed_z;
        iVar5 = 0x7fffffff - (pSVar6->projected_vertex).transformed_z;
      }
      lVar2 = (longlong)iVar6 * (longlong)(iVar5 - local_14);
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      g_SoftwareEdgeTable[iVar2].base.depth_gradient = uVar3;
      lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
      g_SoftwareEdgeTable[iVar2].base.depth_current =
           local_14 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    else {
      lVar2 = (longlong)iVar6 *
              (longlong)
              ((pSVar6->projected_vertex).transformed_z - (vertex0->projected_vertex).transformed_z)
      ;
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      g_SoftwareEdgeTable[iVar2].base.depth_gradient = uVar3;
      lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
      g_SoftwareEdgeTable[iVar2].base.depth_current =
           (vertex0->projected_vertex).transformed_z +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    lVar2 = (longlong)iVar6 * (longlong)(pSVar6->g - vertex0->g);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].green_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].green_current =
         vertex0->g + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar6 * (longlong)(pSVar6->b - vertex0->b);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].blue_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
    g_SoftwareEdgeTable[iVar2].blue_current =
         vertex0->b + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  return;
}
