// Name: core_cloth.cpp_CCloth_allocMemory_FUN_004351b0
// Address: 004351b0
// Address Range: [[004351b0, 00435200]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(CCloth *this_ptr)

{
  void *pvVar1;
  
  core_cloth_cpp_FUN_00435210(this_ptr);
  pvVar1 = shape_memdbg_cpp_malloc_FUN_00564c18((this_ptr->model).vertex_count << 2);
  this_ptr->vertices[0x300].secondary_velocity.x = (float)pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\cloth.cpp";
  INT_01cc4804 = 0x77;
  core_main_c_FUN_004c8440("CCloth::allocMemory - Out of memory");
  return;
}
