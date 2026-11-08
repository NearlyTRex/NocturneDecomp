// Name: FUN_00457bc0
// Address: 00457bc0
// Address Range: [[00457bc0, 00457c37]]
// Convention: unknown
// Signature: void FUN_00457bc0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457bc0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c1cb0(0x40,1);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x5f3;
    FUN_005030e0("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_005c1cb0(0x40,1);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dcube.cpp";
  _DAT_01d1d404 = 0x5f5;
  FUN_005030e0("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
