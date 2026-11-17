// Name: engine_zraster.c_addRasterizerEdge_FUN_00562620
// Address: 00562620
// Address Range: [[00562620, 0056273b]]
// Convention: __cdecl
// Signature: void __cdecl engine_zraster_c_addRasterizerEdge_FUN_00562620(SRenderVertex *v0,SRenderVertex *v1)

#include "nocturne.h"

void __cdecl engine_zraster_c_addRasterizerEdge_FUN_00562620(SRenderVertex *v0,SRenderVertex *v1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  uint uVar8;
  
  iVar2 = g_INT_02de497c;
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
    g_SSoftwareEdge_ARRAY_02de4980[g_INT_02de497c].base.y_min = iVar4;
    iVar3 = g_INT_02de4e00;
    g_SSoftwareEdge_ARRAY_02de4980[iVar2].base.y_max = iVar6;
    if (iVar4 < iVar3) {
      g_INT_02de4e00 = iVar4;
    }
    if (g_INT_02de4e04 < iVar6) {
      g_INT_02de4e04 = iVar6;
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
    g_SSoftwareEdge_ARRAY_02de4980[iVar2].base.x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SSoftwareEdge_ARRAY_02de4980[iVar2].base.x_current =
         (pSVar7->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar6 *
            (longlong)
            (((v1->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z) *
            0x100);
    g_SSoftwareEdge_ARRAY_02de4980[iVar2].base.depth_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar8 *
            (longlong)g_SSoftwareEdge_ARRAY_02de4980[iVar2].base.depth_gradient;
    g_INT_02de497c = g_INT_02de497c + 1;
    g_SSoftwareEdge_ARRAY_02de4980[iVar2].base.depth_current =
         ((pSVar7->projected_vertex).transformed_z * 0x100 - g_INT_01b4d1fc) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
