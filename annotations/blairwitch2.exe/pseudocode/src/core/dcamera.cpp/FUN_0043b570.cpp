// Name: FUN_0043b570
// Address: 0043b570
// Address Range: [[0043b570, 0043b720]]
// Convention: unknown
// Signature: void FUN_0043b570(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b570(int param_1,int param_2)

{
  int iVar1;
  
  FUN_0043b730(param_1);
  _DAT_0146694c = (param_2 * 4) / 3;
  _DAT_01466950 = param_2;
  if (0x1e0 < param_2) {
    param_2 = 0x1e0;
  }
  *(int *)(param_1 + 0x148) = param_2;
  *(uint *)(param_1 + 0x14c) = 1;
  *(int *)(param_1 + 0x144) = (param_2 * 4) / 3;
  *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x144);
  _DAT_01308800 = 0;
  iVar1 = *(int *)(param_1 + 0x150);
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x148);
  while (0x140 < iVar1) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) / 2;
    _DAT_01308800 = _DAT_01308800 + 1;
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) * 2;
    iVar1 = *(int *)(param_1 + 0x150);
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) / 2;
  }
  iVar1 = FUN_005b8580(*(int *)(param_1 + 0x144) * *(int *)(param_1 + 0x148) * 4 + 0x1010);
  *(int *)(param_1 + 0x160) = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x246;
    FUN_004e4500("CDemonCamera::init - Unable to alloc frame buffer");
  }
  iVar1 = FUN_005b8580(*(int *)(param_1 + 0x144) * *(int *)(param_1 + 0x148) * 4 + 0x1010);
  *(int *)(param_1 + 0x164) = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x24b;
    FUN_004e4500("CDemonCamera::init - Unable to alloc z buffer");
  }
  *(uint *)(param_1 + 0x158) = *(int *)(param_1 + 0x160) + 0x10U & 0xfffffff0;
  *(uint *)(param_1 + 0x15c) = *(int *)(param_1 + 0x164) + 0x10U & 0xfffffff0;
  return;
}
