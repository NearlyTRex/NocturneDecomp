// Name: FUN_00446510
// Address: 00446510
// Address Range: [[00446510, 00446587]]
// Convention: unknown
// Signature: void FUN_00446510(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446510(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b98d0(0x40,1);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x5f3;
    FUN_004e4500("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_005b98d0(0x40,1);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dcube.cpp";
  _DAT_01d046a4 = 0x5f5;
  FUN_004e4500("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
