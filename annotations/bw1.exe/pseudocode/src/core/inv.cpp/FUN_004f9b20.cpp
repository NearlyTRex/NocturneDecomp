// Name: core_inv.cpp_FUN_004f9b20
// Address: 004f9b20
// Address Range: [[004f9b20, 004f9bc0]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004f9b20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004f9b20(int param_1)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
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
      pCVar1 = *(CDemonActor **)(iVar3 + 0x14);
      (*((pCVar1->vtable)._ub)->setup)(pCVar1);
      if (*(int *)(param_1 + 0x460) == 0) {
        pCVar2 = (CGoggles *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,g_CGogglesClassInfo.name_hash);
        *(CDemonActor **)(param_1 + 0x460) = pCVar2;
      }
      if (*(int *)(param_1 + 0x45c) == 0) {
        pCVar1 = (CGasMask *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,g_CGasMaskClassInfo.name_hash);
        *(CDemonActor **)(param_1 + 0x45c) = pCVar1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  return;
}
