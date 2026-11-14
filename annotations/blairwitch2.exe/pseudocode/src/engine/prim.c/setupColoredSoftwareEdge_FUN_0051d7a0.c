// Name: engine_prim.c_setupColoredSoftwareEdge_FUN_0051d7a0
// Address: 0051d7a0
// Address Range: [[0051d7a0, 0051da1b]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_0051d7a0(SRenderVertex *vertex0,SRenderVertex *vertex1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_0051d7a0(SRenderVertex *vertex0,SRenderVertex *vertex1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  int iStack_14;
  
  iVar7 = (vertex1->projected_vertex).screen_y >> 0x10;
  iVar3 = (vertex0->projected_vertex).screen_y >> 0x10;
  if (iVar3 != iVar7) {
    iVar4 = iVar3;
    pSVar6 = vertex1;
    if ((vertex1->projected_vertex).screen_y < (vertex0->projected_vertex).screen_y) {
      iVar4 = iVar7;
      pSVar6 = vertex0;
      vertex0 = vertex1;
      iVar7 = iVar3;
    }
    iVar2 = _DAT_01e61b5c * 0x50;
    *(int *)(&DAT_01e61b60 + iVar2) = iVar4;
    iVar3 = _DAT_01e62060;
    *(int *)(iVar2 + 0x1e61b64) = iVar7;
    if (iVar4 < iVar3) {
      _DAT_01e62060 = iVar4;
    }
    if (_DAT_01e62064 < iVar7) {
      _DAT_01e62064 = iVar7;
    }
    uVar5 = (pSVar6->projected_vertex).screen_y - (vertex0->projected_vertex).screen_y;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)(vertex0->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar7 *
            (longlong)((pSVar6->projected_vertex).screen_x - (vertex0->projected_vertex).screen_x);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b6c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b68) =
         (vertex0->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->u - vertex0->u);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b7c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b78) =
         vertex0->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->v - vertex0->v);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b84) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b80) =
         vertex0->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->r - vertex0->r);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b74) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b70) =
         vertex0->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->a - vertex0->a);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b94) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b90) =
         vertex0->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (_DAT_01c38b58 == 1) {
      if (_DAT_01c38b50 == 0) {
        iStack_14 = (vertex0->projected_vertex).inv_z;
        iVar3 = (pSVar6->projected_vertex).inv_z;
      }
      else {
        iStack_14 = 0x7fffffff - (vertex0->projected_vertex).transformed_z;
        iVar3 = 0x7fffffff - (pSVar6->projected_vertex).transformed_z;
      }
      lVar1 = (longlong)iVar7 * (longlong)(iVar3 - iStack_14);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar2 + 0x1e61b8c) = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      *(uint *)(iVar2 + 0x1e61b88) =
           iStack_14 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    else {
      lVar1 = (longlong)iVar7 *
              (longlong)
              ((pSVar6->projected_vertex).transformed_z - (vertex0->projected_vertex).transformed_z)
      ;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar2 + 0x1e61b8c) = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      *(uint *)(iVar2 + 0x1e61b88) =
           (vertex0->projected_vertex).transformed_z +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->g - vertex0->g);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b9c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b98) =
         vertex0->g + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->b - vertex0->b);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61ba4) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    _DAT_01e61b5c = _DAT_01e61b5c + 1;
    *(uint *)(iVar2 + 0x1e61ba0) =
         vertex0->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
