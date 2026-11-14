// Name: core_cloth.cpp_CCloth_allocMemory_FUN_0043c2a0
// Address: 0043c2a0
// Address Range: [[0043c2a0, 0043c2f0]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_0043c2a0(CCloth *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_0043c2a0(CCloth *this_ptr)

{
  int *piVar1;
  
  core_cloth_cpp_CCloth_free_FUN_0043c300(this_ptr);
  piVar1 = (int *)operator_new_array((this_ptr->model).vertex_count << 2);
  this_ptr->vertex_sort_buffer = piVar1;
  if (piVar1 != (int *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\cloth.cpp";
  _DAT_01d71de4 = 0x77;
  core_main_c_FUN_004e4330("CCloth::allocMemory - Out of memory");
  return;
}
