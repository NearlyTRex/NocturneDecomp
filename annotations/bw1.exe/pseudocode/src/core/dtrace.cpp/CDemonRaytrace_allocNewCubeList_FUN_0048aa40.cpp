// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40
// Address: 0048aa40
// Address Range: [[0048aa40, 0048aaad]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40(CDemonRaytrace *this_ptr)

{
  void *array_memory;
  CDemonCube *pCVar1;
  int element_count;
  WatcomTypeInfo *type_info;
  
  element_count = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  type_info = &g_CDemonCubeTypeInfo;
  array_memory = (void *)operator_new_array(element_count * 0x34 + 4);
  pCVar1 = (CDemonCube *)__vec_new(array_memory,element_count,type_info);
  this_ptr->cube_data = pCVar1;
  if (pCVar1 != (CDemonCube *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dtrace.cpp";
  _DAT_01d1d404 = 0xae;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
