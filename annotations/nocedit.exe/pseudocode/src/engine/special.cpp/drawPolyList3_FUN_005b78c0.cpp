// Name: engine_special.cpp_drawPolyList3_FUN_005b78c0
// Address: 005b78c0
// Address Range: [[005b78c0, 005b7984]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolyList3_FUN_005b78c0(SRenderVertex *vertex_buffer,ushort *polygons,int polygon_count,int render_flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawPolyList3_FUN_005b78c0(SRenderVertex *vertex_buffer,ushort *polygons,int polygon_count,int render_flags)

{
  int iVar2;
  int iVar1;
  SRenderVertex *local_1c;
  SRenderVertex *local_18;
  SRenderVertex *local_14;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList3 != (APIDLL_drawPolyList3 *)0x0) {
    iVar2 = (*g_APIDLL_drawPolyList3)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar2;
  }
  iVar1 = 0;
  if (0 < polygon_count) {
    do {
      local_1c = vertex_buffer + *polygons;
      local_18 = vertex_buffer + polygons[1];
      local_14 = vertex_buffer + polygons[2];
      polygons = polygons + 3;
      iVar1 = iVar1 + 1;
      (*g_APIDLL_drawPolygon2)(&local_1c,3,render_flags);
    } while (iVar1 < polygon_count);
  }
  return 1;
}
