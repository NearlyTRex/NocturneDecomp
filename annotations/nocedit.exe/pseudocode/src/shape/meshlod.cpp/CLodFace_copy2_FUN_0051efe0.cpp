// Name: shape_meshlod.cpp_CLodFace_copy2_FUN_0051efe0
// Address: 0051efe0
// Address Range: [[0051efe0, 0051f079] [00604e16, 00604e39] [0060a37e, 0060a3dc]]
// Convention: __cdecl
// Signature: CLodFace * __cdecl shape_meshlod_cpp_CLodFace_copy2_FUN_0051efe0(CLodFace *this_ptr,CLodFace *source)

#include "nocturne.h"

CLodFace * __cdecl shape_meshlod_cpp_CLodFace_copy2_FUN_0051efe0(CLodFace *this_ptr,CLodFace *source)

{
  int iVar1;
  float (*pafVar2) [2];
  float (*pafVar3) [2];
  
  this_ptr->attribute_indices[0] = source->attribute_indices[0];
  this_ptr->attribute_indices[1] = source->attribute_indices[1];
  this_ptr->attribute_indices[2] = source->attribute_indices[2];
  this_ptr->submesh_id = source->submesh_id;
  this_ptr->vertex_idx_0 = source->vertex_idx_0;
  this_ptr->vertex_idx_1 = source->vertex_idx_1;
  this_ptr->vertex_idx_2 = source->vertex_idx_2;
  pafVar2 = source->uv_coords;
  pafVar3 = this_ptr->uv_coords;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*pafVar3)[0] = (*pafVar2)[0];
    pafVar2 = (float (*) [2])(*pafVar2 + 1);
    pafVar3 = (float (*) [2])(*pafVar3 + 1);
  }
  this_ptr->edge_idx_0 = source->edge_idx_0;
  this_ptr->edge_idx_1 = source->edge_idx_1;
  this_ptr->edge_idx_2 = source->edge_idx_2;
  this_ptr->processed_flag = source->processed_flag;
  if (&this_ptr->normal != &source->normal) {
    (this_ptr->normal).x = (source->normal).x;
    (this_ptr->normal).y = (source->normal).y;
    (this_ptr->normal).z = (source->normal).z;
  }
  this_ptr->plane_distance = source->plane_distance;
  __arr_op
            (this_ptr->edge_perpendiculars,source->edge_perpendiculars,3,0xc,
             core_actor_cpp_copyVector_FUN_00410360);
  this_ptr->edge_dot_products[0] = source->edge_dot_products[0];
  this_ptr->edge_dot_products[1] = source->edge_dot_products[1];
  this_ptr->edge_dot_products[2] = source->edge_dot_products[2];
  this_ptr->visited_stamp = source->visited_stamp;
  this_ptr->affected_by_edge_stamp = source->affected_by_edge_stamp;
  return this_ptr;
}
