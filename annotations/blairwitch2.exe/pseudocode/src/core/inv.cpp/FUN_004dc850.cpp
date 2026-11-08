// Name: FUN_004dc850
// Address: 004dc850
// Address Range: [[004dc850, 004dc8b9]]
// Convention: unknown
// Signature: void FUN_004dc850(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc850(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x460) != 0) {
    _DAT_01d046a0 = "..\\core\\inv.cpp";
    _DAT_01d046a4 = 0x64e;
    FUN_004e4500("CInventory::setupItems - we should own the items at this point!");
  }
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = iVar1 + 1;
      (**(code **)(*(int *)(*(int *)(iVar2 + 0x14) + 0x2b0) + 8))(*(int *)(iVar2 + 0x14));
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  return;
}
