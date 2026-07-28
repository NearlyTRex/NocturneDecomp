// Name: engine_special.cpp_drawPolyList_FUN_00532680
// Address: 00532680
// Address Range: [[00532680, 005327b5]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolyList_FUN_00532680(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolyList_FUN_00532680(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags)

{
  SMRGLPrimitiveTriangle *pSVar1;
  int iVar2;
  SRenderVertex *local_20;
  SRenderVertex *local_1c;
  SRenderVertex *local_18;
  SRenderVertex *local_14;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + polygon_count;
  if (_DAT_02dc9db0 != (code *)0x0) {
    iVar2 = (*_DAT_02dc9db0)(vertex_buffer,polygons,polygon_count,render_flags);
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
        local_14->v = (int)pSVar1[1].base.surface_normal.A;
      }
      polygons = polygons + 1;
      iVar2 = iVar2 + 1;
      (*_DAT_02dc9dac)(&local_20,(pSVar1->base).base.count,render_flags);
    } while (iVar2 < polygon_count);
  }
  return 1;
}
