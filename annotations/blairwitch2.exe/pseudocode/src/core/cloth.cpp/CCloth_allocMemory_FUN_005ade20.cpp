// Name: core_cloth.cpp_CCloth_allocMemory_FUN_005ade20
// Address: 005ade20
// Address Range: [[005ade20, 005ade70]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_005ade20(CCloth *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_005ade20(CCloth *this_ptr)

{
  int *piVar1;
  
  core_cloth_cpp_CCloth_free_FUN_005ade80(this_ptr);
  piVar1 = (int *)operator_new_array((this_ptr->model).vertex_count << 2);
  this_ptr->vertex_sort_buffer = piVar1;
  if (piVar1 != (int *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\cloth.cpp";
  _DAT_01d046a4 = 0x77;
  core_main_c_FUN_004e4500("CCloth::allocMemory - Out of memory");
  return;
}
