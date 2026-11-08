// Name: FUN_00446590
// Address: 00446590
// Address Range: [[00446590, 004466bf]]
// Convention: unknown
// Signature: void FUN_00446590(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446590(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b8df8(param_1[8] * 0xc);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x600;
    FUN_004e4500("CDemonCube::allocMemory - Out of vertex memory");
  }
  iVar1 = FUN_005b8df8(param_1[10] << 5);
  param_1[0xb] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x602;
    FUN_004e4500("CDemonCube::allocMemory - Out of tri memory");
  }
  iVar1 = FUN_005b8580(param_1[10]);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x604;
    FUN_004e4500("CDemonCube::allocMemory - Out of ground type memory");
  }
  iVar1 = FUN_005b8580(0x40);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x606;
    FUN_004e4500("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_005b8580(0x40);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dcube.cpp";
  _DAT_01d046a4 = 0x608;
  FUN_004e4500("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
