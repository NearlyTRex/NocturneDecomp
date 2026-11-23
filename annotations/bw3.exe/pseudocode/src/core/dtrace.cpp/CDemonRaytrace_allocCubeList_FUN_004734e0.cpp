// Name: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_004734e0
// Address: 004734e0
// Address Range: [[004734e0, 0047352d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_004734e0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_004734e0(CDemonRaytrace *this_ptr)

{
  SVoxelCubeMetadata *pSVar1;
  
  pSVar1 = (SVoxelCubeMetadata *)calloc
                     (0x58,(this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                           (this_ptr->grid_coord).z);
  this_ptr->cube_list = pSVar1;
  if (pSVar1 != (SVoxelCubeMetadata *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 136;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
