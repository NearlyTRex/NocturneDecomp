// Name: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_004f9620
// Address: 004f9620
// Address Range: [[004f9620, 004f982f]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupSoftwareEdgeWithZMode_FUN_004f9620(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

#include "nocturne.h"

void __cdecl engine_prim_c_setupSoftwareEdgeWithZMode_FUN_004f9620(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = g_INT_01e52a68;
  iVar3 = (end_vertex->projected_vertex).screen_y >> 0x10;
  iVar7 = (start_vertex->projected_vertex).screen_y >> 0x10;
  if (iVar7 != iVar3) {
    iVar6 = iVar3;
    pSVar5 = end_vertex;
    if ((end_vertex->projected_vertex).screen_y < (start_vertex->projected_vertex).screen_y) {
      iVar6 = iVar7;
      pSVar5 = start_vertex;
      start_vertex = end_vertex;
      iVar7 = iVar3;
    }
    g_SSoftwareEdge_ARRAY_01e52a6c[g_INT_01e52a68].base.y_min = iVar7;
    iVar3 = g_INT_01e52eec;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.y_max = iVar6;
    if (iVar7 < iVar3) {
      g_INT_01e52eec = iVar7;
    }
    if (g_INT_01e52ef0 < iVar6) {
      g_INT_01e52ef0 = iVar6;
    }
    uVar4 = (pSVar5->projected_vertex).screen_y - (start_vertex->projected_vertex).screen_y;
    if (uVar4 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar4);
    }
    uVar8 = (uint)(ushort)((ushort)(start_vertex->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar7 *
            (longlong)
            ((pSVar5->projected_vertex).screen_x - (start_vertex->projected_vertex).screen_x);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.x_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar5->u - start_vertex->u);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.u_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.u_current =
         start_vertex->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar5->v - start_vertex->v);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.v_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.v_current =
         start_vertex->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar5->r - start_vertex->r);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.red_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.red_current =
         start_vertex->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar5->a - start_vertex->a);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.alpha_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.alpha_current =
         start_vertex->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_VertexPreprocessMode != 1) {
      lVar1 = (longlong)iVar7 *
              (longlong)
              ((pSVar5->projected_vertex).transformed_z -
              (start_vertex->projected_vertex).transformed_z);
      uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.depth_gradient = uVar4;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
      g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.depth_current =
           (start_vertex->projected_vertex).transformed_z +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      g_INT_01e52a68 = g_INT_01e52a68 + 1;
      return;
    }
    if (g_ProcessorType == 0) {
      iVar3 = (pSVar5->projected_vertex).inv_z;
      iVar6 = (start_vertex->projected_vertex).inv_z;
    }
    else {
      iVar6 = 0x7fffffff - (start_vertex->projected_vertex).transformed_z;
      iVar3 = 0x7fffffff - (pSVar5->projected_vertex).transformed_z;
    }
    lVar1 = (longlong)iVar7 * (longlong)(iVar3 - iVar6);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.depth_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SSoftwareEdge_ARRAY_01e52a6c[iVar2].base.depth_current =
         iVar6 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    g_INT_01e52a68 = g_INT_01e52a68 + 1;
  }
  return;
}
