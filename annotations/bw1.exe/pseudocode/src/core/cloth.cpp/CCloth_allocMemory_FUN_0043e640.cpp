// Name: core_cloth.cpp_CCloth_allocMemory_FUN_0043e640
// Address: 0043e640
// Address Range: [[0043e640, 0043e690]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_0043e640(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_0043e640(CCloth *this_ptr)

{
  int *piVar1;
  
  core_cloth_cpp_CCloth_free_FUN_0043e6a0(this_ptr);
  piVar1 = operator_new_array((this_ptr->model).vertex_count << 2);
  this_ptr->vertex_sort_buffer = piVar1;
  if (piVar1 != (int *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\cloth.cpp";
  g_CurrentLineNumber = 119;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CCloth::allocMemory - Out of memory");
  return;
}
