// Name: FUN_00453d90
// Address: 00453d90
// Address Range: [[00453d90, 00453ebf]]
// Convention: unknown
// Signature: void FUN_00453d90(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453d90(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a40df(param_1[8] * 0xc);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x600;
    FUN_004e4330("CDemonCube::allocMemory - Out of vertex memory");
  }
  iVar1 = FUN_005a40df(param_1[10] << 5);
  param_1[0xb] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x602;
    FUN_004e4330("CDemonCube::allocMemory - Out of tri memory");
  }
  iVar1 = FUN_005a3650(param_1[10]);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x604;
    FUN_004e4330("CDemonCube::allocMemory - Out of ground type memory");
  }
  iVar1 = FUN_005a3650(0x40);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x606;
    FUN_004e4330("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_005a3650(0x40);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dcube.cpp";
  _DAT_01d71de4 = 0x608;
  FUN_004e4330("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
