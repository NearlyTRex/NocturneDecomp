// Name: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0
// Address: 004ec2c0
// Address Range: [[004ec2c0, 004ec2ff]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(CHero *this_ptr,int hand_index)

{
  CDemonActor *item_actor;
  
  item_actor = (this_ptr->base).carry_hands[hand_index].carry_actor;
  if (item_actor == (CDemonActor *)0x0) {
    return;
  }
  core_inv_cpp_FUN_004f7690(&this_ptr->inventory,item_actor,1);
  (this_ptr->base).carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
  return;
}
