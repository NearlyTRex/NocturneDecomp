// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550
// Address: 00472550
// Address Range: [[00472550, 004725bd]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550(CDemonRaytrace *this_ptr)

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
  g_CHAR_PTR_01d046a0 = "..\\core\\dtrace.cpp";
  g_INT_01d046a4 = 0xae;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
