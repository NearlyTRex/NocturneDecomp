// Name: core_hero.cpp_FUN_004ec020
// Address: 004ec020
// Address Range: [[004ec020, 004ec08e]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004ec020(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_FUN_004ec020(CHero *this_ptr)

{
  int iVar1;
  
  if (*(CDemonActor **)(this_ptr + 0x1fe24) == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(this_ptr + 0x1fe24),"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(this_ptr + 0x154) + 0x148))(this_ptr);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004ebeb0(this_ptr);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004f9bd0
                    ((CInventory *)(this_ptr + 0x1fae8),*(CDemonActor **)(this_ptr + 0x1fe24));
  return iVar1;
}
