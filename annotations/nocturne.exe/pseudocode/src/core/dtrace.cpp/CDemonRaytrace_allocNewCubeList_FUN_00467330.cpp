// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330
// Address: 00467330
// Address Range: [[00467330, 0046739d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(CDemonRaytrace *this_ptr)

{
  void *array_memory;
  CDemonCube *pCVar1;
  int element_count;
  WatcomTypeInfo *type_info;
  
  element_count = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  type_info = &g_CDemonCubeTypeInfo_0059c8c0;
  array_memory = shape_memdbg_cpp_malloc_FUN_00564c18(element_count * 0x34 + 4);
  pCVar1 = (CDemonCube *)__vec_new(array_memory,element_count,type_info);
  this_ptr->cube_data = pCVar1;
  if (pCVar1 != (CDemonCube *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 174;
  core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
