// Name: engine_prim.c_setupBasicSoftwareEdge_FUN_00551ba0
// Address: 00551ba0
// Address Range: [[00551ba0, 00551d5b]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupBasicSoftwareEdge_FUN_00551ba0(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

#include "nocturne.h"

void __cdecl engine_prim_c_setupBasicSoftwareEdge_FUN_00551ba0(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

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
  longlong lVar1;
  int iVar2;
  
  iVar2 = g_SoftwareEdgeCount;
  iVar7 = (end_vertex->projected_vertex).screen_y >> 0x10;
  iVar3 = (start_vertex->projected_vertex).screen_y >> 0x10;
  if (iVar3 != iVar7) {
    iVar4 = iVar3;
    pSVar6 = end_vertex;
    if ((end_vertex->projected_vertex).screen_y < (start_vertex->projected_vertex).screen_y) {
      iVar4 = iVar7;
      pSVar6 = start_vertex;
      start_vertex = end_vertex;
      iVar7 = iVar3;
    }
    g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].base.y_min = iVar4;
    iVar5 = g_SoftwareMinScanline;
    g_SoftwareEdgeBuffer[iVar2].base.y_max = iVar7;
    if (iVar4 < iVar5) {
      g_SoftwareMinScanline = iVar4;
    }
    if (g_SoftwareMaxScanline < iVar7) {
      g_SoftwareMaxScanline = iVar7;
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
    g_SoftwareEdgeBuffer[iVar2].base.x_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->u - start_vertex->u);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.u_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.u_current =
         start_vertex->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->v - start_vertex->v);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.v_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.v_current =
         start_vertex->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->r - start_vertex->r);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.z_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.z_current =
         start_vertex->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar6->a - start_vertex->a);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.fog_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.fog_current =
         start_vertex->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 *
            (longlong)
            ((pSVar6->projected_vertex).transformed_z -
            (start_vertex->projected_vertex).transformed_z);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.w_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
    g_SoftwareEdgeBuffer[iVar2].base.w_current =
         (start_vertex->projected_vertex).transformed_z +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  return;
}
