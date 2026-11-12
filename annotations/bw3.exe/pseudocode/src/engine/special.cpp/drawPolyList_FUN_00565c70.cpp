// Name: engine_special.cpp_drawPolyList_FUN_00565c70
// Address: 00565c70
// Address Range: [[00565c70, 00565da5]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolyList_FUN_00565c70(SRenderVertex *vertex_buffer,SMRGLPrimitiveQuad **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolyList_FUN_00565c70(SRenderVertex *vertex_buffer,SMRGLPrimitiveQuad **polygons,int polygon_count,int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  SRenderVertex *local_20;
  SRenderVertex *local_1c;
  SRenderVertex *local_18;
  SRenderVertex *local_14;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + polygon_count;
  if (_DAT_02cf6028 != (code *)0x0) {
    iVar2 = (*_DAT_02cf6028)(vertex_buffer,polygons,polygon_count,render_flags);
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
      (*_DAT_02cf6024)(&local_20,(pSVar1->base).base.count,render_flags);
    } while (iVar2 < polygon_count);
  }
  return 1;
}
