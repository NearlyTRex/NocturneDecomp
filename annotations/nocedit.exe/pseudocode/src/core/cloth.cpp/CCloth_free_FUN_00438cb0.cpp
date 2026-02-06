// Name: core_cloth.cpp_CCloth_free_FUN_00438cb0
// Address: 00438cb0
// Address Range: [[00438cb0, 00438ced]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_free_FUN_00438cb0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_free_FUN_00438cb0(CCloth *this_ptr)

{
  if (this_ptr->vertex_sort_buffer == (int *)0x0) {
    return;
  }
  g_CurrentDebugFilename = "..\\core\\cloth.cpp";
  g_CurrentDebugLine = 0x85;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->vertex_sort_buffer);
  this_ptr->vertex_sort_buffer = (int *)0x0;
  return;
}
