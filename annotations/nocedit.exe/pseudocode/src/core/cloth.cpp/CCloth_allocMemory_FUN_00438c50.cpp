// Name: core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
// Address: 00438c50
// Address Range: [[00438c50, 00438ca7]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(CCloth *this_ptr)

{
  int *piVar1;
  
  core_cloth_cpp_CCloth_free_FUN_00438cb0(this_ptr);
  piVar1 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     ((this_ptr->model).vertex_count << 2,"..\\core\\cloth.cpp",118);
  this_ptr->vertex_sort_buffer = piVar1;
  if (piVar1 != (int *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\cloth.cpp";
  g_CurrentLineNumber = 119;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::allocMemory - Out of memory");
  return;
}
