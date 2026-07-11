// Name: FUN_00440010
// Address: 00440010
// Address Range: [[00440010, 004401a6]]
// Convention: unknown
// Signature: void FUN_00440010(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440010(int param_1,int param_2)

{
  int iVar1;
  
  FUN_004401d0(param_1);
  if (0x1e0 < param_2) {
    param_2 = 0x1e0;
  }
  *(int *)(param_1 + 0x140) = param_2;
  *(uint *)(param_1 + 0x14c) = 1;
  *(int *)(param_1 + 0x13c) = (param_2 * 4) / 3;
  *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x13c);
  _DAT_012b0660 = 0;
  iVar1 = *(int *)(param_1 + 0x150);
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x140);
  while (0x140 < iVar1) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) / 2;
    _DAT_012b0660 = _DAT_012b0660 + 1;
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) / 2;
    iVar1 = *(int *)(param_1 + 0x150);
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) * 2;
  }
  iVar1 = FUN_005635b0(*(int *)(param_1 + 0x13c) * *(int *)(param_1 + 0x140) * 4 + 0x1010);
  *(int *)(param_1 + 0x160) = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\dcamera.cpp";
    _DAT_01cc4804 = 0x248;
    FUN_004c8440("CDemonCamera::init - Unable to alloc frame buffer");
  }
  iVar1 = FUN_005635b0(*(int *)(param_1 + 0x13c) * *(int *)(param_1 + 0x140) * 4 + 0x1010);
  *(int *)(param_1 + 0x164) = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\dcamera.cpp";
    _DAT_01cc4804 = 0x24d;
    FUN_004c8440("CDemonCamera::init - Unable to alloc z buffer");
  }
  *(uint *)(param_1 + 0x158) = *(int *)(param_1 + 0x160) + 0x10U & 0xfffffff0;
  *(uint *)(param_1 + 0x15c) = *(int *)(param_1 + 0x164) + 0x10U & 0xfffffff0;
  return;
}
