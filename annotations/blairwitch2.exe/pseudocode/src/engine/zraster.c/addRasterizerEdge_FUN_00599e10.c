// Name: engine_zraster.c_addRasterizerEdge_FUN_00599e10
// Address: 00599e10
// Address Range: [[00599e10, 00599f2b]]
// Convention: __cdecl
// Signature: void __cdecl engine_zraster_c_addRasterizerEdge_FUN_00599e10(SRenderVertex *v0,SRenderVertex *v1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_zraster_c_addRasterizerEdge_FUN_00599e10(SRenderVertex *v0,SRenderVertex *v1)

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
    iVar4 = _DAT_026672a8 * 0x50;
    *(int *)(&DAT_026672ac + iVar4) = iVar3;
    iVar2 = _DAT_026677ac;
    *(int *)(iVar4 + 0x26672b0) = iVar6;
    if (iVar3 < iVar2) {
      _DAT_026677ac = iVar3;
    }
    if (_DAT_026677b0 < iVar6) {
      _DAT_026677b0 = iVar6;
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
    *(uint *)(iVar4 + 0x26672b8) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar4 + 0x26672b4) =
         (pSVar7->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar6 *
            (longlong)
            (((v1->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z) *
            0x100);
    *(uint *)(iVar4 + 0x26672d8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar4 + 0x26672d8);
    _DAT_026672a8 = _DAT_026672a8 + 1;
    *(uint *)(iVar4 + 0x26672d4) =
         ((pSVar7->projected_vertex).transformed_z * 0x100 - _DAT_01ba5714) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
