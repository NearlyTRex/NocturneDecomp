// Name: core_inv.cpp_FUN_004f9b20
// Address: 004f9b20
// Address Range: [[004f9b20, 004f9bc0]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004f9b20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004f9b20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x458) != 0) {
    _DAT_01d1d400 = "..\\core\\inv.cpp";
    _DAT_01d1d404 = 0x6c0;
    core_main_c_FUN_005030e0("CInventory::setupItems - we should own the items at this point!");
  }
  iVar4 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      (*(code *)**(uint **)(iVar1 + 0x154))(iVar1);
      if (*(int *)(param_1 + 0x460) == 0) {
        uVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,g_CGogglesClassInfo.name_hash);
        *(uint *)(param_1 + 0x460) = uVar2;
      }
      if (*(int *)(param_1 + 0x45c) == 0) {
        uVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,g_CGasMaskClassInfo.name_hash);
        *(uint *)(param_1 + 0x45c) = uVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  return;
}
