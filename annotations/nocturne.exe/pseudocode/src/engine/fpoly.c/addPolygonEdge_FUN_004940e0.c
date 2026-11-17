// Name: engine_fpoly.c_addPolygonEdge_FUN_004940e0
// Address: 004940e0
// Address Range: [[004940e0, 00494214]]
// Convention: __cdecl
// Signature: void __cdecl engine_fpoly_c_addPolygonEdge_FUN_004940e0(SRenderVertex *vertex1,SRenderVertex *vertex2)

#include "nocturne.h"

void __cdecl engine_fpoly_c_addPolygonEdge_FUN_004940e0(SRenderVertex *vertex1,SRenderVertex *vertex2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  SRenderVertex *pSVar7;
  
  iVar2 = g_INT_01c70f78;
  iVar3 = (vertex2->projected_vertex).screen_y >> 0x10;
  iVar5 = (vertex1->projected_vertex).screen_y >> 0x10;
  if (iVar5 != iVar3) {
    iVar4 = iVar3;
    pSVar7 = vertex1;
    if ((vertex2->projected_vertex).screen_y < (vertex1->projected_vertex).screen_y) {
      iVar4 = iVar5;
      iVar5 = iVar3;
      pSVar7 = vertex2;
      vertex2 = vertex1;
    }
    g_SHardwareEdge_ARRAY_01c70f7c[g_INT_01c70f78].y_min = iVar5;
    iVar3 = g_INT_01c712fc;
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].y_max = iVar4;
    if (iVar5 < iVar3) {
      g_INT_01c712fc = iVar5;
    }
    if (g_INT_01c71300 < iVar4) {
      g_INT_01c71300 = iVar4;
    }
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].x_current = (pSVar7->projected_vertex).screen_x;
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].u_current = pSVar7->u;
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].v_current = pSVar7->v;
    uVar6 = (vertex2->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 *
            (longlong)((vertex2->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].x_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(vertex2->u - pSVar7->u);
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].u_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(vertex2->v - pSVar7->v);
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].v_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)g_SHardwareEdge_ARRAY_01c70f7c[iVar2].x_gradient;
    iVar5 = g_SHardwareEdge_ARRAY_01c70f7c[iVar2].u_gradient;
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].x_current =
         g_SHardwareEdge_ARRAY_01c70f7c[iVar2].x_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)iVar5;
    iVar5 = g_SHardwareEdge_ARRAY_01c70f7c[iVar2].v_gradient;
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].u_current =
         g_SHardwareEdge_ARRAY_01c70f7c[iVar2].u_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)iVar5;
    g_INT_01c70f78 = g_INT_01c70f78 + 1;
    g_SHardwareEdge_ARRAY_01c70f7c[iVar2].v_current =
         g_SHardwareEdge_ARRAY_01c70f7c[iVar2].v_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
