// Name: engine_fpoly.c_addPolygonEdge_FUN_004940e0
// Address: 004940e0
// Address Range: [[004940e0, 00494214]]
// Convention: __cdecl
// Signature: void __cdecl engine_fpoly_c_addPolygonEdge_FUN_004940e0(SRenderVertex *vertex1,SRenderVertex *vertex2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_fpoly_c_addPolygonEdge_FUN_004940e0(SRenderVertex *vertex1,SRenderVertex *vertex2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  SRenderVertex *pSVar7;
  
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
    iVar3 = _DAT_01c70f78 * 0x38;
    *(int *)(&DAT_01c70f7c + iVar3) = iVar5;
    iVar2 = _DAT_01c712fc;
    *(int *)(iVar3 + 0x1c70f80) = iVar4;
    if (iVar5 < iVar2) {
      _DAT_01c712fc = iVar5;
    }
    if (_DAT_01c71300 < iVar4) {
      _DAT_01c71300 = iVar4;
    }
    *(int *)(iVar3 + 0x1c70f84) = (pSVar7->projected_vertex).screen_x;
    *(int *)(iVar3 + 0x1c70f94) = pSVar7->u;
    *(int *)(iVar3 + 0x1c70f9c) = pSVar7->v;
    uVar6 = (vertex2->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 *
            (longlong)((vertex2->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
    *(uint *)(iVar3 + 0x1c70f88) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(vertex2->u - pSVar7->u);
    *(uint *)(iVar3 + 0x1c70f98) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(vertex2->v - pSVar7->v);
    *(uint *)(iVar3 + 0x1c70fa0) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1c70f88);
    *(uint *)(iVar3 + 0x1c70f84) =
         *(int *)(iVar3 + 0x1c70f84) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1c70f98);
    *(uint *)(iVar3 + 0x1c70f94) =
         *(int *)(iVar3 + 0x1c70f94) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1c70fa0);
    _DAT_01c70f78 = _DAT_01c70f78 + 1;
    *(uint *)(iVar3 + 0x1c70f9c) =
         *(int *)(iVar3 + 0x1c70f9c) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
