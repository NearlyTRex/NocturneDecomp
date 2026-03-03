// Name: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004f38d0
// Address: 004f38d0
// Address Range: [[004f38d0, 004f390f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004f38d0(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004f38d0(CHero *this_ptr,int hand_index)

{
  CDemonActor *item_actor;
  
  item_actor = (this_ptr->base).carry_hands[hand_index].carry_actor;
  if (item_actor == (CDemonActor *)0x0) {
    return;
  }
  core_inv_cpp_CInventory_addItem_FUN_004fd600(&this_ptr->inventory,item_actor,1);
  (this_ptr->base).carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
  return;
}
