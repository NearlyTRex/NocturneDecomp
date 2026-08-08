// Name: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_004f9620
// Address: 004f9620
// Address Range: [[004f9620, 004f982f]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupSoftwareEdgeWithZMode_FUN_004f9620(SRenderVertex *start_vertex,SRenderVertex *end_vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
    iVar2 = _DAT_01e52a68 * 0x48;
    *(int *)(&DAT_01e52a6c + iVar2) = iVar7;
    iVar3 = _DAT_01e52eec;
    *(int *)(iVar2 + 0x1e52a70) = iVar6;
    if (iVar7 < iVar3) {
      _DAT_01e52eec = iVar7;
    }
    if (_DAT_01e52ef0 < iVar6) {
      _DAT_01e52ef0 = iVar6;
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
    *(uint *)(iVar2 + 0x1e52a78) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a74) =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar5->u - start_vertex->u);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a88) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a84) =
         start_vertex->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar5->v - start_vertex->v);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a90) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a8c) =
         start_vertex->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar5->r - start_vertex->r);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a80) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a7c) =
         start_vertex->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar5->a - start_vertex->a);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52aa0) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a9c) =
         start_vertex->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_VertexPreprocessMode != 1) {
      lVar1 = (longlong)iVar7 *
              (longlong)
              ((pSVar5->projected_vertex).transformed_z -
              (start_vertex->projected_vertex).transformed_z);
      uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar2 + 0x1e52a98) = uVar4;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
      *(uint *)(iVar2 + 0x1e52a94) =
           (start_vertex->projected_vertex).transformed_z +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      _DAT_01e52a68 = _DAT_01e52a68 + 1;
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
    *(uint *)(iVar2 + 0x1e52a98) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a94) =
         iVar6 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    _DAT_01e52a68 = _DAT_01e52a68 + 1;
  }
  return;
}
