// Name: shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20
// Address: 0051ef20
// Address Range: [[0051ef20, 0051efb8]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodFace_copy_FUN_0051ef20(CLodFace *this_ptr,CLodFace *other)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodFace_copy_FUN_0051ef20(CLodFace *this_ptr,CLodFace *other)

{
  void *pvVar1;
  int iVar2;
  float (*pafVar3) [2];
  uint *puVar4;
  float (*pafVar5) [2];
  uint *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_ptr->attribute_indices[0] = other->attribute_indices[0];
  this_ptr->attribute_indices[1] = other->attribute_indices[1];
  this_ptr->attribute_indices[2] = other->attribute_indices[2];
  this_ptr->submesh_id = other->submesh_id;
  this_ptr->vertex_idx_0 = other->vertex_idx_0;
  this_ptr->vertex_idx_1 = other->vertex_idx_1;
  this_ptr->vertex_idx_2 = other->vertex_idx_2;
  pafVar3 = other->uv_coords;
  pafVar5 = this_ptr->uv_coords;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (*pafVar5)[0] = (*pafVar3)[0];
    pafVar3 = (float (*) [2])(*pafVar3 + 1);
    pafVar5 = (float (*) [2])(*pafVar5 + 1);
  }
  this_ptr->edge_idx_0 = other->edge_idx_0;
  this_ptr->edge_idx_1 = other->edge_idx_1;
  this_ptr->edge_idx_2 = other->edge_idx_2;
  this_ptr->processed_flag = other->processed_flag;
  (this_ptr->normal).x = (other->normal).x;
  (this_ptr->normal).y = (other->normal).y;
  (this_ptr->normal).z = (other->normal).z;
  this_ptr->plane_distance = other->plane_distance;
  pvVar1 = crt_memory_c_copyObjectArray_FUN_00600bc2
                     (this_ptr->edge_perpendiculars,other->edge_perpendiculars,3,&g_CVectorTypeInfo)
  ;
  puVar6 = (uint *)((int)pvVar1 + (uint)bVar7 * -8 + 0x28);
  puVar4 = (uint *)((int)other + (uint)bVar7 * -8 + 0x7c);
  *(float *)((int)pvVar1 + 0x24) = other->edge_dot_products[0];
  *puVar6 = *puVar4;
  puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
  *(int *)((int)pvVar1 + 0x30) = other->visited_stamp;
  *(int *)((int)pvVar1 + 0x34) = other->affected_by_edge_stamp;
  return;
}
