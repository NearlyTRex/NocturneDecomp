// Name: FUN_0044ac30
// Address: 0044ac30
// Address Range: [[0044ac30, 0044aca7]]
// Convention: unknown
// Signature: void FUN_0044ac30(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ac30(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00565c50(0x40,1);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\dcube.cpp";
    _DAT_01cc4804 = 0x5f3;
    FUN_004c8440("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_00565c50(0x40,1);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dcube.cpp";
  _DAT_01cc4804 = 0x5f5;
  FUN_004c8440("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
