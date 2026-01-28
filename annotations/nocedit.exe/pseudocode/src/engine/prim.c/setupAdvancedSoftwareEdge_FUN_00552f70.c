// Name: engine_prim.c_setupAdvancedSoftwareEdge_FUN_00552f70
// Address: 00552f70
// Address Range: [[00552f70, 00553182]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupAdvancedSoftwareEdge_FUN_00552f70 (SRenderVertex *start_vertex,SRenderVertex *end_vertex)

#include "nocturne.h"

void __cdecl
engine_prim_c_setupAdvancedSoftwareEdge_FUN_00552f70
          (SRenderVertex *start_vertex,SRenderVertex *end_vertex)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  
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
    g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar7;
    iVar3 = g_MinScanline;
    g_SoftwareEdgeTable[iVar2].y_max = iVar4;
    if (iVar7 < iVar3) {
      g_MinScanline = iVar7;
    }
    if (g_MaxScanline < iVar4) {
      g_MaxScanline = iVar4;
    }
    uVar5 = (pSVar6->projected_vertex).screen_y - (start_vertex->projected_vertex).screen_y;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)(start_vertex->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar7 *
            (longlong)
            ((pSVar6->projected_vertex).screen_x - (start_vertex->projected_vertex).screen_x);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->u - (int)start_vertex->u);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].u_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].u_current =
         (int)start_vertex->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->v - (int)start_vertex->v);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].v_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].v_current =
         (int)start_vertex->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->light - (int)start_vertex->light);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].z_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].z_current =
         (int)start_vertex->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->w_recip - (int)start_vertex->w_recip);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].fog_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].fog_current =
         (int)start_vertex->w_recip +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 *
            (longlong)
            ((pSVar6->projected_vertex).transformed_z -
            (start_vertex->projected_vertex).transformed_z);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].w_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].w_current =
         (start_vertex->projected_vertex).transformed_z +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->color - start_vertex->color);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].r_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].r_current =
         start_vertex->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->fog - (int)start_vertex->fog);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].g_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].g_current =
         (int)start_vertex->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
  }
  return;
}
