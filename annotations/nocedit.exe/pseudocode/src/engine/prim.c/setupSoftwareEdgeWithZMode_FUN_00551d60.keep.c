// Name: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60
// Address: 00551d60
// MANUAL RECONSTRUCTION
// Address Range: [[00551d60, 00551f6f]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupSoftwareEdgeWithZMode_FUN_00551d60(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

#include "nocturne.h"

void __cdecl engine_prim_c_setupSoftwareEdgeWithZMode_FUN_00551d60(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

{
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar3;
  uint uVar4;
  int iVar5;
  SRenderVertex *pSVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar1;
  int iVar2;
  
  iVar2 = g_SoftwareEdgeCount;
  iVar3 = (end_vertex->projected_vertex).screen_y >> 0x10;
  iVar7 = (start_vertex->projected_vertex).screen_y >> 0x10;
  if (iVar7 != iVar3) {
    iVar5 = iVar3;
    pSVar5 = end_vertex;
    if ((end_vertex->projected_vertex).screen_y < (start_vertex->projected_vertex).screen_y) {
      iVar5 = iVar7;
      pSVar5 = start_vertex;
      start_vertex = end_vertex;
      iVar7 = iVar3;
    }
    g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].base.y_min = iVar7;
    iVar4 = g_SoftwareMinScanline;
    g_SoftwareEdgeBuffer[iVar2].base.y_max = iVar5;
    if (iVar7 < iVar4) {
      g_SoftwareMinScanline = iVar7;
    }
    if (g_SoftwareMaxScanline < iVar5) {
      g_SoftwareMaxScanline = iVar5;
    }
    uVar4 = (pSVar5->projected_vertex).screen_y - (start_vertex->projected_vertex).screen_y;
    if (uVar4 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar4);
    }
    uVar8 = (uint)(ushort)((ushort)(start_vertex->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar5 *
            (longlong)
            ((pSVar5->projected_vertex).screen_x - (start_vertex->projected_vertex).screen_x);
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.x_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar5->u - start_vertex->u);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.u_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.u_current =
         start_vertex->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar5->v - start_vertex->v);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.v_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.v_current =
         start_vertex->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar5->r - start_vertex->r);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.z_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.z_current =
         start_vertex->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)iVar5 * (longlong)(pSVar5->a - start_vertex->a);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.fog_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.fog_current =
         start_vertex->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (g_RenderStateFlag2 != 1) {
      lVar2 = (longlong)iVar5 *
              (longlong)
              ((pSVar5->projected_vertex).transformed_z -
              (start_vertex->projected_vertex).transformed_z);
      uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      g_SoftwareEdgeBuffer[iVar2].base.w_gradient = uVar3;
      lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
      g_SoftwareEdgeBuffer[iVar2].base.w_current =
           (start_vertex->projected_vertex).transformed_z +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
      return;
    }
    if (g_ProcessorType == 0) {
      iVar4 = (pSVar5->projected_vertex).inv_z;
      iVar6 = (start_vertex->projected_vertex).inv_z;
    }
    else {
      iVar6 = 0x7fffffff - (start_vertex->projected_vertex).transformed_z;
      iVar4 = 0x7fffffff - (pSVar5->projected_vertex).transformed_z;
    }
    lVar2 = (longlong)iVar5 * (longlong)(iVar4 - iVar6);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].base.w_gradient = uVar3;
    lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar3;
    g_SoftwareEdgeBuffer[iVar2].base.w_current =
         iVar6 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
  }
  return;
}
