// Name: FUN_0044acb0
// Address: 0044acb0
// Address Range: [[0044acb0, 0044adec]]
// Convention: unknown
// Signature: void FUN_0044acb0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044acb0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[8];
  piVar1 = (int *)FUN_00564c18(iVar3 * 0xc + 4);
  piVar2 = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 1;
    *piVar1 = iVar3;
  }
  param_1[9] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    _DAT_01cc4800 = "..\\core\\dcube.cpp";
    _DAT_01cc4804 = 0x600;
    FUN_004c8440("CDemonCube::allocMemory - Out of vertex memory");
  }
  iVar3 = FUN_00564c18(param_1[10] << 5);
  param_1[0xb] = iVar3;
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\core\\dcube.cpp";
    _DAT_01cc4804 = 0x602;
    FUN_004c8440("CDemonCube::allocMemory - Out of tri memory");
  }
  iVar3 = FUN_005635b0(param_1[10]);
  param_1[0xc] = iVar3;
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\core\\dcube.cpp";
    _DAT_01cc4804 = 0x604;
    FUN_004c8440("CDemonCube::allocMemory - Out of ground type memory");
  }
  iVar3 = FUN_005635b0(0x40);
  *param_1 = iVar3;
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\core\\dcube.cpp";
    _DAT_01cc4804 = 0x606;
    FUN_004c8440("CDemonCube::allocMemory - Out of voxel memory");
  }
  iVar3 = FUN_005635b0(0x40);
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dcube.cpp";
  _DAT_01cc4804 = 0x608;
  FUN_004c8440("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
