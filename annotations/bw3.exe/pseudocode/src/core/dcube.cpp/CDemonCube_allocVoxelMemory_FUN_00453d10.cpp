// Name: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10
// Address: 00453d10
// Address Range: [[00453d10, 00453d87]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00453d10(CDemonCube *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00453d10(CDemonCube *this_ptr)

{
  int iVar1;
  
  iVar1 = FUN_005a4b20(0x40,1);
  *(int *)this_ptr = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x5f3;
    core_main_c_FUN_004e4330("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_005a4b20(0x40,1);
  *(int *)&this_ptr->field_0x4 = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dcube.cpp";
  _DAT_01d71de4 = 0x5f5;
  core_main_c_FUN_004e4330("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
