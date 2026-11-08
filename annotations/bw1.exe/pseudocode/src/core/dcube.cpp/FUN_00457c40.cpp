// Name: FUN_00457c40
// Address: 00457c40
// Address Range: [[00457c40, 00457d6f]]
// Convention: unknown
// Signature: void FUN_00457c40(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457c40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c1268(param_1[8] * 0xc);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x600;
    FUN_005030e0("CDemonCube::allocMemory - Out of vertex memory");
  }
  iVar1 = FUN_005c1268(param_1[10] << 5);
  param_1[0xb] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x602;
    FUN_005030e0("CDemonCube::allocMemory - Out of tri memory");
  }
  iVar1 = FUN_005c08d0(param_1[10]);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x604;
    FUN_005030e0("CDemonCube::allocMemory - Out of ground type memory");
  }
  iVar1 = FUN_005c08d0(0x40);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x606;
    FUN_005030e0("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar1 = FUN_005c08d0(0x40);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dcube.cpp";
  _DAT_01d1d404 = 0x608;
  FUN_005030e0("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
