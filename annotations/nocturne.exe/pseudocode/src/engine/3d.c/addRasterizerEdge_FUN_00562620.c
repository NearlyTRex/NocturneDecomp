// Name: engine_3d.c_addRasterizerEdge_FUN_00562620
// Address: 00562620
// Address Range: [[00562620, 0056273b]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_addRasterizerEdge_FUN_00562620(SRenderVertex *v0,SRenderVertex *v1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_addRasterizerEdge_FUN_00562620(SRenderVertex *v0,SRenderVertex *v1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  uint uVar8;
  
  iVar6 = (v1->projected_vertex).screen_y >> 0x10;
  iVar2 = (v0->projected_vertex).screen_y >> 0x10;
  if (iVar2 != iVar6) {
    iVar3 = iVar2;
    pSVar7 = v0;
    if ((v1->projected_vertex).screen_y < (v0->projected_vertex).screen_y) {
      iVar3 = iVar6;
      iVar6 = iVar2;
      pSVar7 = v1;
      v1 = v0;
    }
    iVar4 = _DAT_02de497c * 0x48;
    *(int *)(&DAT_02de4980 + iVar4) = iVar3;
    iVar2 = _DAT_02de4e00;
    *(int *)(iVar4 + 0x2de4984) = iVar6;
    if (iVar3 < iVar2) {
      _DAT_02de4e00 = iVar3;
    }
    if (_DAT_02de4e04 < iVar6) {
      _DAT_02de4e04 = iVar6;
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
    *(uint *)(iVar4 + 0x2de498c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar4 + 0x2de4988) =
         (pSVar7->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar6 *
            (longlong)
            (((v1->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z) *
            0x100);
    *(uint *)(iVar4 + 0x2de49ac) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar4 + 0x2de49ac);
    _DAT_02de497c = _DAT_02de497c + 1;
    *(uint *)(iVar4 + 0x2de49a8) =
         ((pSVar7->projected_vertex).transformed_z * 0x100 - _DAT_01b4d1fc) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
