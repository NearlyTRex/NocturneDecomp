// Name: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70
// Address: 004b5c70
// Address Range: [[004b5c70, 004b5caf]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_2 * 0x44;
  iVar2 = *(int *)(iVar1 + 0x24ac);
  if (iVar2 == 0) {
    return;
  }
  core_inv_cpp_CInventory_addItem_FUN_004bf360(param_1 + 0x1f5a0,iVar2,1);
  *(uint *)(iVar1 + 0x24ac) = 0;
  return;
}
