// Name: core_skeledit.cpp_LodVert_copy_FUN_00599550
// Address: 00599550
// Address Range: [[00599550, 005995ba]]
// Convention: __cdecl
// Signature: CLodVert * core_skeledit.cpp_LodVert_copy_FUN_00599550(void * n1, void * n2, CLodVert * other2, CLodVert * other3)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: n1 */

CLodVert * __cdecl
core_skeledit_cpp_LodVert_copy_FUN_00599550(void *n1,void *n2,CLodVert *other2,CLodVert *other3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  
  bVar4 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xc);
  (other2->position).x = (other3->position).x;
  (other2->position).y = (other3->position).y;
  (other2->position).z = (other3->position).z;
  piVar2 = &other3->material_id;
  piVar3 = &other2->material_id;
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  other2->vertex_remapping_index = other3->vertex_remapping_index;
  other2->adjacent_edge_count = other3->adjacent_edge_count;
  piVar2 = other3->adjacent_edge_indices;
  piVar3 = other2->adjacent_edge_indices;
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  return other2;
}
