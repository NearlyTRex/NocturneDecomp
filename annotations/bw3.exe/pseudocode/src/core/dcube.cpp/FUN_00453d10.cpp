// Name: FUN_00453d10
// Address: 00453d10
// Address Range: [[00453d10, 00453d87]]
// Convention: unknown
// Signature: void FUN_00453d10(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453d10(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a4b20(0x40,1);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x5f3;
    FUN_004e4330("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_005a4b20(0x40,1);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dcube.cpp";
  _DAT_01d71de4 = 0x5f5;
  FUN_004e4330("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
