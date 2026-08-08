// Name: engine_special.cpp_drawPolyList2_FUN_005b7780
// Address: 005b7780
// Address Range: [[005b7780, 005b78bc]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolyList2_FUN_005b7780(SRenderVertex *vertex_buffer,SInputFace **polygons,int polygon_count,int render_flags )

#include "nocturne.h"

int __cdecl engine_special_cpp_drawPolyList2_FUN_005b7780(SRenderVertex *vertex_buffer,SInputFace **polygons,int polygon_count,int render_flags )

{
  int iVar1;
  int iVar2;
  SRenderVertex *local_1c;
  SRenderVertex *local_18;
  SRenderVertex *local_14;
  ushort *puVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList2 != (APIDLL_drawPolyList2 *)0x0) {
    iVar1 = (*g_APIDLL_drawPolyList2)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar1;
  }
  if (0 < polygon_count) {
    iVar2 = 0;
    do {
      puVar1 = (ushort *)*polygons;
      local_1c = vertex_buffer + *puVar1;
      local_18 = vertex_buffer + puVar1[1];
      local_14 = vertex_buffer + puVar1[2];
      local_1c->u = (uint)puVar1[3] << 8;
      local_1c->v = (uint)puVar1[6] << 8;
      local_18->u = (uint)puVar1[4] << 8;
      local_18->v = (uint)puVar1[7] << 8;
      local_14->u = (uint)puVar1[5] << 8;
      local_14->v = (uint)puVar1[8] << 8;
      (*g_APIDLL_drawPolygon2)(&local_1c,3,render_flags);
      iVar2 = iVar2 + 1;
      polygons = polygons + 1;
    } while (iVar2 < polygon_count);
  }
  return 1;
}
