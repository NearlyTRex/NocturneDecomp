// Name: core_dcube.cpp_FUN_0044ac30
// Address: 0044ac30
// Address Range: [[0044ac30, 0044aca7]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_0044ac30(int *param_1)

#include "nocturne.h"

void core_dcube_cpp_FUN_0044ac30(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00565c50(0x40,1);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    PTR_01cc4800 = "..\\core\\dcube.cpp";
    INT_01cc4804 = 0x5f3;
    core_main_c_FUN_004c8440("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_00565c50(0x40,1);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\dcube.cpp";
  INT_01cc4804 = 0x5f5;
  core_main_c_FUN_004c8440("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
