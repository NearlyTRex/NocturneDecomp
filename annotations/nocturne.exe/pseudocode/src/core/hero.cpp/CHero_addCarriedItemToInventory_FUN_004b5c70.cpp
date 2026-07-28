// Name: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70
// Address: 004b5c70
// Address Range: [[004b5c70, 004b5caf]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(CHero *this_ptr,int hand_index)

{
  CDemonActor *item_actor;
  
  item_actor = (this_ptr->base).carry_hands[hand_index].carry_actor;
  if (item_actor == (CDemonActor *)0x0) {
    return;
  }
  core_inv_cpp_CInventory_addItem_FUN_004bf360(&this_ptr->inventory,item_actor,1);
  (this_ptr->base).carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
  return;
}
