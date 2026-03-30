// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
// Address: 00494380
// Address Range: [[00494380, 004943f7]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace *this_ptr)

{
  void *array_memory;
  CDemonCube *pCVar1;
  int element_count;
  WatcomTypeInfo *type_info;
  
  element_count = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  type_info = &g_CDemonCubeTypeInfo;
  array_memory = shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                           (element_count * 0x34 + 4,"..\\core\\dtrace.cpp",0xad);
  pCVar1 = (CDemonCube *)__vec_new(array_memory,element_count,type_info);
  this_ptr->cube_data = pCVar1;
  if (pCVar1 != (CDemonCube *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0xae;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
