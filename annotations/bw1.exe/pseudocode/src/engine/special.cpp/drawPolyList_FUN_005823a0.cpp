// Name: engine_special.cpp_drawPolyList_FUN_005823a0
// Address: 005823a0
// Address Range: [[005823a0, 005824d5]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolyList_FUN_005823a0(SRenderVertex *vertex_buffer,SMRGLPrimitiveQuad **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolyList_FUN_005823a0(SRenderVertex *vertex_buffer,SMRGLPrimitiveQuad **polygons,int polygon_count,int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  SRenderVertex *local_20;
  SRenderVertex *local_1c;
  SRenderVertex *local_18;
  SRenderVertex *local_14;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + polygon_count;
  if (_DAT_02c833cc != (code *)0x0) {
    iVar2 = (*_DAT_02c833cc)(vertex_buffer,polygons,polygon_count,render_flags);
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
        local_14 = vertex_buffer + pSVar1->vertices[3].vertex_index;
      }
      local_20->u = pSVar1->vertices[0].texture_u;
      local_20->v = pSVar1->vertices[0].texture_v;
      local_1c->u = pSVar1->vertices[1].texture_u;
      local_1c->v = pSVar1->vertices[1].texture_v;
      local_18->u = pSVar1->vertices[2].texture_u;
      local_18->v = pSVar1->vertices[2].texture_v;
      if ((pSVar1->base).base.count == 4) {
        local_14->u = pSVar1->vertices[3].texture_u;
        local_14->v = pSVar1->vertices[3].texture_v;
      }
      polygons = polygons + 1;
      iVar2 = iVar2 + 1;
      (*_DAT_02c833c8)(&local_20,(pSVar1->base).base.count,render_flags);
    } while (iVar2 < polygon_count);
  }
  return 1;
}
