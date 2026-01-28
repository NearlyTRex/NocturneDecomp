// Name: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
// Address: 00494270
// Address Range: [[00494270, 004942c7]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00494270(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00494270(CDemonRaytrace *this_ptr)

{
  SVoxelCubeMetadata *pSVar1;
  
  pSVar1 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (0x58,(this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                           (this_ptr->grid_coord).z,"..\\core\\dtrace.cpp",0x87);
  this_ptr->cube_list = pSVar1;
  if (pSVar1 != (SVoxelCubeMetadata *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0x88;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
