// Name: engine_prim.c_setupAdvancedSoftwareEdge_FUN_00552f70
// Address: 00552f70
// Address Range: [[00552f70, 00553182]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupAdvancedSoftwareEdge_FUN_00552f70(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

#include "nocturne.h"

void __cdecl engine_prim_c_setupAdvancedSoftwareEdge_FUN_00552f70(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

{
  longlong lVar2;
  uint uVar3;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  int iVar2;
  longlong lVar1;
  
  iVar2 = g_ActiveEdgeCount;
  iVar3 = (end_vertex->projected_vertex).screen_y >> 0x10;
  iVar7 = (start_vertex->projected_vertex).screen_y >> 0x10;
  if (iVar7 != iVar3) {
    iVar4 = iVar3;
    pSVar6 = end_vertex;
    if ((end_vertex->projected_vertex).screen_y < (start_vertex->projected_vertex).screen_y) {
      iVar4 = iVar7;
      pSVar6 = start_vertex;
      start_vertex = end_vertex;
      iVar7 = iVar3;
    }
    g_SoftwareEdgeTable[g_ActiveEdgeCount].base.y_min = iVar7;
    iVar5 = g_MinScanline;
    g_SoftwareEdgeTable[iVar2].base.y_max = iVar4;
    if (iVar7 < iVar5) {
      g_MinScanline = iVar7;
    }
    if (g_MaxScanline < iVar4) {
      g_MaxScanline = iVar4;
    }
    uVar5 = (pSVar6->projected_vertex).screen_y - (start_vertex->projected_vertex).screen_y;
    if (uVar5 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8._0_2_ = (ushort)(start_vertex->projected_vertex).screen_y;
    uVar8._0_2_ = (ushort)uVar8 ^ 0xffff;
    uVar8 = (uint)(ushort)uVar8;
    lVar1 = (longlong)iVar5 *
            (longlong)
            ((pSVar6->projected_vertex).screen_x - (start_vertex->projected_vertex).screen_x);
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.x_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->u - start_vertex->u);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.u_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.u_current =
         start_vertex->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->v - start_vertex->v);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.v_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.v_current =
         start_vertex->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->r - start_vertex->r);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.red_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.red_current =
         start_vertex->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->a - start_vertex->a);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.alpha_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.alpha_current =
         start_vertex->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 *
            (longlong)
            ((pSVar6->projected_vertex).transformed_z -
            (start_vertex->projected_vertex).transformed_z);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].base.depth_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].base.depth_current =
         (start_vertex->projected_vertex).transformed_z +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->g - start_vertex->g);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].green_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].green_current =
         start_vertex->g + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->b - start_vertex->b);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].blue_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeTable[iVar2].blue_current =
         start_vertex->b + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
  }
  return;
}
