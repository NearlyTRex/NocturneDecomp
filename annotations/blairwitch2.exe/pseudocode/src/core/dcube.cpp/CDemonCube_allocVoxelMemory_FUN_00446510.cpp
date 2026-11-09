// Name: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510
// Address: 00446510
// Address Range: [[00446510, 00446587]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00446510(CDemonCube *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00446510(CDemonCube *this_ptr)

{
  int iVar1;
  
  iVar1 = FUN_005b98d0(0x40,1);
  *(int *)this_ptr = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x5f3;
    core_main_c_FUN_004e4500("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_005b98d0(0x40,1);
  *(int *)&this_ptr->field_0x4 = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dcube.cpp";
  _DAT_01d046a4 = 0x5f5;
  core_main_c_FUN_004e4500("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
