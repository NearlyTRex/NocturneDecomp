// Name: FUN_004c1510
// Address: 004c1510
// Address Range: [[004c1510, 004c1579]]
// Convention: unknown
// Signature: void FUN_004c1510(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1510(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x450) != 0) {
    _DAT_01cc4800 = "..\\core\\inv.cpp";
    _DAT_01cc4804 = 0x56e;
    FUN_004c8440("CInventory::setupItems - we should own the items at this point!");
  }
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = iVar1 + 1;
      (*(code *)**(uint **)(*(int *)(iVar2 + 0xc) + 0x14c))(*(int *)(iVar2 + 0xc));
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}
