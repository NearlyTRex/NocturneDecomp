// Name: engine_special.cpp_drawPolyList2_FUN_00565db0
// Address: 00565db0
// Address Range: [[00565db0, 00565eec]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolyList2_FUN_00565db0(SRenderVertex *vertex_buffer,SInputFace **polygons,int polygon_count,int render_flags )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolyList2_FUN_00565db0(SRenderVertex *vertex_buffer,SInputFace **polygons,int polygon_count,int render_flags )

{
  SInputFace *pSVar1;
  int iVar2;
  SRenderVertex *local_1c;
  SRenderVertex *local_18;
  SRenderVertex *local_14;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + polygon_count;
  if (_DAT_02cf602c != (code *)0x0) {
    iVar2 = (*_DAT_02cf602c)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar2;
  }
  if (0 < polygon_count) {
    iVar2 = 0;
    do {
      pSVar1 = *polygons;
      local_1c = vertex_buffer + (pSVar1->vertex_indices).vertex_index_0;
      local_18 = vertex_buffer + (pSVar1->vertex_indices).vertex_index_1;
      local_14 = vertex_buffer + (pSVar1->vertex_indices).vertex_index_2;
      local_1c->u = (uint)pSVar1->u_coord_0 << 8;
      local_1c->v = (uint)pSVar1->v_coord_0 << 8;
      local_18->u = (uint)pSVar1->u_coord_1 << 8;
      local_18->v = (uint)pSVar1->v_coord_1 << 8;
      local_14->u = (uint)pSVar1->u_coord_2 << 8;
      local_14->v = (uint)pSVar1->v_coord_2 << 8;
      (*_DAT_02cf6024)(&local_1c,3,render_flags);
      iVar2 = iVar2 + 1;
      polygons = polygons + 1;
    } while (iVar2 < polygon_count);
  }
  return 1;
}
