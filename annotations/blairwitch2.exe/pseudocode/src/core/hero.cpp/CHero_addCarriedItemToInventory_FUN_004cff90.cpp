// Name: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004cff90
// Address: 004cff90
// Address Range: [[004cff90, 004d006a]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004cff90(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004cff90(CHero *this_ptr,int hand_index)

{
  CDemonActor *item_actor;
  int iVar1;
  
  item_actor = (this_ptr->base).carry_hands[hand_index].carry_actor;
  if (item_actor != (CDemonActor *)0x0) {
    iVar1 = _strcmp(item_actor->actor_name,"63Ravinammo01");
    if (iVar1 == 0) {
      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                (g_CEventListPtr,"searchedravine",1);
    }
    iVar1 = _strcmp(item_actor->actor_name,"63Ravinammo02");
    if (iVar1 == 0) {
      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                (g_CEventListPtr,"searchedravine",1);
    }
    iVar1 = _strcmp(item_actor->actor_name,"63Ravinfood01");
    if (iVar1 == 0) {
      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                (g_CEventListPtr,"searchedravine",1);
    }
    core_inv_cpp_CInventory_addItem_FUN_004dadb0(this_ptr->inventories,item_actor,1,0);
    (this_ptr->base).carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
  }
  return;
}
