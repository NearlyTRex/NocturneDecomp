// Name: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00467250
// Address: 00467250
// Address Range: [[00467250, 0046729d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00467250(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00467250(CDemonRaytrace *this_ptr)

{
  SVoxelCubeMetadata *pSVar1;
  
  pSVar1 = (SVoxelCubeMetadata *)
           FUN_00565c50
                     (0x58,(this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                           (this_ptr->grid_coord).z);
  this_ptr->cube_list = pSVar1;
  if (pSVar1 != (SVoxelCubeMetadata *)0x0) {
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\core\\dtrace.cpp";
  g_INT_01cc4804 = 0x88;
  core_main_c_FUN_004c8440("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
