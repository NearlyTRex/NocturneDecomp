// Name: engine_special.cpp_drawPolyList2_FUN_0055fa90
// Address: 0055fa90
// Address Range: [[0055fa90, 0055fbcc]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolyList2_FUN_0055fa90(SRenderVertex *vertex_buffer,SInputFace **polygons,int polygon_count,int render_flags )

#include "nocturne.h"

int __cdecl engine_special_cpp_drawPolyList2_FUN_0055fa90(SRenderVertex *vertex_buffer,SInputFace **polygons,int polygon_count,int render_flags )

{
  SInputFace *pSVar1;
  int iVar2;
  SRenderVertex *local_1c;
  SRenderVertex *local_18;
  SRenderVertex *local_14;
  
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_PTR_0264bc00 != (byte *)0x0) {
    iVar2 = (*(code *)g_PTR_0264bc00)(vertex_buffer,polygons,polygon_count,render_flags);
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
      (*(code *)g_PTR_0264bbf8)(&local_1c,3,render_flags);
      iVar2 = iVar2 + 1;
      polygons = polygons + 1;
    } while (iVar2 < polygon_count);
  }
  return 1;
}
