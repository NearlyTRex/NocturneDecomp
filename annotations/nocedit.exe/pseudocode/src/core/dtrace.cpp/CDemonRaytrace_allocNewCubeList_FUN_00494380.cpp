// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
// Address: 00494380
// Address Range: [[00494380, 004943f7]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace * this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace *this_ptr)

{
  void *array_memory;
  CDemonCube *pCVar1;
  WatcomTypeInfo *unaff_EBX;
  WatcomTypeInfo *element_count;
  
  element_count = &g_CDemonCubeTypeInfo;
  array_memory = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((this_ptr->grid_coord).z *
                            (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * 0x34 + 4,
                            "..\\core\\dtrace.cpp",0xad);
  pCVar1 = (CDemonCube *)
           crt_memory_c_constructTypedObjectArray_FUN_00601272
                     (array_memory,(int)element_count,unaff_EBX);
  this_ptr->cube_data = pCVar1;
  if (pCVar1 != (CDemonCube *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0xae;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
