// Name: engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
// Address: 004f9a10
// Address Range: [[004f9a10, 004f9ac0]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2)

#include "nocturne.h"

int __cdecl engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (DAT_006b0280 == 1) {
    local_24 = (v1->projected_vertex).screen_x - (v0->projected_vertex).screen_x;
    local_20 = (v1->projected_vertex).screen_y - (v0->projected_vertex).screen_y;
    local_1c = (v2->projected_vertex).screen_x - (v1->projected_vertex).screen_x;
    local_18 = (v2->projected_vertex).screen_y - (v1->projected_vertex).screen_y;
  }
  else {
    local_1c = (v1->projected_vertex).screen_x - (v0->projected_vertex).screen_x;
    local_18 = (v1->projected_vertex).screen_y - (v0->projected_vertex).screen_y;
    local_24 = (v2->projected_vertex).screen_x - (v1->projected_vertex).screen_x;
    local_20 = (v2->projected_vertex).screen_y - (v1->projected_vertex).screen_y;
  }
  iVar3 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar1 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar2 = iVar4 - iVar3;
  return (uint)((SBORROW4(iVar4,iVar3) != SBORROW4(iVar2,uVar1)) != (int)(iVar2 - uVar1) < 0);
}
