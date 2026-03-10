// Name: engine_3d.c_addRasterizerEdge_FUN_005fcd20
// Address: 005fcd20
// Address Range: [[005fcd20, 005fce3b]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_addRasterizerEdge_FUN_005fcd20(SRenderVertex *v0,SRenderVertex *v1)

#include "nocturne.h"

void __cdecl engine_3d_c_addRasterizerEdge_FUN_005fcd20(SRenderVertex *v0,SRenderVertex *v1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  uint uVar8;
  
  iVar2 = g_RasterizerEdgeCount;
  iVar6 = (v1->projected_vertex).screen_y >> 0x10;
  iVar3 = (v0->projected_vertex).screen_y >> 0x10;
  if (iVar3 != iVar6) {
    iVar4 = iVar3;
    pSVar7 = v0;
    if ((v1->projected_vertex).screen_y < (v0->projected_vertex).screen_y) {
      iVar4 = iVar6;
      iVar6 = iVar3;
      pSVar7 = v1;
      v1 = v0;
    }
    g_RasterizerEdgeArray[g_RasterizerEdgeCount].base.y_min = iVar4;
    iVar3 = g_RasterizerMinY;
    g_RasterizerEdgeArray[iVar2].base.y_max = iVar6;
    if (iVar4 < iVar3) {
      g_RasterizerMinY = iVar4;
    }
    if (g_RasterizerMaxY < iVar6) {
      g_RasterizerMaxY = iVar6;
    }
    uVar5 = (v1->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (pSVar7->projected_vertex).screen_y & 0xffffU ^ 0xffff;
    lVar1 = (longlong)iVar6 *
            (longlong)((v1->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_RasterizerEdgeArray[iVar2].base.x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_RasterizerEdgeArray[iVar2].base.x_current =
         (pSVar7->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar6 *
            (longlong)
            (((v1->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z) *
            0x100);
    g_RasterizerEdgeArray[iVar2].base.w_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar8 * (longlong)g_RasterizerEdgeArray[iVar2].base.w_gradient;
    g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
    g_RasterizerEdgeArray[iVar2].base.w_current =
         ((pSVar7->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
