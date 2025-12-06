// Name: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60
// Address: 00551d60
// Address Range: [[00551d60, 00551f6f]]
// Convention: __cdecl
// Signature: void engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60(SRenderVertex * start_vertex, SRenderVertex * end_vertex)

#include "nocturne.h"

void __cdecl
engine_prim_c_setupSoftwareEdgeWithZMode_FUN_00551d60
          (SRenderVertex *start_vertex,SRenderVertex *end_vertex)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = g_SoftwareEdgeCount;
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
    g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar7;
    iVar3 = g_SoftwareMinScanline;
    g_SoftwareEdgeBuffer[iVar2].y_max = iVar6;
    if (iVar7 < iVar3) {
      g_SoftwareMinScanline = iVar7;
    }
    if (g_SoftwareMaxScanline < iVar6) {
      g_SoftwareMaxScanline = iVar6;
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
    g_SoftwareEdgeBuffer[iVar2].x_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar5->u - (int)start_vertex->u);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].u_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].u_current =
         (int)start_vertex->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar5->v - (int)start_vertex->v);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].v_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].v_current =
         (int)start_vertex->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar5->light - (int)start_vertex->light);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].z_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].z_current =
         (int)start_vertex->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar5->w_recip - (int)start_vertex->w_recip);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].fog_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].fog_current =
         (int)start_vertex->w_recip +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_RenderStateFlag2 != 1) {
      lVar1 = (longlong)iVar7 *
              (longlong)
              ((pSVar5->projected_vertex).transformed_z -
              (start_vertex->projected_vertex).transformed_z);
      uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SoftwareEdgeBuffer[iVar2].w_gradient = uVar4;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
      g_SoftwareEdgeBuffer[iVar2].w_current =
           (start_vertex->projected_vertex).transformed_z +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
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
    g_SoftwareEdgeBuffer[iVar2].w_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].w_current =
         iVar6 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
  }
  return;
}
