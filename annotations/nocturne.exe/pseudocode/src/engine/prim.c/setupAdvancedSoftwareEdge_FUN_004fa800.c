// Name: engine_prim.c_setupAdvancedSoftwareEdge_FUN_004fa800
// Address: 004fa800
// Address Range: [[004fa800, 004faa12]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupAdvancedSoftwareEdge_FUN_004fa800(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

#include "nocturne.h"

void __cdecl engine_prim_c_setupAdvancedSoftwareEdge_FUN_004fa800(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = g_INT_01e52efc;
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
    g_SSoftwareEdge_ARRAY_01e52f00[g_INT_01e52efc].base.y_min = iVar7;
    iVar3 = g_INT_01e53380;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.y_max = iVar4;
    if (iVar7 < iVar3) {
      g_INT_01e53380 = iVar7;
    }
    if (g_INT_01e53384 < iVar4) {
      g_INT_01e53384 = iVar4;
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
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->u - start_vertex->u);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.u_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.u_current =
         start_vertex->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->v - start_vertex->v);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.v_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.v_current =
         start_vertex->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->r - start_vertex->r);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.red_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.red_current =
         start_vertex->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->a - start_vertex->a);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.alpha_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.alpha_current =
         start_vertex->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 *
            (longlong)
            ((pSVar6->projected_vertex).transformed_z -
            (start_vertex->projected_vertex).transformed_z);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.depth_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].base.depth_current =
         (start_vertex->projected_vertex).transformed_z +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->g - start_vertex->g);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].green_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].green_current =
         start_vertex->g + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->b - start_vertex->b);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].blue_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_01e52f00[iVar2].blue_current =
         start_vertex->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    g_INT_01e52efc = g_INT_01e52efc + 1;
  }
  return;
}
