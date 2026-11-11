// Name: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10
// Address: 00453d10
// Address Range: [[00453d10, 00453d87]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00453d10(CDemonCube *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00453d10(CDemonCube *this_ptr)

{
  SVoxelGrid *pSVar1;
  
  pSVar1 = (SVoxelGrid *)calloc(0x40,1);
  this_ptr->voxel_buffer1 = pSVar1;
  if (pSVar1 == (SVoxelGrid *)0x0) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x5f3;
    core_main_c_FUN_004e4330("CDemonCube::allocMemory - Out of voxel memory");
  }
  pSVar1 = (SVoxelGrid *)calloc(0x40,1);
  this_ptr->voxel_buffer2 = pSVar1;
  if (pSVar1 != (SVoxelGrid *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dcube.cpp";
  _DAT_01d71de4 = 0x5f5;
  core_main_c_FUN_004e4330("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
