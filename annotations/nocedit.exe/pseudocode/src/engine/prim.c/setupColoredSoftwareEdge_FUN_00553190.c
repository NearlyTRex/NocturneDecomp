// Name: engine_prim.c_setupColoredSoftwareEdge_FUN_00553190
// Address: 00553190
// Address Range: [[00553190, 0055340b]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_00553190(SRenderVertex *vertex0,SRenderVertex *vertex1)

#include "nocturne.h"

void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_00553190(SRenderVertex *vertex0,SRenderVertex *vertex1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  int local_14;
  
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
    iVar3 = g_MinScanline;
    g_SoftwareEdgeTable[iVar2].base.y_max = iVar7;
    if (iVar4 < iVar3) {
      g_MinScanline = iVar4;
    }
    if (g_MaxScanline < iVar7) {
      g_MaxScanline = iVar7;
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
    g_SoftwareEdgeTable[iVar2].base.x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].base.x_current =
         (vertex0->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->u - vertex0->u);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.u_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].base.u_current =
         vertex0->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->v - vertex0->v);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.v_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].base.v_current =
         vertex0->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->r - vertex0->r);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.z_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].base.z_current =
         vertex0->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->a - vertex0->a);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.fog_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].base.fog_current =
         vertex0->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_RenderStateFlag2 == 1) {
      if (g_ProcessorType == 0) {
        local_14 = (vertex0->projected_vertex).inv_z;
        iVar3 = (pSVar6->projected_vertex).inv_z;
      }
      else {
        local_14 = 0x7fffffff - (vertex0->projected_vertex).transformed_z;
        iVar3 = 0x7fffffff - (pSVar6->projected_vertex).transformed_z;
      }
      lVar1 = (longlong)iVar7 * (longlong)(iVar3 - local_14);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SoftwareEdgeTable[iVar2].base.w_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_SoftwareEdgeTable[iVar2].base.w_current =
           local_14 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    else {
      lVar1 = (longlong)iVar7 *
              (longlong)
              ((pSVar6->projected_vertex).transformed_z - (vertex0->projected_vertex).transformed_z)
      ;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SoftwareEdgeTable[iVar2].base.w_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_SoftwareEdgeTable[iVar2].base.w_current =
           (vertex0->projected_vertex).transformed_z +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->g - vertex0->g);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].color_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].color_current =
         vertex0->g + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->b - vertex0->b);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].alpha_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
    g_SoftwareEdgeTable[iVar2].alpha_current =
         vertex0->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
