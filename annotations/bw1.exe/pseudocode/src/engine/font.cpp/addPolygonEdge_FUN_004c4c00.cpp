// Name: engine_font.cpp_addPolygonEdge_FUN_004c4c00
// Address: 004c4c00
// Address Range: [[004c4c00, 004c4d34]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_addPolygonEdge_FUN_004c4c00(SRenderVertex *vertex1,SRenderVertex *vertex2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_addPolygonEdge_FUN_004c4c00(SRenderVertex *vertex1,SRenderVertex *vertex2)

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
    iVar3 = _DAT_01cc8ce8 * 0x38;
    *(int *)(&DAT_01cc8cec + iVar3) = iVar5;
    iVar2 = _DAT_01cc906c;
    *(int *)(iVar3 + 0x1cc8cf0) = iVar4;
    if (iVar5 < iVar2) {
      _DAT_01cc906c = iVar5;
    }
    if (_DAT_01cc9070 < iVar4) {
      _DAT_01cc9070 = iVar4;
    }
    *(int *)(iVar3 + 0x1cc8cf4) = (pSVar7->projected_vertex).screen_x;
    *(int *)(iVar3 + 0x1cc8d04) = pSVar7->u;
    *(int *)(iVar3 + 0x1cc8d0c) = pSVar7->v;
    uVar6 = (vertex2->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 *
            (longlong)((vertex2->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
    *(uint *)(iVar3 + 0x1cc8cf8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(vertex2->u - pSVar7->u);
    *(uint *)(iVar3 + 0x1cc8d08) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(vertex2->v - pSVar7->v);
    *(uint *)(iVar3 + 0x1cc8d10) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1cc8cf8);
    *(uint *)(iVar3 + 0x1cc8cf4) =
         *(int *)(iVar3 + 0x1cc8cf4) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1cc8d08);
    *(uint *)(iVar3 + 0x1cc8d04) =
         *(int *)(iVar3 + 0x1cc8d04) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1cc8d10);
    _DAT_01cc8ce8 = _DAT_01cc8ce8 + 1;
    *(uint *)(iVar3 + 0x1cc8d0c) =
         *(int *)(iVar3 + 0x1cc8d0c) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
