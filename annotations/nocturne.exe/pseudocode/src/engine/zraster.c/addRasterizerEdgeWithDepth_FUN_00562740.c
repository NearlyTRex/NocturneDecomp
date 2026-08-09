// Name: engine_zraster.c_addRasterizerEdgeWithDepth_FUN_00562740
// Address: 00562740
// Address Range: [[00562740, 00562877]]
// Convention: __cdecl
// Signature: void __cdecl engine_zraster_c_addRasterizerEdgeWithDepth_FUN_00562740(SRenderVertex *v0,SRenderVertex *v1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_zraster_c_addRasterizerEdgeWithDepth_FUN_00562740(SRenderVertex *v0,SRenderVertex *v1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  SRenderVertex *pSVar7;
  
  iVar5 = (v1->projected_vertex).screen_y >> 0x10;
  iVar2 = (v0->projected_vertex).screen_y >> 0x10;
  if (iVar2 != iVar5) {
    iVar3 = iVar2;
    pSVar7 = v0;
    if ((v1->projected_vertex).screen_y < (v0->projected_vertex).screen_y) {
      iVar3 = iVar5;
      iVar5 = iVar2;
      pSVar7 = v1;
      v1 = v0;
    }
    iVar4 = _DAT_02de497c * 0x48;
    *(int *)(&DAT_02de4980 + iVar4) = iVar3;
    iVar2 = _DAT_02de4e00;
    *(int *)(iVar4 + 0x2de4984) = iVar5;
    if (iVar3 < iVar2) {
      _DAT_02de4e00 = iVar3;
    }
    if (_DAT_02de4e04 < iVar5) {
      _DAT_02de4e04 = iVar5;
    }
    *(int *)(iVar4 + 0x2de4988) = (pSVar7->projected_vertex).screen_x;
    *(int *)(iVar4 + 0x2de49a8) = (pSVar7->projected_vertex).transformed_z << 8;
    *(int *)(iVar4 + 0x2de4990) = pSVar7->r;
    uVar6 = (v1->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 *
            (longlong)((v1->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
    *(uint *)(iVar4 + 0x2de498c) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 *
            (longlong)
            (((v1->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z) *
            0x100);
    *(uint *)(iVar4 + 0x2de49ac) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(v1->r - pSVar7->r);
    *(uint *)(iVar4 + 0x2de4994) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar4 + 0x2de498c);
    *(uint *)(iVar4 + 0x2de4988) =
         *(int *)(iVar4 + 0x2de4988) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar4 + 0x2de49ac);
    *(int *)(iVar4 + 0x2de49a8) =
         *(int *)(iVar4 + 0x2de49a8) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar4 + 0x2de4994);
    _DAT_02de497c = _DAT_02de497c + 1;
    *(uint *)(iVar4 + 0x2de4990) =
         *(int *)(iVar4 + 0x2de4990) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
