// Name: shape_superopt.cpp_SExpandedEdge_copy_FUN_005d8710
// Address: 005d8710
// Address Range: [[005d8710, 005d87b2]]
// Convention: __cdecl
// Signature: SExpandedEdge * __cdecl shape_superopt_cpp_SExpandedEdge_copy_FUN_005d8710(SExpandedEdge *this_ptr,SExpandedEdge *other)

#include "nocturne.h"

SExpandedEdge * __cdecl shape_superopt_cpp_SExpandedEdge_copy_FUN_005d8710(SExpandedEdge *this_ptr,SExpandedEdge *other)

{
  this_ptr->start_vertex_index = other->start_vertex_index;
  this_ptr->end_vertex_index = other->end_vertex_index;
  this_ptr->start_side = other->start_side;
  this_ptr->end_side = other->end_side;
  *(uint *)&(this_ptr->start_pos).x = *(uint *)&(other->start_pos).x;
  *(uint *)((int)&(this_ptr->start_pos).x + 4) =
       *(uint *)((int)&(other->start_pos).x + 4);
  *(uint *)&(this_ptr->start_pos).y = *(uint *)&(other->start_pos).y;
  *(uint *)((int)&(this_ptr->start_pos).y + 4) =
       *(uint *)((int)&(other->start_pos).y + 4);
  *(uint *)&(this_ptr->start_pos).z = *(uint *)&(other->start_pos).z;
  *(uint *)((int)&(this_ptr->start_pos).z + 4) =
       *(uint *)((int)&(other->start_pos).z + 4);
  *(uint *)&(this_ptr->end_pos).x = *(uint *)&(other->end_pos).x;
  *(uint *)((int)&(this_ptr->end_pos).x + 4) = *(uint *)((int)&(other->end_pos).x + 4);
  *(uint *)&(this_ptr->end_pos).y = *(uint *)&(other->end_pos).y;
  *(uint *)((int)&(this_ptr->end_pos).y + 4) = *(uint *)((int)&(other->end_pos).y + 4);
  (this_ptr->end_pos).z = (other->end_pos).z;
  *(uint *)this_ptr->start_uv = *(uint *)other->start_uv;
  *(uint *)((int)this_ptr->start_uv + 4) = *(uint *)((int)other->start_uv + 4);
  *(uint *)(this_ptr->start_uv + 1) = *(uint *)(other->start_uv + 1);
  *(uint *)((int)this_ptr->start_uv + 0xc) = *(uint *)((int)other->start_uv + 0xc);
  *(uint *)this_ptr->end_uv = *(uint *)other->end_uv;
  *(uint *)((int)this_ptr->end_uv + 4) = *(uint *)((int)other->end_uv + 4);
  *(uint *)(this_ptr->end_uv + 1) = *(uint *)(other->end_uv + 1);
  *(uint *)((int)this_ptr->end_uv + 0xc) = *(uint *)((int)other->end_uv + 0xc);
  return this_ptr;
}
