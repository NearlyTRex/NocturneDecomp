// Name: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00467250
// Address: 00467250
// Address Range: [[00467250, 0046729d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00467250(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00467250(CDemonRaytrace *this_ptr)

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
  core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
