// Name: core_cloth.cpp_CCloth_free_FUN_0043e6a0
// Address: 0043e6a0
// Address Range: [[0043e6a0, 0043e6c5]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_free_FUN_0043e6a0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_free_FUN_0043e6a0(CCloth *this_ptr)

{
  if (this_ptr->vertex_sort_buffer == (int *)0x0) {
    return;
  }
  FUN_005c0336(this_ptr->vertex_sort_buffer);
  this_ptr->vertex_sort_buffer = (int *)0x0;
  return;
}
