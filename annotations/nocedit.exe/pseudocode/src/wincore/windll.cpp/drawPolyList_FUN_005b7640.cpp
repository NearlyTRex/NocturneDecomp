// Name: wincore_windll.cpp_drawPolyList_FUN_005b7640
// Address: 005b7640
// Address Range: [[005b7640, 005b7775]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_drawPolyList_FUN_005b7640(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_drawPolyList_FUN_005b7640(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags)

{
  SMRGLPrimitiveTriangle *pSVar1;
  int iVar2;
  SRenderVertex *local_20;
  SRenderVertex *local_1c;
  SRenderVertex *local_18;
  SRenderVertex *local_14;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList != (APIDLL_drawPolyList *)0x0) {
    iVar2 = (*g_APIDLL_drawPolyList)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar2;
  }
  iVar2 = 0;
  if (0 < polygon_count) {
    do {
      pSVar1 = *polygons;
      local_20 = vertex_buffer + pSVar1->vertices[0].vertex_index;
      local_1c = vertex_buffer + pSVar1->vertices[1].vertex_index;
      local_18 = vertex_buffer + pSVar1->vertices[2].vertex_index;
      if ((pSVar1->base).base.count == 4) {
        local_14 = vertex_buffer + pSVar1[1].base.base.type;
      }
      local_20->u = pSVar1->vertices[0].texture_u;
      local_20->v = pSVar1->vertices[0].texture_v;
      local_1c->u = pSVar1->vertices[1].texture_u;
      local_1c->v = pSVar1->vertices[1].texture_v;
      local_18->u = pSVar1->vertices[2].texture_u;
      local_18->v = pSVar1->vertices[2].texture_v;
      if ((pSVar1->base).base.count == 4) {
        local_14->u = pSVar1[1].base.base.count;
        local_14->v = pSVar1[1].base.surface_normal.A;
      }
      polygons = polygons + 1;
      iVar2 = iVar2 + 1;
      (*g_APIDLL_drawPolygon2)(&local_20,(pSVar1->base).base.count,render_flags);
    } while (iVar2 < polygon_count);
  }
  return 1;
}
