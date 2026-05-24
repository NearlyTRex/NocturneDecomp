// Name: engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
// Address: 00552150
// MANUAL RECONSTRUCTION
// Address Range: [[00552150, 00552200]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2)

#include "nocturne.h"

int __cdecl engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;

  if (g_CullingMode == 1) {
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
  return (uint)((longlong)local_20 * (longlong)local_1c <
                (longlong)local_24 * (longlong)local_18);
}
