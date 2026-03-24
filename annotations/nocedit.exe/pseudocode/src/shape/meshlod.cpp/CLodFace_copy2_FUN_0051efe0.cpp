// Name: shape_meshlod.cpp_CLodFace_copy2_FUN_0051efe0
// Address: 0051efe0
// Address Range: [[0051efe0, 0051f079] [00604e16, 00604e39] [0060a37e, 0060a3dc]]
// Convention: __cdecl
// Signature: CLodFace * __cdecl shape_meshlod_cpp_CLodFace_copy2_FUN_0051efe0(CLodFace *destination,CLodFace *source)

#include "nocturne.h"

CLodFace * __cdecl shape_meshlod_cpp_CLodFace_copy2_FUN_0051efe0(CLodFace *destination,CLodFace *source)

{
  int iVar1;
  float (*pafVar2) [2];
  float (*pafVar3) [2];
  
  destination->attribute_indices[0] = source->attribute_indices[0];
  destination->attribute_indices[1] = source->attribute_indices[1];
  destination->attribute_indices[2] = source->attribute_indices[2];
  destination->submesh_id = source->submesh_id;
  destination->vertex_idx_0 = source->vertex_idx_0;
  destination->vertex_idx_1 = source->vertex_idx_1;
  destination->vertex_idx_2 = source->vertex_idx_2;
  pafVar2 = source->uv_coords;
  pafVar3 = destination->uv_coords;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*pafVar3)[0] = (*pafVar2)[0];
    pafVar2 = (float (*) [2])(*pafVar2 + 1);
    pafVar3 = (float (*) [2])(*pafVar3 + 1);
  }
  destination->edge_idx_0 = source->edge_idx_0;
  destination->edge_idx_1 = source->edge_idx_1;
  destination->edge_idx_2 = source->edge_idx_2;
  destination->processed_flag = source->processed_flag;
  if (&destination->normal != &source->normal) {
    (destination->normal).x = (source->normal).x;
    (destination->normal).y = (source->normal).y;
    (destination->normal).z = (source->normal).z;
  }
  destination->plane_distance = source->plane_distance;
  __arr_op
            (destination->edge_perpendiculars,source->edge_perpendiculars,3,0xc,
             core_actor_cpp_copyVector_FUN_00410360);
  destination->edge_dot_products[0] = source->edge_dot_products[0];
  destination->edge_dot_products[1] = source->edge_dot_products[1];
  destination->edge_dot_products[2] = source->edge_dot_products[2];
  destination->visited_stamp = source->visited_stamp;
  destination->affected_by_edge_stamp = source->affected_by_edge_stamp;
  return destination;
}
