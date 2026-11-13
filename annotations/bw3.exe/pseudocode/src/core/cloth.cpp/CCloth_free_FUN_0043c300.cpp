// Name: core_cloth.cpp_CCloth_free_FUN_0043c300
// Address: 0043c300
// Address Range: [[0043c300, 0043c325]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_free_FUN_0043c300(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_free_FUN_0043c300(CCloth *this_ptr)

{
  if (this_ptr->vertex_sort_buffer == (int *)0x0) {
    return;
  }
  FUN_005a30b6(this_ptr->vertex_sort_buffer);
  this_ptr->vertex_sort_buffer = (int *)0x0;
  return;
}
