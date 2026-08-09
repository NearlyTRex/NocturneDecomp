// Name: engine_zraster.c_addRasterizerEdgeWithDepth_FUN_005fce40
// Address: 005fce40
// Address Range: [[005fce40, 005fcf77]]
// Convention: __cdecl
// Signature: void __cdecl engine_zraster_c_addRasterizerEdgeWithDepth_FUN_005fce40(SRenderVertex *v0,SRenderVertex *v1)

#include "nocturne.h"

void __cdecl engine_zraster_c_addRasterizerEdgeWithDepth_FUN_005fce40(SRenderVertex *v0,SRenderVertex *v1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  SRenderVertex *pSVar8;
  
  iVar3 = g_RasterizerEdgeCount;
  iVar6 = (v1->projected_vertex).screen_y >> 0x10;
  iVar4 = (v0->projected_vertex).screen_y >> 0x10;
  if (iVar4 != iVar6) {
    iVar5 = iVar4;
    pSVar8 = v0;
    if ((v1->projected_vertex).screen_y < (v0->projected_vertex).screen_y) {
      iVar5 = iVar6;
      iVar6 = iVar4;
      pSVar8 = v1;
      v1 = v0;
    }
    g_RasterizerEdgeArray[g_RasterizerEdgeCount].base.y_min = iVar5;
    iVar4 = g_RasterizerMinY;
    g_RasterizerEdgeArray[iVar3].base.y_max = iVar6;
    if (iVar5 < iVar4) {
      g_RasterizerMinY = iVar5;
    }
    if (g_RasterizerMaxY < iVar6) {
      g_RasterizerMaxY = iVar6;
    }
    g_RasterizerEdgeArray[iVar3].base.x_current = (pSVar8->projected_vertex).screen_x;
    g_RasterizerEdgeArray[iVar3].base.depth_current = (pSVar8->projected_vertex).transformed_z << 8;
    g_RasterizerEdgeArray[iVar3].base.red_current = pSVar8->r;
    uVar7 = (v1->projected_vertex).screen_y - (pSVar8->projected_vertex).screen_y;
    if (uVar7 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar7);
    }
    lVar2 = (longlong)iVar6 *
            (longlong)((v1->projected_vertex).screen_x - (pSVar8->projected_vertex).screen_x);
    g_RasterizerEdgeArray[iVar3].base.x_gradient =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iVar6 *
            (longlong)
            (((v1->projected_vertex).transformed_z - (pSVar8->projected_vertex).transformed_z) *
            0x100);
    g_RasterizerEdgeArray[iVar3].base.depth_gradient =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iVar6 * (longlong)(v1->r - pSVar8->r);
    g_RasterizerEdgeArray[iVar3].base.red_gradient =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    uVar7 = (uint)(ushort)((ushort)(pSVar8->projected_vertex).screen_y ^ 0xffff);
    lVar2 = (longlong)(int)uVar7 * (longlong)g_RasterizerEdgeArray[iVar3].base.x_gradient;
    iVar6 = g_RasterizerEdgeArray[iVar3].base.depth_gradient;
    g_RasterizerEdgeArray[iVar3].base.x_current =
         g_RasterizerEdgeArray[iVar3].base.x_current +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)(int)uVar7 * (longlong)iVar6;
    piVar1 = &g_RasterizerEdgeArray[iVar3].base.depth_current;
    *piVar1 = *piVar1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)(int)uVar7 * (longlong)g_RasterizerEdgeArray[iVar3].base.red_gradient;
    g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
    g_RasterizerEdgeArray[iVar3].base.red_current =
         g_RasterizerEdgeArray[iVar3].base.red_current +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  return;
}
