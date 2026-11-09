// Name: core_inv.cpp_FUN_004dcad0
// Address: 004dcad0
// Address Range: [[004dcad0, 004dcb39]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dcad0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004dcad0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x458) != 0) {
    _DAT_01d71de0 = "..\\core\\inv.cpp";
    _DAT_01d71de4 = 0x75c;
    core_main_c_FUN_004e4330("CInventory::setupItems - we should own the items at this point!");
  }
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = iVar1 + 1;
      (*(code *)**(uint **)(*(int *)(iVar2 + 0x14) + 0x154))(*(int *)(iVar2 + 0x14));
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  return;
}
