// Name: core_cloth.cpp_CCloth_FUN_00435210
// Address: 00435210
// Address Range: [[00435210, 00435235]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_FUN_00435210(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_FUN_00435210(CCloth *this_ptr)

{
  if (this_ptr->vertex_sort_buffer == (int *)0x0) {
    return;
  }
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->vertex_sort_buffer);
  this_ptr->vertex_sort_buffer = (int *)0x0;
  return;
}
