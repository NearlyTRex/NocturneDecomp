// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0
// Address: 004735c0
// Address Range: [[004735c0, 0047362d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0(CDemonRaytrace *this_ptr)

{
  void *array_memory;
  CDemonCube *pCVar1;
  int element_count;
  WatcomTypeInfo *type_info;
  
  element_count = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  type_info = &g_CDemonCubeTypeInfo;
  array_memory = operator_new_array(element_count * 0x34 + 4);
  pCVar1 = (CDemonCube *)__vec_new(array_memory,element_count,type_info);
  this_ptr->cube_data = pCVar1;
  if (pCVar1 != (CDemonCube *)0x0) {
    return;
  }
  g_CHAR_PTR_01d71de0 = "..\\core\\dtrace.cpp";
  g_INT_01d71de4 = 0xae;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
