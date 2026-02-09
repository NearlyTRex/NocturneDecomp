// Name: core_skeledit.cpp_CLodVert_copy_FUN_00599550
// Address: 00599550
// Address Range: [[00599550, 005995ba]]
// Convention: __cdecl
// Signature: CLodVert * __cdecl core_skeledit_cpp_CLodVert_copy_FUN_00599550(CLodVert *this_ptr,CLodVert *other)

#include "nocturne.h"

CLodVert * __cdecl core_skeledit_cpp_CLodVert_copy_FUN_00599550(CLodVert *this_ptr,CLodVert *other)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  
  bVar4 = 0;
  __STK();
  (this_ptr->position).x = (other->position).x;
  (this_ptr->position).y = (other->position).y;
  (this_ptr->position).z = (other->position).z;
  piVar2 = &other->material_id;
  piVar3 = &this_ptr->material_id;
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  this_ptr->vertex_remapping_index = other->vertex_remapping_index;
  this_ptr->adjacent_edge_count = other->adjacent_edge_count;
  piVar2 = other->adjacent_edge_indices;
  piVar3 = this_ptr->adjacent_edge_indices;
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  return this_ptr;
}
