// Name: shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20
// Address: 0051ef20
// Address Range: [[0051ef20, 0051efb8] [00604e3a, 00604e5d] [0060a3dd, 0060a43b]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodFace_copy_FUN_0051ef20(CLodFace *this_ptr,CLodFace *other)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodFace_copy_FUN_0051ef20(CLodFace *this_ptr,CLodFace *other)

{
  void *pvVar1;
  int iVar2;
  float (*pafVar3) [2];
  float (*pafVar4) [2];
  
  this_ptr->attribute_indices[0] = other->attribute_indices[0];
  this_ptr->attribute_indices[1] = other->attribute_indices[1];
  this_ptr->attribute_indices[2] = other->attribute_indices[2];
  this_ptr->submesh_id = other->submesh_id;
  this_ptr->vertex_idx_0 = other->vertex_idx_0;
  this_ptr->vertex_idx_1 = other->vertex_idx_1;
  this_ptr->vertex_idx_2 = other->vertex_idx_2;
  pafVar3 = other->uv_coords;
  pafVar4 = this_ptr->uv_coords;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (*pafVar4)[0] = (*pafVar3)[0];
    pafVar3 = (float (*) [2])(*pafVar3 + 1);
    pafVar4 = (float (*) [2])(*pafVar4 + 1);
  }
  this_ptr->edge_idx_0 = other->edge_idx_0;
  this_ptr->edge_idx_1 = other->edge_idx_1;
  this_ptr->edge_idx_2 = other->edge_idx_2;
  this_ptr->processed_flag = other->processed_flag;
  (this_ptr->normal).x = (other->normal).x;
  (this_ptr->normal).y = (other->normal).y;
  (this_ptr->normal).z = (other->normal).z;
  this_ptr->plane_distance = other->plane_distance;
  pvVar1 = __arrcopy
                     (this_ptr->edge_perpendiculars,other->edge_perpendiculars,3,&g_CVectorTypeInfo)
  ;
  *(float *)((int)pvVar1 + 0x24) = other->edge_dot_products[0];
  *(float *)((int)pvVar1 + 0x28) = other->edge_dot_products[1];
  *(float *)((int)pvVar1 + 0x2c) = other->edge_dot_products[2];
  *(int *)((int)pvVar1 + 0x30) = other->visited_stamp;
  *(int *)((int)pvVar1 + 0x34) = other->affected_by_edge_stamp;
  return;
}
