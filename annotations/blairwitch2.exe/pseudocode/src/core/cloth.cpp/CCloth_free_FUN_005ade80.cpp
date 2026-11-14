// Name: core_cloth.cpp_CCloth_free_FUN_005ade80
// Address: 005ade80
// Address Range: [[005ade80, 005adea5]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_free_FUN_005ade80(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_free_FUN_005ade80(CCloth *this_ptr)

{
  if (this_ptr->vertex_sort_buffer == (int *)0x0) {
    return;
  }
  FUN_005b7fce(this_ptr->vertex_sort_buffer);
  this_ptr->vertex_sort_buffer = (int *)0x0;
  return;
}
