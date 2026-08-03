// Name: core_cloth.cpp_CCloth_allocMemory_FUN_004351b0
// Address: 004351b0
// Address Range: [[004351b0, 00435200]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(CCloth *this_ptr)

{
  int *piVar1;
  
  core_cloth_cpp_FUN_00435210(this_ptr);
  piVar1 = shape_memdbg_cpp_malloc_FUN_00564c18((this_ptr->model).vertex_count << 2);
  this_ptr->vertex_sort_buffer = piVar1;
  if (piVar1 != (int *)0x0) {
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\core\\cloth.cpp";
  g_INT_01cc4804 = 0x77;
  core_main_c_FUN_004c8440("CCloth::allocMemory - Out of memory");
  return;
}
