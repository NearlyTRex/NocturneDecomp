// Name: shape_superopt.cpp_CComplexPolygon_free_FUN_005c79f0
// Address: 005c79f0
// Address Range: [[005c79f0, 005c7a89]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_free_FUN_005c79f0(CComplexPolygon *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_free_FUN_005c79f0(CComplexPolygon *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  this_ptr->polygon_count = 0;
  if (this_ptr->polygon_list != (CPoly **)0x0) {
    free(this_ptr->polygon_list);
  }
  this_ptr->polygon_list = (CPoly **)0x0;
  uVar2 = 0;
  if (this_ptr->edge_count != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      iVar3 = iVar3 + 8;
      uVar2 = uVar2 + 1;
      shape_memdbg_cpp_free_FUN_005fe659(*(void **)(iVar1 + (int)this_ptr->edge_array));
    } while (uVar2 < (uint)this_ptr->edge_count);
  }
  this_ptr->edge_count = 0;
  if (this_ptr->edge_array != (void *)0x0) {
    free(this_ptr->edge_array);
  }
  this_ptr->edge_array = (void *)0x0;
  this_ptr->expanded_edge_count = 0;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->expanded_edges);
  this_ptr->expanded_edges = (SExpandedEdge *)0x0;
  return;
}
