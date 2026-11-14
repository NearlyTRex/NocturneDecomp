// Name: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00472470
// Address: 00472470
// Address Range: [[00472470, 004724bd]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00472470(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00472470(CDemonRaytrace *this_ptr)

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
  _DAT_01d046a0 = "..\\core\\dtrace.cpp";
  _DAT_01d046a4 = 0x88;
  core_main_c_FUN_004e4500("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
