// Name: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_004734e0
// Address: 004734e0
// Address Range: [[004734e0, 0047352d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_004734e0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_004734e0(CDemonRaytrace *this_ptr)

{
  SVoxelCubeMetadata *pSVar1;
  
  pSVar1 = (SVoxelCubeMetadata *)
           calloc
                     (0x58,(this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                           (this_ptr->grid_coord).z);
  this_ptr->cube_list = pSVar1;
  if (pSVar1 != (SVoxelCubeMetadata *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dtrace.cpp";
  _DAT_01d71de4 = 0x88;
  core_main_c_FUN_004e4330("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
